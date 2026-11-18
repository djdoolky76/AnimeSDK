#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define AMABNMAHBEK_EJIAMFFDFFA_OFFSET UNITYSDK_OFFSET(0x6B9010)
#define AMABNMAHBEK_KIKIMHKCMGG_OFFSET UNITYSDK_OFFSET(0x359320)
#define AMABNMAHBEK__CTOR_OFFSET UNITYSDK_OFFSET(0x359150)

inline static constexpr unsigned int AMABNMAHBEK_TypeDefinitionIndex = 83900;

struct alignas(4) AMABNMAHBEK
{
	::System::Int32 _CCOHJHGFDKG_k__BackingField; // 0x10

	::System::Void _ctor(::System::Int32 OICGLCBIAON)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMABNMAHBEK__CTOR_OFFSET))(this, OICGLCBIAON);
	}

	::System::Int32 KIKIMHKCMGG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMABNMAHBEK_KIKIMHKCMGG_OFFSET))(this);
	}

	::System::Int32 EJIAMFFDFFA(::System::Single BEKLCLFIDKF, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AMABNMAHBEK_EJIAMFFDFFA_OFFSET))(this, BEKLCLFIDKF, PMNLNNGEIFM);
	}
};
