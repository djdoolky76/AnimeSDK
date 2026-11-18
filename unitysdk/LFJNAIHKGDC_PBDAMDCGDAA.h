#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LFJNAIHKGDC;

#define LFJNAIHKGDC_PBDAMDCGDAA_FLFGOAFFKNG_OFFSET UNITYSDK_OFFSET(0x11F08B20)
#define LFJNAIHKGDC_PBDAMDCGDAA__CTOR_OFFSET UNITYSDK_OFFSET(0x11F08B10)

inline static constexpr unsigned int LFJNAIHKGDC_PBDAMDCGDAA_TypeDefinitionIndex = 38781;

class LFJNAIHKGDC_PBDAMDCGDAA : public ::System::Object
{
public:
	::LFJNAIHKGDC* KLHPEBKNIFB; // 0x10
	::System::Single CIIPCCLOHLH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFJNAIHKGDC_PBDAMDCGDAA__CTOR_OFFSET))(this);
	}

	::System::Void FLFGOAFFKNG(::System::UInt32 GFOPLDDFDIA, ::System::UInt32 ELNEEALLBGO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LFJNAIHKGDC_PBDAMDCGDAA_FLFGOAFFKNG_OFFSET))(this, GFOPLDDFDIA, ELNEEALLBGO);
	}
};
