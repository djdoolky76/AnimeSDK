#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PCMENEMPLGF;

#define PCMENEMPLGF_ALAGMLBLLLB_FGEHGBAJBNF_OFFSET UNITYSDK_OFFSET(0x18460DD0)
#define PCMENEMPLGF_ALAGMLBLLLB_KELMPMLBKNE_OFFSET UNITYSDK_OFFSET(0x18460E10)
#define PCMENEMPLGF_ALAGMLBLLLB__CTOR_OFFSET UNITYSDK_OFFSET(0x18460DC0)

inline static constexpr unsigned int PCMENEMPLGF_ALAGMLBLLLB_TypeDefinitionIndex = 62873;

class PCMENEMPLGF_ALAGMLBLLLB : public ::System::Object
{
public:
	::PCMENEMPLGF* KLHPEBKNIFB; // 0x10
	::System::Int32 ECAFPALMHLI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_ALAGMLBLLLB__CTOR_OFFSET))(this);
	}

	::System::Void FGEHGBAJBNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_ALAGMLBLLLB_FGEHGBAJBNF_OFFSET))(this);
	}

	::System::Void KELMPMLBKNE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_ALAGMLBLLLB_KELMPMLBKNE_OFFSET))(this);
	}
};
