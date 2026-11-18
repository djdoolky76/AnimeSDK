#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define CLKECHGKMKE_ELBCNNDIJNP_JCMBLMGPPEO_OFFSET UNITYSDK_OFFSET(0x1203E9C0)
#define CLKECHGKMKE_ELBCNNDIJNP_OCFHPJBLOIM_OFFSET UNITYSDK_OFFSET(0x1203E9B0)
#define CLKECHGKMKE_ELBCNNDIJNP__CTOR_OFFSET UNITYSDK_OFFSET(0x1203E9A0)

inline static constexpr unsigned int CLKECHGKMKE_ELBCNNDIJNP_TypeDefinitionIndex = 59915;

class CLKECHGKMKE_ELBCNNDIJNP : public ::System::Object
{
public:
	::System::Action* BLLNHDIDKPA; // 0x10
	::System::Action* FKHOJLMBILE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKECHGKMKE_ELBCNNDIJNP__CTOR_OFFSET))(this);
	}

	::System::Void OCFHPJBLOIM(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CLKECHGKMKE_ELBCNNDIJNP_OCFHPJBLOIM_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void JCMBLMGPPEO(::OAEFGCLEHHO* JCHFKGGDDFB)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CLKECHGKMKE_ELBCNNDIJNP_JCMBLMGPPEO_OFFSET))(this, JCHFKGGDDFB);
	}
};
