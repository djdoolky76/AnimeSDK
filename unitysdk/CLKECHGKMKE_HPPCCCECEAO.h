#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define CLKECHGKMKE_HPPCCCECEAO_EFFHCGKBGIC_OFFSET UNITYSDK_OFFSET(0x1696AA60)
#define CLKECHGKMKE_HPPCCCECEAO_OEGKJLOICAC_OFFSET UNITYSDK_OFFSET(0x1696AA70)
#define CLKECHGKMKE_HPPCCCECEAO__CTOR_OFFSET UNITYSDK_OFFSET(0x1696A370)

inline static constexpr unsigned int CLKECHGKMKE_HPPCCCECEAO_TypeDefinitionIndex = 59914;

class CLKECHGKMKE_HPPCCCECEAO : public ::System::Object
{
public:
	::System::Action* FKHOJLMBILE; // 0x10
	::System::Action* BLLNHDIDKPA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKECHGKMKE_HPPCCCECEAO__CTOR_OFFSET))(this);
	}

	::System::Void EFFHCGKBGIC(::OAEFGCLEHHO* JCHFKGGDDFB)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CLKECHGKMKE_HPPCCCECEAO_EFFHCGKBGIC_OFFSET))(this, JCHFKGGDDFB);
	}

	::System::Void OEGKJLOICAC(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CLKECHGKMKE_HPPCCCECEAO_OEGKJLOICAC_OFFSET))(this, PIIPCLCCOIG);
	}
};
