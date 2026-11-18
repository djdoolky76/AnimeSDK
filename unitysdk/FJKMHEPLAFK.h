#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define FJKMHEPLAFK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x75FBB0)
#define FJKMHEPLAFK_EQUALS_OFFSET UNITYSDK_OFFSET(0x75FB00)
#define FJKMHEPLAFK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x75FBC0)
#define FJKMHEPLAFK_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x75FD10)
#define FJKMHEPLAFK_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x156C16D0)
#define FJKMHEPLAFK_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x75FCA0)
#define FJKMHEPLAFK_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x156C1520)

inline static constexpr unsigned int FJKMHEPLAFK_TypeDefinitionIndex = 83093;

struct alignas(8) FJKMHEPLAFK
{
	::System::String* AHIBFJKEBJF; // 0x10
	::System::Boolean FCMIEIDILAL; // 0x18

	/*
	::System::Boolean Equals(::FJKMHEPLAFK LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::FJKMHEPLAFK))((::PBYTE)hIl2Cpp + FJKMHEPLAFK_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJKMHEPLAFK_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKMHEPLAFK_GETHASHCODE_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::FJKMHEPLAFK KILPCOMOCMD, ::FJKMHEPLAFK BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::FJKMHEPLAFK, ::FJKMHEPLAFK))((::PBYTE)hIl2Cpp + FJKMHEPLAFK_NOGJIJMACNO_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJKMHEPLAFK_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKMHEPLAFK_HLPHPBAODIF_OFFSET))(this);
	}

	/*
	static ::System::Boolean INCFIJKMIGG(::FJKMHEPLAFK KILPCOMOCMD, ::FJKMHEPLAFK BBCODANAFGI)
	{
		return ((::System::Boolean(*)(::FJKMHEPLAFK, ::FJKMHEPLAFK))((::PBYTE)hIl2Cpp + FJKMHEPLAFK_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
	}
	*/
};
