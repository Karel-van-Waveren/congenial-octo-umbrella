#include "stdafx.h"
#include "deel1.h"
#include "CameraCalibration.h"

bool USE_NEW_CAL_FILE = true;

int main( int argc, char* argv[] ) {
	//deel1 deel1;
	//deel1.deel1Code();

	CameraCalibration* cali = new CameraCalibration();
	cali->calibrate_camera( USE_NEW_CAL_FILE );
}
