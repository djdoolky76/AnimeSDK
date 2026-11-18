#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EPAEPMNPMIN;
class IFOHGNLIAKH;

#define EPAEPMNPMIN_NFGGKMIHLKO_BOIOBOACAME_OFFSET UNITYSDK_OFFSET(0x14185DA0)
#define EPAEPMNPMIN_NFGGKMIHLKO__CTOR_OFFSET UNITYSDK_OFFSET(0x14185D90)

inline static constexpr unsigned int EPAEPMNPMIN_NFGGKMIHLKO_TypeDefinitionIndex = 76984;

class EPAEPMNPMIN_NFGGKMIHLKO : public ::System::Object
{
public:
	::EPAEPMNPMIN* KLHPEBKNIFB; // 0x10
	::System::Int32 KCNOHOOPNAH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAEPMNPMIN_NFGGKMIHLKO__CTOR_OFFSET))(this);
	}

	::System::Void BOIOBOACAME(::IFOHGNLIAKH* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + EPAEPMNPMIN_NFGGKMIHLKO_BOIOBOACAME_OFFSET))(this, JOLDOMEIKEF);
	}
};
