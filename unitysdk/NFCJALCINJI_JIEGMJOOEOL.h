#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define NFCJALCINJI_JIEGMJOOEOL_GGPMBOIIFDD_OFFSET UNITYSDK_OFFSET(0x1AE187B0)
#define NFCJALCINJI_JIEGMJOOEOL_PFMNBMCAFJG_OFFSET UNITYSDK_OFFSET(0x1AE187C0)
#define NFCJALCINJI_JIEGMJOOEOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE187A0)

inline static constexpr unsigned int NFCJALCINJI_JIEGMJOOEOL_TypeDefinitionIndex = 47543;

class NFCJALCINJI_JIEGMJOOEOL : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCJALCINJI_JIEGMJOOEOL__CTOR_OFFSET))(this);
	}

	::System::Void GGPMBOIIFDD(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NFCJALCINJI_JIEGMJOOEOL_GGPMBOIIFDD_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void PFMNBMCAFJG(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NFCJALCINJI_JIEGMJOOEOL_PFMNBMCAFJG_OFFSET))(this, GLAOEHCGCFO);
	}
};
