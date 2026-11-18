#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OIAMLAFICJP_CMKMKKJPNAP;

#define OIAMLAFICJP_HPCDPFAFFFB_JPMIAECEHDC_OFFSET UNITYSDK_OFFSET(0xFD898E0)
#define OIAMLAFICJP_HPCDPFAFFFB__CTOR_OFFSET UNITYSDK_OFFSET(0xFD86A60)

inline static constexpr unsigned int OIAMLAFICJP_HPCDPFAFFFB_TypeDefinitionIndex = 47228;

class OIAMLAFICJP_HPCDPFAFFFB : public ::System::Object
{
public:
	::System::UInt32 OCJJGOAFKKG; // 0x10
	::System::Int32 HIFEKGCCLKG; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIAMLAFICJP_HPCDPFAFFFB__CTOR_OFFSET))(this);
	}

	::System::Boolean JPMIAECEHDC(::OIAMLAFICJP_CMKMKKJPNAP* IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::OIAMLAFICJP_CMKMKKJPNAP*))((::PBYTE)hIl2Cpp + OIAMLAFICJP_HPCDPFAFFFB_JPMIAECEHDC_OFFSET))(this, IPMMCGDMODG);
	}
};
