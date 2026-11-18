#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFEIPKBDEMM_MKBEAGOEMBN.h"
#include "unitysdk/System/Object.h"

class AGJFJGEMIPB;

#define CFEIPKBDEMM_BEKLOCOHKJN_PGDPAOHHMPO_OFFSET UNITYSDK_OFFSET(0x1454D520)
#define CFEIPKBDEMM_BEKLOCOHKJN_PHECDEMJGKK_OFFSET UNITYSDK_OFFSET(0x1454D3C0)
#define CFEIPKBDEMM_BEKLOCOHKJN__CTOR_OFFSET UNITYSDK_OFFSET(0x1454D3B0)

inline static constexpr unsigned int CFEIPKBDEMM_BEKLOCOHKJN_TypeDefinitionIndex = 71751;

class CFEIPKBDEMM_BEKLOCOHKJN : public ::System::Object
{
public:
	::AGJFJGEMIPB* CENFDFIKBDC; // 0x10
	::CFEIPKBDEMM_MKBEAGOEMBN EIIFNIBBJHP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEIPKBDEMM_BEKLOCOHKJN__CTOR_OFFSET))(this);
	}

	::System::Void PHECDEMJGKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEIPKBDEMM_BEKLOCOHKJN_PHECDEMJGKK_OFFSET))(this);
	}

	::System::Void PGDPAOHHMPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEIPKBDEMM_BEKLOCOHKJN_PGDPAOHHMPO_OFFSET))(this);
	}
};
