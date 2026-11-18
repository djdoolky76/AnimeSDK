#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define JGEBAADCFCH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x719020)
#define JGEBAADCFCH_EQUALS_OFFSET UNITYSDK_OFFSET(0x718FC0)
#define JGEBAADCFCH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x719030)
#define JGEBAADCFCH_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x7190E0)
#define JGEBAADCFCH_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x719080)
#define JGEBAADCFCH__CTOR_OFFSET UNITYSDK_OFFSET(0x2E4140)

inline static constexpr unsigned int JGEBAADCFCH_TypeDefinitionIndex = 54326;

struct alignas(4) JGEBAADCFCH
{
	::System::Int32 DBGJNFKBEJK; // 0x10
	::System::Int32 OHLGFAMCOOL; // 0x14

	::System::Void _ctor(::System::Int32 PKMFBJMJCOO, ::System::Int32 CJPLACFCFBP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JGEBAADCFCH__CTOR_OFFSET))(this, PKMFBJMJCOO, CJPLACFCFBP);
	}

	/*
	::System::Boolean Equals(::JGEBAADCFCH LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::JGEBAADCFCH))((::PBYTE)hIl2Cpp + JGEBAADCFCH_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JGEBAADCFCH_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGEBAADCFCH_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JGEBAADCFCH_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGEBAADCFCH_HLPHPBAODIF_OFFSET))(this);
	}
};
