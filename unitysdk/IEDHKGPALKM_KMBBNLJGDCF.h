#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IEDHKGPALKM_KMBBNLJGDCF_KOHILPBNOMM_OFFSET UNITYSDK_OFFSET(0x15BFFB90)
#define IEDHKGPALKM_KMBBNLJGDCF_NGOFECEFNJM_OFFSET UNITYSDK_OFFSET(0x15BFFBA0)
#define IEDHKGPALKM_KMBBNLJGDCF__CTOR_OFFSET UNITYSDK_OFFSET(0x15BFFB80)

inline static constexpr unsigned int IEDHKGPALKM_KMBBNLJGDCF_TypeDefinitionIndex = 89856;

class IEDHKGPALKM_KMBBNLJGDCF : public ::System::Object
{
public:
	::System::Action* BLLNHDIDKPA; // 0x10
	::System::Action* FKHOJLMBILE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDHKGPALKM_KMBBNLJGDCF__CTOR_OFFSET))(this);
	}

	::System::Void KOHILPBNOMM(::OAEFGCLEHHO* JCHFKGGDDFB)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IEDHKGPALKM_KMBBNLJGDCF_KOHILPBNOMM_OFFSET))(this, JCHFKGGDDFB);
	}

	::System::Void NGOFECEFNJM(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IEDHKGPALKM_KMBBNLJGDCF_NGOFECEFNJM_OFFSET))(this, PIIPCLCCOIG);
	}
};
