#include <opencv\cv.h>
#include <opencv\highgui.h>

int main(void)
{
	IplImage* image = cvLoadImage("C:\\opencv\\build\\doc\\opencv-logo.png");
	IplImage* image2 = cvLoadImage("C:\\opencv\\build\\doc\\opencv-logo.png");

	cvShowImage("jjk", image);
	cvShowImage("jjkcopy", image2);
	cvWaitKey(0);

	cvReleaseImage(&image);
	cvReleaseImage(&image2);


	return 0;
}