#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define AKAAONCKJJP_ALLDJNFCCPC_KFJFFHJDPNO_OFFSET UNITYSDK_OFFSET(0x16D8BBA0)
#define AKAAONCKJJP_ALLDJNFCCPC_PNKJKFEMACM_OFFSET UNITYSDK_OFFSET(0x16D8BB90)
#define AKAAONCKJJP_ALLDJNFCCPC__CTOR_OFFSET UNITYSDK_OFFSET(0x16D8BB80)

inline static constexpr unsigned int AKAAONCKJJP_ALLDJNFCCPC_TypeDefinitionIndex = 42175;

class AKAAONCKJJP_ALLDJNFCCPC : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAAONCKJJP_ALLDJNFCCPC__CTOR_OFFSET))(this);
	}

	::System::Void PNKJKFEMACM(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_ALLDJNFCCPC_PNKJKFEMACM_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void KFJFFHJDPNO(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_ALLDJNFCCPC_KFJFFHJDPNO_OFFSET))(this, PIIPCLCCOIG);
	}
};
