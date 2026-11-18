#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define CLKECHGKMKE_CKNAIGENFBJ_ACPIFJIECIO_OFFSET UNITYSDK_OFFSET(0x13E12AF0)
#define CLKECHGKMKE_CKNAIGENFBJ_BHFPJAGGIBB_OFFSET UNITYSDK_OFFSET(0x13E12AE0)
#define CLKECHGKMKE_CKNAIGENFBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13E12AD0)

inline static constexpr unsigned int CLKECHGKMKE_CKNAIGENFBJ_TypeDefinitionIndex = 59913;

class CLKECHGKMKE_CKNAIGENFBJ : public ::System::Object
{
public:
	::System::Action* BLLNHDIDKPA; // 0x10
	::System::Action* FKHOJLMBILE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKECHGKMKE_CKNAIGENFBJ__CTOR_OFFSET))(this);
	}

	::System::Void BHFPJAGGIBB(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CLKECHGKMKE_CKNAIGENFBJ_BHFPJAGGIBB_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void ACPIFJIECIO(::OAEFGCLEHHO* JCHFKGGDDFB)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CLKECHGKMKE_CKNAIGENFBJ_ACPIFJIECIO_OFFSET))(this, JCHFKGGDDFB);
	}
};
