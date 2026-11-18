#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define AKAAONCKJJP_HDLHECJKPBP_FKIJLKEAIJM_OFFSET UNITYSDK_OFFSET(0x16D8BCB0)
#define AKAAONCKJJP_HDLHECJKPBP_GFPOHBPMABL_OFFSET UNITYSDK_OFFSET(0x16D8BCC0)
#define AKAAONCKJJP_HDLHECJKPBP__CTOR_OFFSET UNITYSDK_OFFSET(0x16D8BCA0)

inline static constexpr unsigned int AKAAONCKJJP_HDLHECJKPBP_TypeDefinitionIndex = 42199;

class AKAAONCKJJP_HDLHECJKPBP : public ::System::Object
{
public:
	::System::Action* IFKOKLCPMNF; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAAONCKJJP_HDLHECJKPBP__CTOR_OFFSET))(this);
	}

	::System::Void FKIJLKEAIJM(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_HDLHECJKPBP_FKIJLKEAIJM_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void GFPOHBPMABL(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_HDLHECJKPBP_GFPOHBPMABL_OFFSET))(this, PIIPCLCCOIG);
	}
};
