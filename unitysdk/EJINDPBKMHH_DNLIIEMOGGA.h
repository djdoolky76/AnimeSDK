#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EJINDPBKMHH_MJKNJMHIGMH;
class JGBMOOJHMBF;

#define EJINDPBKMHH_DNLIIEMOGGA_DHIJBLGNJAC_OFFSET UNITYSDK_OFFSET(0x1354DF10)
#define EJINDPBKMHH_DNLIIEMOGGA__CTOR_OFFSET UNITYSDK_OFFSET(0x1354DF00)

inline static constexpr unsigned int EJINDPBKMHH_DNLIIEMOGGA_TypeDefinitionIndex = 46503;

class EJINDPBKMHH_DNLIIEMOGGA : public ::System::Object
{
public:
	::EJINDPBKMHH_MJKNJMHIGMH* FGBNBFHOKAA; // 0x10
	::JGBMOOJHMBF* HMMMOCJAEOA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJINDPBKMHH_DNLIIEMOGGA__CTOR_OFFSET))(this);
	}

	::System::Void DHIJBLGNJAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJINDPBKMHH_DNLIIEMOGGA_DHIJBLGNJAC_OFFSET))(this);
	}
};
