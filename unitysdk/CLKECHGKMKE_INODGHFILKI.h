#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define CLKECHGKMKE_INODGHFILKI_GOJNGFJJFKM_OFFSET UNITYSDK_OFFSET(0x1696AA90)
#define CLKECHGKMKE_INODGHFILKI_NALFPAPDIIM_OFFSET UNITYSDK_OFFSET(0x1696AA80)
#define CLKECHGKMKE_INODGHFILKI__CTOR_OFFSET UNITYSDK_OFFSET(0x1696AA50)

inline static constexpr unsigned int CLKECHGKMKE_INODGHFILKI_TypeDefinitionIndex = 59916;

class CLKECHGKMKE_INODGHFILKI : public ::System::Object
{
public:
	::System::Action* BLLNHDIDKPA; // 0x10
	::System::Action* FKHOJLMBILE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKECHGKMKE_INODGHFILKI__CTOR_OFFSET))(this);
	}

	::System::Void NALFPAPDIIM(::OAEFGCLEHHO* JCHFKGGDDFB)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CLKECHGKMKE_INODGHFILKI_NALFPAPDIIM_OFFSET))(this, JCHFKGGDDFB);
	}

	::System::Void GOJNGFJJFKM(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CLKECHGKMKE_INODGHFILKI_GOJNGFJJFKM_OFFSET))(this, PIIPCLCCOIG);
	}
};
