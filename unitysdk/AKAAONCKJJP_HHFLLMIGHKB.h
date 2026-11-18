#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define AKAAONCKJJP_HHFLLMIGHKB_ADHEBADAMGF_OFFSET UNITYSDK_OFFSET(0x12664370)
#define AKAAONCKJJP_HHFLLMIGHKB_ELDGIIMOMNM_OFFSET UNITYSDK_OFFSET(0x12664360)
#define AKAAONCKJJP_HHFLLMIGHKB__CTOR_OFFSET UNITYSDK_OFFSET(0x12664350)

inline static constexpr unsigned int AKAAONCKJJP_HHFLLMIGHKB_TypeDefinitionIndex = 42191;

class AKAAONCKJJP_HHFLLMIGHKB : public ::System::Object
{
public:
	::System::Action* IFKOKLCPMNF; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAAONCKJJP_HHFLLMIGHKB__CTOR_OFFSET))(this);
	}

	::System::Void ELDGIIMOMNM(::OAEFGCLEHHO* HAAEBCOBKFF)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_HHFLLMIGHKB_ELDGIIMOMNM_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Void ADHEBADAMGF(::OAEFGCLEHHO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_HHFLLMIGHKB_ADHEBADAMGF_OFFSET))(this, LJBPECKCCEA);
	}
};
