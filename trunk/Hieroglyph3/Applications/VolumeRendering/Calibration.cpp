//--------------------------------------------------------------------------------
#include "Calibration.h"
//--------------------------------------------------------------------------------
using namespace VSI;
//--------------------------------------------------------------------------------
Calibration::Calibration()
{
}
//--------------------------------------------------------------------------------
Calibration::~Calibration()
{
}
//--------------------------------------------------------------------------------
std::string Calibration::GetName()
{
	return( m_Name );
}
//--------------------------------------------------------------------------------
void Calibration::SetName( std::string& name )
{
	m_Name = name;
}
//--------------------------------------------------------------------------------