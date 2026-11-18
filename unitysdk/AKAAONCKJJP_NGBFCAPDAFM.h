#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define AKAAONCKJJP_NGBFCAPDAFM_CMIOELHMOPP_OFFSET UNITYSDK_OFFSET(0x12D00C90)
#define AKAAONCKJJP_NGBFCAPDAFM_GGJMPJOPLGA_OFFSET UNITYSDK_OFFSET(0x12D00CA0)
#define AKAAONCKJJP_NGBFCAPDAFM__CTOR_OFFSET UNITYSDK_OFFSET(0x12D00C80)

inline static constexpr unsigned int AKAAONCKJJP_NGBFCAPDAFM_TypeDefinitionIndex = 42182;

class AKAAONCKJJP_NGBFCAPDAFM : public ::System::Object
{
public:
	::System::Action* IFKOKLCPMNF; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAAONCKJJP_NGBFCAPDAFM__CTOR_OFFSET))(this);
	}

	::System::Void CMIOELHMOPP(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_NGBFCAPDAFM_CMIOELHMOPP_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void GGJMPJOPLGA(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_NGBFCAPDAFM_GGJMPJOPLGA_OFFSET))(this, PIIPCLCCOIG);
	}
};
