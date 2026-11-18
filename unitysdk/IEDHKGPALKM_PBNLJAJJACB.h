#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IEDHKGPALKM_PBNLJAJJACB_EEIENPONGHF_OFFSET UNITYSDK_OFFSET(0x1609DD00)
#define IEDHKGPALKM_PBNLJAJJACB_EHNHAHPDOHN_OFFSET UNITYSDK_OFFSET(0x1609DCF0)
#define IEDHKGPALKM_PBNLJAJJACB__CTOR_OFFSET UNITYSDK_OFFSET(0x1609DCE0)

inline static constexpr unsigned int IEDHKGPALKM_PBNLJAJJACB_TypeDefinitionIndex = 89857;

class IEDHKGPALKM_PBNLJAJJACB : public ::System::Object
{
public:
	::System::Action* FKHOJLMBILE; // 0x10
	::System::Action* BLLNHDIDKPA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDHKGPALKM_PBNLJAJJACB__CTOR_OFFSET))(this);
	}

	::System::Void EHNHAHPDOHN(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IEDHKGPALKM_PBNLJAJJACB_EHNHAHPDOHN_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void EEIENPONGHF(::OAEFGCLEHHO* JCHFKGGDDFB)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IEDHKGPALKM_PBNLJAJJACB_EEIENPONGHF_OFFSET))(this, JCHFKGGDDFB);
	}
};
