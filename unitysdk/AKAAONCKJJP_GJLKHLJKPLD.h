#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define AKAAONCKJJP_GJLKHLJKPLD_JGHCJKAAANH_OFFSET UNITYSDK_OFFSET(0x15504B30)
#define AKAAONCKJJP_GJLKHLJKPLD_OLAGOKIELHP_OFFSET UNITYSDK_OFFSET(0x15504B20)
#define AKAAONCKJJP_GJLKHLJKPLD__CTOR_OFFSET UNITYSDK_OFFSET(0x15504B10)

inline static constexpr unsigned int AKAAONCKJJP_GJLKHLJKPLD_TypeDefinitionIndex = 42203;

class AKAAONCKJJP_GJLKHLJKPLD : public ::System::Object
{
public:
	::System::Action* IFKOKLCPMNF; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAAONCKJJP_GJLKHLJKPLD__CTOR_OFFSET))(this);
	}

	::System::Void OLAGOKIELHP(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_GJLKHLJKPLD_OLAGOKIELHP_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void JGHCJKAAANH(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_GJLKHLJKPLD_JGHCJKAAANH_OFFSET))(this, BHDNBGLCNOM);
	}
};
