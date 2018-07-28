#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
  char pass[8],d;
  system("clear");
  system("clear");


  logp: printf("\t\t\t\t ARANAGAR GOVT. PRIMARY SCHOOL.\n \t\t\t\t Aranagar, Dhamoirhat, Naogaon\n\n\n");
  printf("\n\t\t\t\t Enter Password: ");
  scanf("%s",pass);
  system("clear");
  if (!strcmp(pass,"scms#01"))
  {
	mainmenu:

      printf("\t\t\t\t Welcome to Main Menu\n\n");
      printf("\t\t\t\t 1.Students\n");
      printf("\t\t\t\t 2.Teachers\n");
      printf("\t\t\t\t 3.Data Editing\n");
      printf("\t\t\t\t 4.Logout\n");
      printf("\t\t\t\t choose your option: ");
      int a;
      scanf("%d",&a);
      system("clear");
      system("clear");
      if(a==1)
            goto student;
      else if (a==2)
            goto teacher;
       else if(a==3)
            goto data;
		else if(a==4)
			goto logp;
			else
			{
				printf("\t\t\t\t Wrong Keyword! \n\n");
				goto mainmenu;
			}


}
 else if (pass!="scmd#01")
  {
  printf("\t\t\t\t Access denied\n\n\n\n");

  hp:printf("\t\t\t\t Homepage?(Y/n): ");
  scanf("%*c%c",&d);
  system("clear");
  system("clear");
  if(d=='y'|| d=='Y')
  {
      goto logp;
  }

  else if(d=='n'|| d=='N')
  return 0;
  else
  {
  	printf("\t\t\t\t Wrong Keyword! \n\n");
  	goto hp;
  }
  }

  student:
	{

  	  printf("\t\t\t\t STUDENTS \n\n\n");
      printf("\t\t\t\t 1.Class 1\n");
      printf("\t\t\t\t 2.Class 2\n");
      printf("\t\t\t\t 3.Class 3\n");
      printf("\t\t\t\t 4.Class 4\n");
      printf("\t\t\t\t 5.Class 5\n");
      printf("\t\t\t\t 6.Previous Page\n");
      printf("\t\t\t\t 7.Logout\n");
      printf("\t\t\t\t Choose Your Option: ");
      int clss;
      scanf("%d",&clss);
      system("clear");
      system("clear");
      if (clss==1)
            goto cls1;

        else if (clss==2)
            goto cls2;

       else if (clss==3)
            goto cls3;

       else if (clss==4)
            goto cls4;

       else if (clss==5)
            goto cls5;
        else if(clss==6)
				goto mainmenu;
				else if(clss==7)
				goto logp;
		else
			{
				printf("\t\t\t\t Wrong Keyword!\n\n");
				goto student;
			}

	}
        cls1:
        	{
                    printf("\t\t\t\t Class 1 \n\n\n");
					printf("\t\t\t\t 1.Students List\n");
					printf("\t\t\t\t 2.All Students Result\n");
					printf("\t\t\t\t 3.Students Guardians Phone Number\n");
                    printf("\t\t\t\t 4.Previous Page\n");
                    printf("\t\t\t\t 5.Logout\n");
                    printf("\t\t\t\t Choose Your Option:");
                    int opt1;
                    scanf("%d",&opt1);

					system("clear");
					system("clear");
                    if(opt1 == 1)
					{
						cl1sl: printf("\t\t\t\t Students List of Class 1 \n\n\n");
						FILE *fc1sl;
						fc1sl=fopen("cls1stulst.txt","r");
						if(fc1sl==NULL)
							printf("\t\t\t\t File Not Found!\n ");
						else
						{
								char inp[1024];
								int line=0;
								while(fgets(inp,1024,fc1sl))
								{
									line++;
									printf("%s",inp);
								}
								fclose(fc1sl);
						}

							printf("\n\t\t\t\t 1.Previous Page\n");
							printf("\t\t\t\t 2.Logout\n");
							printf("\t\t\t\t 3.Choose Your Option: ");
                            int c1sl;
                            scanf("%d",&c1sl);
                            system("clear");
                            if (c1sl==1)
								goto cls1;
							else if(c1sl==2)
								goto logp;
							else
								{
									printf("\t\t\t\t Wrong Keyword!\n\n");
									goto cl1sl;
								}

					}

					else if(opt1 ==2)
					{

					cl1asr: printf("\t\t\t\t Result of Class 1 \n\n\n");
						FILE *fc1sr;
						fc1sr=fopen("cls1result.txt","r");
						if(fc1sr==NULL)
							printf("\t\t\t\t File Not Found!\n ");
						else
						{

							char inp[1024];
							int line=0;
							while(fgets(inp,1024,fc1sr))
							{
								line++;
								printf("%s",inp);
							}
							fclose(fc1sr);
						}

							printf("\n\t\t\t\t 1.Previous Page\n");
							printf("\t\t\t\t 2.Logout\n");
							printf("\t\t\t\t 3.Choose Your Option: ");
                            int c1asr;
                            scanf("%d",&c1asr);
                            system("clear");
                            if (c1asr==1)
								goto cls1;
							else if(c1asr==2)
								goto logp;
							else
								{
									printf("\t\t\t\t Wrong Keyword!\n\n");
									goto cl1asr;
								}

					}

					else if(opt1 ==3)
					{
					    cl1gpn: printf("\t\t\t\t Class 1 Students Guardians Phone Number \n\n\n");
						FILE *fc1grd;
						fc1grd=fopen("cls1stugrdcell.txt","r");
						if(fc1grd==NULL)
							printf("\t\t\t\t File Not Found!\n ");
						else
						{
								char inp[1024];
								int line=0;
								while(fgets(inp,1024,fc1grd))
								{
									line++;
									printf("%s",inp);
								}
								fclose(fc1grd);
						}


							printf("\n\t\t\t\t 1.Previous Page\n");
							printf("\t\t\t\t 2.Logout\n");
							printf("\t\t\t\t 3.Choose Your Option: ");
                            int c1gpn;
                            scanf("%d",&c1gpn);
                            system("clear");
                            if (c1gpn==1)
								goto cls1;
							else if(c1gpn==2)
								goto logp;
							else
								{
									printf("\t\t\t\t Wrong Keyword!\n\n");
									goto cl1gpn;
								}
					}
					else if (opt1 == 4 )
						goto student;
					else if (opt1 == 5 )
						goto logp;
					else
					{
						printf("\t\t\t\t Wrong Keyword!\n\n");
						goto cls1;
					}
        	}

        cls2:
			{

                    printf("\t\t\t\t Class 2 \n\n\n");
                    printf("\t\t\t\t 1.Students List\n");
                    printf("\t\t\t\t 2.All Students Result\n");
                    printf("\t\t\t\t 3.Students Guardians Phone Number\n");
                    printf("\t\t\t\t 4.Previous Page\n");
                    printf("\t\t\t\t 5.Logout\n");
                    printf("\t\t\t\t Choose Your Option:");
					int opt2;
                    scanf("%d",&opt2);
                    system("clear");
                    system("clear");
                    if(opt2 == 1)
					{
						cl2sl: printf("\t\t\t\t Students List of Class 2 \n\n\n");
						FILE *fc2sl;
						fc2sl=fopen("cls2stulst.txt","r");
						if(fc2sl==NULL)
							printf("\t\t\t\t File Not Found!\n ");
						else
						{
								char inp[1024];
								int line=0;
								while(fgets(inp,1024,fc2sl))
								{
									line++;
									printf("%s",inp);
								}
								fclose(fc2sl);
						}
							printf("\n\t\t\t\t 1.Previous Page\n");
							printf("\t\t\t\t 2.Logout\n");
							printf("\t\t\t\t 3.Choose Your Option: ");
                            int c2sl;
                            scanf("%d",&c2sl);
                            system("clear");
                            system("clear");
                            if (c2sl==1)
								goto cls2;
							else if(c2sl==2)
								goto logp;
							else
								{
									printf("\t\t\t\t Wrong Keyword!\n\n");
									goto cl2sl;
								}
					}


					else if(opt2 ==2)
					{
						cl2asr: printf("\t\t\t\t Result of Class 2 \n\n\n");
						FILE *fc2sr;
						fc2sr=fopen("cls2result.txt","r");
						if(fc2sr==NULL)
							printf("\t\t\t\t File Not Found!\n ");
						else
						{
								char inp[1024];
								int line=0;
								while(fgets(inp,1024,fc2sr))
								{
									line++;
									printf("%s",inp);
								}
								fclose(fc2sr);
						}

							printf("\n\t\t\t\t 1.Previous Page\n");
							printf("\t\t\t\t 2.Logout\n");
							printf("\t\t\t\t 3.Choose Your Option: ");
                            int c2asr;
                            scanf("%d",&c2asr);
                            system("clear");
                            if (c2asr==1)
								goto cls2;
							else if(c2asr==2)
								goto logp;
							else
								{
									printf("\t\t\t\t Wrong Keyword!\n\n");
									goto cl2asr;
								}
					}


					else if(opt2 == 3)
					{
						cl2gpn: printf("\t\t\t\t Class 2 Students Guardians Phone Number \n\n\n");
						FILE *fc2grd;
						fc2grd=fopen("cls2stugrdcell.txt","r");
						if(fc2grd==NULL)
							printf("\t\t\t\t File Not Found!\n ");
						else
						{
								char inp[1024];
								int line=0;
								while(fgets(inp,1024,fc2grd))
								{
									line++;
									printf("%s",inp);
								}
								fclose(fc2grd);
						}

							printf("\n\t\t\t\t 1.Previous Page\n");
							printf("\t\t\t\t 2.Logout\n");
							printf("\t\t\t\t 3.Choose Your Option: ");
							int c2gpn;
							scanf("%d",&c2gpn);
							system("clear");
							if (c2gpn==1)
								goto cls2;
							else if(c2gpn==2)
								goto logp;
							else
								{
									printf("\t\t\t\t Wrong Keyword!\n\n");
									goto cl2gpn;
								}
					}
					else if (opt2 == 4 )
						goto student;
					else if (opt2 == 5 )
						goto logp;
					else
					{
						printf("\t\t\t\t Wrong Keyword!\n\n");
						goto cls2;
					}
			}
        cls3:
        	{
					printf("\t\t\t\t Class 3 \n\n\n");
                    printf("\t\t\t\t 1.Students List\n");
                    printf("\t\t\t\t 2.All Students Result\n");
                    printf("\t\t\t\t 3.Students Guardians Phone Number\n");
                    printf("\t\t\t\t 4.Previous Page\n");
                    printf("\t\t\t\t 5.Logout\n");
                    printf("\t\t\t\t Choose Your Option:");
					int opt3;
                    scanf("%d",&opt3);
                    system("clear");
                    system("clear");
                    if(opt3 == 1)
					{
						cl3sl: printf("\t\t\t\t Students List of Class 3 \n\n\n");
						FILE *fc3sl;
						fc3sl=fopen("cls3stulst.txt","r");
						if(fc3sl==NULL)
							printf("\t\t\t\t File Not Found!\n ");
						else
						{
								char inp[1024];
								int line=0;
								while(fgets(inp,1024,fc3sl))
								{
									line++;
									printf("%s",inp);
								}
								fclose(fc3sl);
						}
							printf("\n\t\t\t\t 1.Previous Page\n");
							printf("\t\t\t\t 2.Logout\n");
							printf("\t\t\t\t 3.Choose Your Option: ");
                            int c3sl;
                            scanf("%d",&c3sl);
                            system("clear");
                            system("clear");
                            if (c3sl==1)
								goto cls3;
							else if(c3sl==2)
								goto logp;
							else
								{
									printf("\t\t\t\t Wrong Keyword!\n\n");
									goto cl3sl;
								}


					}


					else if(opt3 ==2)
					{
						cl3asr: printf("\t\t\t\t Result of Class 3 \n\n\n");
						FILE *fc3sr;
						fc3sr=fopen("cls3result.txt","r");
						if(fc3sr==NULL)
							printf("\t\t\t\t File Not Found!\n ");
						else
						{
								char inp[1024];
								int line=0;
								while(fgets(inp,1024,fc3sr))
								{
									line++;
									printf("%s",inp);
								}
								fclose(fc3sr);
						}
							printf("\n\t\t\t\t 1.Previous Page\n");
							printf("\t\t\t\t 2.Logout\n");
							printf("\t\t\t\t 3.Choose Your Option: ");
                            int c3asr;
                            scanf("%d",&c3asr);
                            system("clear");
                            if (c3asr==1)
								goto cls3;
							else if(c3asr==2)
								goto logp;
							else
								{
									printf("\t\t\t\t Wrong Keyword!\n\n");
									goto cl3asr;
								}

					}


					else if(opt3 ==3)
					{
						cl3gpn: printf("\t\t\t\t Class 3 Students Guardians Phone Number \n\n\n");
						FILE *fc3grd;
						fc3grd=fopen("cls3stugrdcell.txt","r");
						if(fc3grd==NULL)
							printf("\t\t\t\t File Not Found!\n ");
						else
						{
								char inp[1024];
								int line=0;
								while(fgets(inp,1024,fc3grd))
								{
									line++;
									printf("%s",inp);
								}
								fclose(fc3grd);
						}
							printf("\n\t\t\t\t 1.Previous Page\n");
							printf("\t\t\t\t 2.Logout\n");
							printf("\t\t\t\t 3.Choose Your Option: ");
							int c3gpn;
							scanf("%d",&c3gpn);
							system("clear");
							if (c3gpn==1)
								goto cls3;
							else if(c3gpn==2)
								goto logp;
							else
								{
									printf("\t\t\t\t Wrong Keyword!\n\n");
									goto cl3gpn;
								}
					}
					else if (opt3 == 4 )
					goto student;
					else if (opt3 == 5 )
						goto logp;
					else
					{
						printf("\t\t\t\t Wrong Keyword!\n\n");
						goto cls3;
					}

        	}

        cls4:
        	{
					printf("\t\t\t\t Class 4 \n\n\n");
                    printf("\t\t\t\t 1.Students List\n");
                    printf("\t\t\t\t 2.All Students Result\n");
                    printf("\t\t\t\t 3.Students Guardians Phone Number\n");
                    printf("\t\t\t\t 4.Previous Page\n");
                    printf("\t\t\t\t 5.Logout\n");
                    printf("\t\t\t\t Choose Your Option:");
					int opt4;
                    scanf("%d",&opt4);
                    system("clear");
                    system("clear");
                    if(opt4 == 1)
					{
						cl4sl: printf("\t\t\t\t Students List of Class 4 \n\n\n");
						FILE *fc4sl;
						fc4sl=fopen("cls4stulst.txt","r");
						if(fc4sl==NULL)
							printf("\t\t\t\t File Not Found!\n ");
						else
						{
								char inp[1024];
								int line=0;
								while(fgets(inp,1024,fc4sl))
								{
									line++;
									printf("%s",inp);
								}
								fclose(fc4sl);
						}
							printf("\n\t\t\t\t 1.Previous Page\n");
							printf("\t\t\t\t 2.Logout\n");
							printf("\t\t\t\t 3.Choose Your Option: ");
                            int c4sl;
                            scanf("%d",&c4sl);
                            system("clear");
                            system("clear");
                            if (c4sl==1)
								goto cls4;
							else if(c4sl==2)
								goto logp;
							else
								{
									printf("\t\t\t\t Wrong Keyword!\n\n");
									goto cl4sl;
								}
					}

					else if(opt4 ==2)
					{
						cl4asr: printf("\t\t\t\t Result of Class 4 \n\n\n");
						FILE *fc4sr;
						fc4sr=fopen("cls4result.txt","r");
						if(fc4sr==NULL)
							printf("\t\t\t\t File Not Found!\n ");
						else
						{
								char inp[1024];
								int line=0;
								while(fgets(inp,1024,fc4sr))
								{
									line++;
									printf("%s",inp);
								}
								fclose(fc4sr);
						}
							printf("\n\t\t\t\t 1.Previous Page\n");
							printf("\t\t\t\t 2.Logout\n");
							printf("\t\t\t\t 3.Choose Your Option: ");
                            int c4asr;
                            scanf("%d",&c4asr);
                            system("clear");
                            system("clear");
                            if (c4asr==1)
								goto cls4;
							else if(c4asr==2)
								goto logp;
							else
								{
									printf("\t\t\t\t Wrong Keyword!\n\n");
									goto cl4asr;
								}
					}
					else if(opt4 ==3)
					{
						cl4gpn: printf("\t\t\t\t Class 4 Students Guardians Phone Number \n\n\n");
						FILE *fc4grd;
						fc4grd=fopen("cls4stugrdcell.txt","r");
						if(fc4grd==NULL)
							printf("\t\t\t\t File Not Found!\n ");
						else
						{
								char inp[1024];
								int line=0;
								while(fgets(inp,1024,fc4grd))
								{
									line++;
									printf("%s",inp);
								}
								fclose(fc4grd);
						}
							printf("\n\t\t\t\t 1.Previous Page\n");
							printf("\t\t\t\t 2.Logout\n");
							printf("\t\t\t\t 3.Choose Your Option: ");
							int c4gpn;
							scanf("%d",&c4gpn);
							system("clear");
							system("clear");
							if (c4gpn==1)
								goto cls4;
							else if(c4gpn==2)
								goto logp;
							else
								{
									printf("\t\t\t\t Wrong Keyword!\n\n");
									goto cl4gpn;
								}
					}
					else if (opt4 == 4 )
					goto student;
					else if (opt4 == 5 )
						goto logp;
					else
					{
						printf("\t\t\t\t Wrong Keyword!\n\n");
						goto cls4;
					}


        	}
        cls5:
			{
				    printf("\t\t\t\t Class 5 \n\n\n");
                    printf("\t\t\t\t 1.Students List\n");
                    printf("\t\t\t\t 2.All Students Result\n");
                    printf("\t\t\t\t 3.Students Guardians Phone Number\n");
                    printf("\t\t\t\t 4.Previous Page\n");
                    printf("\t\t\t\t 5.Logout\n");
                    printf("\t\t\t\t Choose Your Option:");
					int opt5;
                    scanf("%d",&opt5);
                    system("clear");
                    system("clear");
                    if(opt5 == 1)
					{
						cl5sl: printf("\t\t\t\t Students List of Class 5 \n\n\n");
						FILE *fc5sl;
						fc5sl=fopen("cls5stulst.txt","r");
						if(fc5sl==NULL)
							printf("\t\t\t\t File Not Found!\n ");
						else
						{
								char inp[1024];
								int line=0;
								while(fgets(inp,1024,fc5sl))
								{
									line++;
									printf("%s",inp);
								}
								fclose(fc5sl);
						}

					}

					else if(opt5 ==2)
					{
						cl5asr: printf("\t\t\t\t Result of Class 5 \n\n\n");
						FILE *fc5sr;
						fc5sr=fopen("cls5result.txt","r");
						if(fc5sr==NULL)
							printf("\t\t\t\t File Not Found!\n ");
						else
						{
								char inp[1024];
								int line=0;
								while(fgets(inp,1024,fc5sr))
								{
									line++;
									printf("%s",inp);
								}
								fclose(fc5sr);
						}

					}


					else if(opt5 ==3)
					{
						printf("\t\t\t\t Class 5 Students Guardians Phone Number \n\n\n");
						FILE *fc5grd;
						fc5grd=fopen("cls5stugrdcell.txt","r");
						if(fc5grd==NULL)
							printf("\t\t\t\t File Not Found!\n ");
						else
						{
								char inp[1024];
								int line=0;
								while(fgets(inp,1024,fc5grd))
								{
									line++;
									printf("%s",inp);
								}
								fclose(fc5grd);
						}
							printf("\n\t\t\t\t 1.Previous Page\n");
							printf("\t\t\t\t 2.Logout\n");
							printf("\t\t\t\t 3.Choose Your Option: ");
							int c4gpn;
							scanf("%d",&c4gpn);
							system("clear");
							system("clear");
							if (c4gpn==1)
								goto cls4;
							else if(c4gpn==2)
								goto logp;
							else
								{
									printf("\t\t\t\t Wrong Keyword!\n\n");
									goto cl4gpn;
								}

					}
					else if (opt5 == 4 )
					goto student;
					else if (opt5 == 5 )
						goto logp;
					else
					{
						printf("\t\t\t\t Wrong Keyword!\n\n");
						goto cls5;
					}
			}
    teacher:
			{
					tslst: printf("\t\t\t\t TEACHERS \n\n\n");
					printf("\t\t\t\t Teachers List With phone Number\n\n\n");

					{
						FILE *ftcr;
						ftcr=fopen("Teachers.txt","r");
						if(ftcr==NULL)
							printf("\t\t\t\t File Not Found!\n ");
						else
						{
								char inp[1024];
								int line=0;
								while(fgets(inp,1024,ftcr))
								{
									line++;
									printf("%s",inp);
								}
								fclose(ftcr);

						}
							printf("\n\t\t\t\t 1.Previous Page\n");
							printf("\t\t\t\t 2.Logout\n");
							printf("\t\t\t\t 3.Choose Your Option: ");
							int tlst;
							scanf("%d",&tlst);
							system("clear");
							system("clear");
							if (tlst==1)
								goto mainmenu;
							else if(tlst==2)
								goto logp;
							else
								{
									printf("\t\t\t\t Wrong Keyword!\n\n");
									goto tslst;
								}


					}
			}
	data:
		{
			printf("\t\t\t\t Do You Really Want To Edit Data(Y/n): ");
			char dis;
			scanf("%*c%c",&dis);
			system("clear");
			system("clear");
			if(dis=='y' || dis=='Y' )
			{
				char u_n[50],tpass[8];
				logp2:
				printf("\t\t\t\t Enter Username: ");
				scanf("%s",u_n);
				printf("\t\t\t\t Enter Password: ");
				scanf("%s",tpass);
				system("clear");
				system("clear");
				if(!((strcmp(u_n,"shammi_akter") && strcmp(tpass,"s2365i"))))
				{
					system("notepad cls1stulst.txt cls1result.txt cls1stugrdcell.txt");
					printf("\t\t\t\t >>Task Done Successfully<< \n\n");
					ct1:
					printf("\t\t\t\t 1.Logout From Data Editing\n");
					printf("\t\t\t\t 2.Logout\n");
					printf("\t\t\t\t Choose Your Option: ");
					int c1ct;
					scanf("%d",&c1ct);
					system("clear");
					system("clear");
					if(c1ct==1)
						goto mainmenu;
					else if(c1ct==2)
						goto logp;
					else
					{
						printf("\t\t\t\t Wrong Keyword! \n");
						goto ct1;
					}

				}
				else if(!((strcmp(u_n,"mukhlesur_rahman") && strcmp(tpass,"m5675r"))))
				{
					system("notepad cls2stulst.txt cls2result.txt cls2stugrdcell.txt");
					printf("\t\t\t\t >>Task Done Successfully<< \n\n");
					ct2:
					printf("\t\t\t\t 1.Logout From Data Editing\n");
					printf("\t\t\t\t 2.Logout\n");
					printf("\t\t\t\t Choose Your Option: ");
					int c2ct;
					scanf("%d",&c2ct);
					system("clear");
					system("clear");
					if(c2ct==1)
						goto mainmenu;
					else if(c2ct==2)
						goto logp;
					else
					{
						printf("\t\t\t\t Wrong Keyword! \n");
						goto ct2;
					}
				}
				else if(!((strcmp(u_n,"nizam_uddin") && strcmp(tpass,"n8855m"))))
				{
					system("notepad cls3stulst.txt cls3result.txt cls3stugrdcell.txt");
					printf("\t\t\t\t >>Task Done Successfully<< \n\n");
					ct3:
					printf("\t\t\t\t 1.Logout From Data Editing\n");
					printf("\t\t\t\t 2.Logout\n");
					printf("\t\t\t\t Choose Your Option: ");
					int c3ct;
					scanf("%d",&c3ct);
					system("clear");
					system("clear");
					if(c3ct==1)
						goto mainmenu;
					else if(c3ct==2)
						goto logp;
					else
					{
						printf("\t\t\t\t Wrong Keyword! \n");
						goto ct3;
					}
				}
				else if(!((strcmp(u_n,"samir_ali") && strcmp(tpass,"s2233r"))))
				{
					system("notepad cls4stulst.txt cls4result.txt cls4stugrdcell.txt");
					printf("\t\t\t\t >>Task Done Successfully<< \n\n");
					ct4:
					printf("\t\t\t\t 1.Logout From Data Editing\n");
					printf("\t\t\t\t 2.Logout\n");
					printf("\t\t\t\t Choose Your Option: ");
					int c4ct;
					scanf("%d",&c4ct);
					system("clear");
					system("clear");
					if(c4ct==1)
						goto mainmenu;
					else if(c4ct==2)
						goto logp;
					else
					{
						printf("\t\t\t\t Wrong Keyword! \n");
						goto ct4;
					}
				}
				else if(!((strcmp(u_n,"jubayer_talukder") && strcmp(tpass,"j4523r"))))
				{
					system("notepad cls5stulst.txt cls5result.txt cls5stugrdcell.txt");
					printf("\t\t\t\t >>Task Done Successfully<< \n\n");
					ct5:
					printf("\t\t\t\t 1.Logout From Data Editing\n");
					printf("\t\t\t\t 2.Logout\n");
					printf("\t\t\t\t Choose Your Option: ");
					int c5ct;
					scanf("%d",&c5ct);
					system("clear");
					system("clear");
					if(c5ct==1)
						goto mainmenu;
					else if(c5ct==2)
						goto logp;
					else
					{
						printf("\t\t\t\t Wrong Keyword! \n");
						goto ct5;
					}
				}
				else
					{
						wunp:printf("\t\t\t\t Wrong Username or Password!\n\n");
						printf("\t\t\t\t 1.Previous  Page\n");
						printf("\t\t\t\t 2.Mainmenu\n");
						printf("\t\t\t\t Choose Your Option: ");
						int slp;
						scanf("%d",&slp);
						system("clear");
						system("clear");
						if(slp==1)
							goto logp2;
						else if(slp==2)
							goto mainmenu;
						else
							goto wunp;

					}

			}
			else if(dis=='n' || dis== 'N')
				goto mainmenu;

			else
				goto data;

		}

}
