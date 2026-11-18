#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DAHKJHFCLBC;

#define LBDNNOLBFGC_JHCLKMHMPMM_EKDOBBPEKLF_OFFSET UNITYSDK_OFFSET(0x15DDFF70)
#define LBDNNOLBFGC_JHCLKMHMPMM__CTOR_OFFSET UNITYSDK_OFFSET(0x15DDFF60)

inline static constexpr unsigned int LBDNNOLBFGC_JHCLKMHMPMM_TypeDefinitionIndex = 73763;

class LBDNNOLBFGC_JHCLKMHMPMM : public ::System::Object
{
public:
	::System::UInt32 KPAOHPIPHGK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDNNOLBFGC_JHCLKMHMPMM__CTOR_OFFSET))(this);
	}

	::System::Boolean EKDOBBPEKLF(::DAHKJHFCLBC* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::DAHKJHFCLBC*))((::PBYTE)hIl2Cpp + LBDNNOLBFGC_JHCLKMHMPMM_EKDOBBPEKLF_OFFSET))(this, HAAEBCOBKFF);
	}
};
