#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EFNEBEIKKLM;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define AKAAONCKJJP_DGEKGMCFKKN_FMCEIAGKJHE_OFFSET UNITYSDK_OFFSET(0x16FF41F0)
#define AKAAONCKJJP_DGEKGMCFKKN_PDGOKACEJJN_OFFSET UNITYSDK_OFFSET(0x16FF41E0)
#define AKAAONCKJJP_DGEKGMCFKKN__CTOR_OFFSET UNITYSDK_OFFSET(0x16FF41D0)

inline static constexpr unsigned int AKAAONCKJJP_DGEKGMCFKKN_TypeDefinitionIndex = 42170;

class AKAAONCKJJP_DGEKGMCFKKN : public ::System::Object
{
public:
	::System::Action* NKGCDDCMBCF; // 0x10
	::System::Action_1<::EFNEBEIKKLM*>* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAAONCKJJP_DGEKGMCFKKN__CTOR_OFFSET))(this);
	}

	::System::Void PDGOKACEJJN(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_DGEKGMCFKKN_PDGOKACEJJN_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void FMCEIAGKJHE(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_DGEKGMCFKKN_FMCEIAGKJHE_OFFSET))(this, GLAOEHCGCFO);
	}
};
