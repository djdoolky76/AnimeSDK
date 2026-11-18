#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANDNNFHEGDH.h"
#include "unitysdk/System/ValueType.h"

#define NPBOHLFAOGD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6503B0)
#define NPBOHLFAOGD_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x6503C0)
#define NPBOHLFAOGD_KAACGJGAMNE_OFFSET UNITYSDK_OFFSET(0x10DB05B0)
#define NPBOHLFAOGD_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x6504C0)
#define NPBOHLFAOGD_OPPECFEFGFG_OFFSET UNITYSDK_OFFSET(0x650420)
#define NPBOHLFAOGD__CTOR_OFFSET UNITYSDK_OFFSET(0x358470)

inline static constexpr unsigned int NPBOHLFAOGD_TypeDefinitionIndex = 85044;

struct alignas(4) NPBOHLFAOGD
{
	::ANDNNFHEGDH OOCAHIKNAHE; // 0x10

	::System::Void _ctor(::ANDNNFHEGDH& OLKCDODPDMD)
	{
		return ((::System::Void(*)(::PVOID, ::ANDNNFHEGDH&))((::PBYTE)hIl2Cpp + NPBOHLFAOGD__CTOR_OFFSET))(this, OLKCDODPDMD);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBOHLFAOGD_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Int32 KAACGJGAMNE(::ANDNNFHEGDH& OLKCDODPDMD)
	{
		return ((::System::Int32(*)(::ANDNNFHEGDH&))((::PBYTE)hIl2Cpp + NPBOHLFAOGD_KAACGJGAMNE_OFFSET))(OLKCDODPDMD);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBOHLFAOGD_HLPHPBAODIF_OFFSET))(this);
	}

	/*
	::System::Boolean OPPECFEFGFG(::NPBOHLFAOGD& LOFFHBFPCML)
	{
		return ((::System::Boolean(*)(::PVOID, ::NPBOHLFAOGD&))((::PBYTE)hIl2Cpp + NPBOHLFAOGD_OPPECFEFGFG_OFFSET))(this, LOFFHBFPCML);
	}
	*/

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBOHLFAOGD_NPOLNFDBOOD_OFFSET))(this);
	}
};
