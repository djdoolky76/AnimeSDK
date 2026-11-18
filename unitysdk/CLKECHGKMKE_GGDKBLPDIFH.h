#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define CLKECHGKMKE_GGDKBLPDIFH_LHEGDNLNGEF_OFFSET UNITYSDK_OFFSET(0x1A1BBE70)
#define CLKECHGKMKE_GGDKBLPDIFH_NGKALHHDOJC_OFFSET UNITYSDK_OFFSET(0x1A1BBE60)
#define CLKECHGKMKE_GGDKBLPDIFH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1BBE50)

inline static constexpr unsigned int CLKECHGKMKE_GGDKBLPDIFH_TypeDefinitionIndex = 59912;

class CLKECHGKMKE_GGDKBLPDIFH : public ::System::Object
{
public:
	::System::Action* BLLNHDIDKPA; // 0x10
	::System::Action* FKHOJLMBILE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKECHGKMKE_GGDKBLPDIFH__CTOR_OFFSET))(this);
	}

	::System::Void NGKALHHDOJC(::OAEFGCLEHHO* JCHFKGGDDFB)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CLKECHGKMKE_GGDKBLPDIFH_NGKALHHDOJC_OFFSET))(this, JCHFKGGDDFB);
	}

	::System::Void LHEGDNLNGEF(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CLKECHGKMKE_GGDKBLPDIFH_LHEGDNLNGEF_OFFSET))(this, PIIPCLCCOIG);
	}
};
