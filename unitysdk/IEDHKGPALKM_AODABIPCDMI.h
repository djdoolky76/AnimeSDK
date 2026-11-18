#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IEDHKGPALKM_AODABIPCDMI_BNMGAANNJGJ_OFFSET UNITYSDK_OFFSET(0x16A95950)
#define IEDHKGPALKM_AODABIPCDMI_NFCIJJHFKEG_OFFSET UNITYSDK_OFFSET(0x16A95940)
#define IEDHKGPALKM_AODABIPCDMI__CTOR_OFFSET UNITYSDK_OFFSET(0x16A95930)

inline static constexpr unsigned int IEDHKGPALKM_AODABIPCDMI_TypeDefinitionIndex = 89860;

class IEDHKGPALKM_AODABIPCDMI : public ::System::Object
{
public:
	::System::Action* BLLNHDIDKPA; // 0x10
	::System::Action* FKHOJLMBILE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDHKGPALKM_AODABIPCDMI__CTOR_OFFSET))(this);
	}

	::System::Void NFCIJJHFKEG(::OAEFGCLEHHO* JCHFKGGDDFB)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IEDHKGPALKM_AODABIPCDMI_NFCIJJHFKEG_OFFSET))(this, JCHFKGGDDFB);
	}

	::System::Void BNMGAANNJGJ(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IEDHKGPALKM_AODABIPCDMI_BNMGAANNJGJ_OFFSET))(this, PIIPCLCCOIG);
	}
};
