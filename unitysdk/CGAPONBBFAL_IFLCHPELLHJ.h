#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CGAPONBBFAL;

#define CGAPONBBFAL_IFLCHPELLHJ_GCDEIEHPIDK_OFFSET UNITYSDK_OFFSET(0x10E38FC0)
#define CGAPONBBFAL_IFLCHPELLHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x10E38FB0)

inline static constexpr unsigned int CGAPONBBFAL_IFLCHPELLHJ_TypeDefinitionIndex = 38564;

class CGAPONBBFAL_IFLCHPELLHJ : public ::System::Object
{
public:
	::CGAPONBBFAL* KLHPEBKNIFB; // 0x10
	::System::Int32 EOBEPDHMCJM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGAPONBBFAL_IFLCHPELLHJ__CTOR_OFFSET))(this);
	}

	::System::Void GCDEIEHPIDK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGAPONBBFAL_IFLCHPELLHJ_GCDEIEHPIDK_OFFSET))(this);
	}
};
