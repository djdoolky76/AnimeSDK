#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define HDJLHJDFJCP_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x660260)
#define HDJLHJDFJCP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x6600F0)
#define HDJLHJDFJCP_EQUALS_OFFSET UNITYSDK_OFFSET(0x660030)
#define HDJLHJDFJCP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x660100)
#define HDJLHJDFJCP_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x660190)
#define HDJLHJDFJCP_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x6601F0)
#define HDJLHJDFJCP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x660110)
#define HDJLHJDFJCP__CTOR_OFFSET UNITYSDK_OFFSET(0x65FFF0)

inline static constexpr unsigned int HDJLHJDFJCP_TypeDefinitionIndex = 69292;

struct alignas(8) HDJLHJDFJCP
{
	::System::String* MNOJLHBPHCG; // 0x10
	::System::String* HJIKPEKGPIL; // 0x18

	::System::Void _ctor(::System::String* JMLNKPAIPDL, ::System::String* JKIAFJOKOLB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HDJLHJDFJCP__CTOR_OFFSET))(this, JMLNKPAIPDL, JKIAFJOKOLB);
	}

	/*
	::System::Boolean Equals(::HDJLHJDFJCP LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::HDJLHJDFJCP))((::PBYTE)hIl2Cpp + HDJLHJDFJCP_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDJLHJDFJCP_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJLHJDFJCP_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJLHJDFJCP_TOSTRING_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJLHJDFJCP_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDJLHJDFJCP_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJLHJDFJCP_DPIHOJBBGLA_OFFSET))(this);
	}
};
