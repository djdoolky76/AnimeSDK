#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define EKBGOODPALC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x8F8960)
#define EKBGOODPALC_EQUALS_OFFSET UNITYSDK_OFFSET(0x8F8910)
#define EKBGOODPALC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8F89F0)
#define EKBGOODPALC_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x8F8AA0)
#define EKBGOODPALC_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x8F8A40)

inline static constexpr unsigned int EKBGOODPALC_TypeDefinitionIndex = 93511;

struct alignas(4) EKBGOODPALC
{
	/*
	::System::Boolean Equals(::EKBGOODPALC LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::EKBGOODPALC))((::PBYTE)hIl2Cpp + EKBGOODPALC_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EKBGOODPALC_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBGOODPALC_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EKBGOODPALC_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBGOODPALC_HLPHPBAODIF_OFFSET))(this);
	}
};
