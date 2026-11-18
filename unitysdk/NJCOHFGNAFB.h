#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NJCOHFGNAFB_GCOLIAHNJDE_OFFSET UNITYSDK_OFFSET(0x1375D5C0)
#define NJCOHFGNAFB_KHBGACCJNFP_OFFSET UNITYSDK_OFFSET(0x1375D5D0)
#define NJCOHFGNAFB_PJEFJMKCLBL_OFFSET UNITYSDK_OFFSET(0x1375D5E0)
#define NJCOHFGNAFB__CTOR_OFFSET UNITYSDK_OFFSET(0x1375D5B0)

inline static constexpr unsigned int NJCOHFGNAFB_TypeDefinitionIndex = 75922;

class NJCOHFGNAFB : public ::System::Object
{
public:
	::System::Boolean _FNEOPNPKNLA_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJCOHFGNAFB__CTOR_OFFSET))(this);
	}

	::System::Void GCOLIAHNJDE(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NJCOHFGNAFB_GCOLIAHNJDE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean KHBGACCJNFP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NJCOHFGNAFB_KHBGACCJNFP_OFFSET))(this);
	}

	::System::Void PJEFJMKCLBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJCOHFGNAFB_PJEFJMKCLBL_OFFSET))(this);
	}
};
