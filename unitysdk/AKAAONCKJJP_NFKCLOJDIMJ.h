#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define AKAAONCKJJP_NFKCLOJDIMJ_FENABIPNGCF_OFFSET UNITYSDK_OFFSET(0x134D75F0)
#define AKAAONCKJJP_NFKCLOJDIMJ_PABCGNGLMFP_OFFSET UNITYSDK_OFFSET(0x134D7600)
#define AKAAONCKJJP_NFKCLOJDIMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x134D75E0)

inline static constexpr unsigned int AKAAONCKJJP_NFKCLOJDIMJ_TypeDefinitionIndex = 42164;

class AKAAONCKJJP_NFKCLOJDIMJ : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAAONCKJJP_NFKCLOJDIMJ__CTOR_OFFSET))(this);
	}

	::System::Void FENABIPNGCF(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_NFKCLOJDIMJ_FENABIPNGCF_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void PABCGNGLMFP(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_NFKCLOJDIMJ_PABCGNGLMFP_OFFSET))(this, PIIPCLCCOIG);
	}
};
