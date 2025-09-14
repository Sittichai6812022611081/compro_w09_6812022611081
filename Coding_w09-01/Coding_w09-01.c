#include <stdio.h>                                                                      // เรียกใช้ไลบรารีมาตรฐาน


int main(){                                                                             // ฟังก์ชันหลักของโปรแกรม
    int start_number, stop_number;                                                      //กำหนดตัวแปร start_number และ stop_number
    
    while(1){                                                                           //เริ่ม while loop

    printf("\nEnter start number: ");                                                   //แสดงข้อความ Enter start number:
    scanf("%d", &start_number);                                                         // รับค่าจากผู้ใช้
    printf("Enter stop number: ");                                                      //แสดงข้อความ Enter stop number:
    scanf("%d", &stop_number);                                                          // รับค่าจากผู้ใช้
                           
    printf("Start number is %d and stop number is %d\n", start_number, stop_number);    // แสดงข้อความ Start number is ค่าที่ได้ของ start_number and stop number is ค่าที่ได้ของ start_number 
    printf("---------------\n");                                                        // แสดงข้อความ ---------------
    
    
if(start_number < stop_number){                                                         // ถ้า start_number น้อยกว่า stop_number
 printf("Sequence from start to stop:");                                                // แสดงข้อความ Sequence from start to stop:
    for (int i = start_number; i <= stop_number; i++){                                  // เข้าวนลูป (for loop) โดย i = start_number โดย i <= stop_number จะ +1 หลังจบ loop body ในแต่ละรอบ
        printf(" %d", i);                                                               // แสดงค่าตัวเลขของ i ในแต่ละรอบ
    }
    break;                                                                              //หยุดโปรแกรม เมื่อ อยู่ในคำสั่ง start_number น้อยกว่า stop_number ทำการวนลูปจนจบ

}else if(start_number == stop_number){                                                  //แล้วถ้า start_number เท่ากับ stop_number
        printf("You Start number is equal to Stop number, please try again!\n");        //แสดงข้อความ You Start number is equal to Stop number, please try again!
}else if(start_number > stop_number){                                                   //แล้วถ้า start_number เท่ากับ stop_number
        printf("You Start number is greater than Stop number, please try again!\n");    //แสดงข้อความ You Start number is greater than Stop number, please try again!
}
}
printf("\nThank you.\n\n");                                                             // แสดงข้อความขอบคุณ

return 0;                                                                               //จบโปรแกรม

}