#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define AKAAONCKJJP_KECHKDGKPKM_JCFKHFIPMAC_OFFSET UNITYSDK_OFFSET(0x1435ABE0)
#define AKAAONCKJJP_KECHKDGKPKM_MPJMFAGIDEK_OFFSET UNITYSDK_OFFSET(0x1435ABD0)
#define AKAAONCKJJP_KECHKDGKPKM__CTOR_OFFSET UNITYSDK_OFFSET(0x1435ABC0)

inline static constexpr unsigned int AKAAONCKJJP_KECHKDGKPKM_TypeDefinitionIndex = 42185;

class AKAAONCKJJP_KECHKDGKPKM : public ::System::Object
{
public:
	::System::Action* IFKOKLCPMNF; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAAONCKJJP_KECHKDGKPKM__CTOR_OFFSET))(this);
	}

	::System::Void MPJMFAGIDEK(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_KECHKDGKPKM_MPJMFAGIDEK_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void JCFKHFIPMAC(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_KECHKDGKPKM_JCFKHFIPMAC_OFFSET))(this, GLAOEHCGCFO);
	}
};
