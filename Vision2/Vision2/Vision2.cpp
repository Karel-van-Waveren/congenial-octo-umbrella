#include "stdafx.h"
#include "deel1.h"
#include "CameraCalibration.h"
#include "BoundingBoxClass.h"

bool USE_NEW_CAL_FILE = true;

int main( int argc, char* argv[] ) {
	//deel1 deel1;
	//deel1.deel1Code();

	//CameraCalibration* cali = new CameraCalibration();
	//cali->calibrate_camera( USE_NEW_CAL_FILE );

	BoundingBoxClass BB;
	std::string path = "C:\\Users\\jeroe\\Google Drive\\vision\\Vision2\\fase2\\rummikubbin.bmp";
	BB.CutTrainingSet( path, BoundingBoxClass::rummikubbin );
}
