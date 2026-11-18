#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define AKAAONCKJJP_NHKKBMJDFBN_PGLDHCDILDD_OFFSET UNITYSDK_OFFSET(0x134D7620)
#define AKAAONCKJJP_NHKKBMJDFBN_PLMIFPHIBFB_OFFSET UNITYSDK_OFFSET(0x134D7630)
#define AKAAONCKJJP_NHKKBMJDFBN__CTOR_OFFSET UNITYSDK_OFFSET(0x134D7610)

inline static constexpr unsigned int AKAAONCKJJP_NHKKBMJDFBN_TypeDefinitionIndex = 42173;

class AKAAONCKJJP_NHKKBMJDFBN : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAAONCKJJP_NHKKBMJDFBN__CTOR_OFFSET))(this);
	}

	::System::Void PGLDHCDILDD(::OAEFGCLEHHO* HAAEBCOBKFF)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_NHKKBMJDFBN_PGLDHCDILDD_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Void PLMIFPHIBFB(::OAEFGCLEHHO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_NHKKBMJDFBN_PLMIFPHIBFB_OFFSET))(this, LJBPECKCCEA);
	}
};
