#include<stdio.h>
#include<stdlib.h>




                                     

                                    int
                                    main
                                  (int argc
                                 ,char*argv
                                []){if(argc
                               !=2){printf(""
                              "wrong number "
                              "of arguments")
                             ;return -1;}long
                              pop=strtol(argv
                            [1],NULL,10);printf
                            ("1f each person s"
                           "aves 1 cube dm per "
                           "day,we together are"
                           " able to save %.2f c"
                           "ube meter of water "
                            "per year!",(pop*.001
                             )*365);return 0;}