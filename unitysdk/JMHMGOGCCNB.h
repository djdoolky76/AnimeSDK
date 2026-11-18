#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define JMHMGOGCCNB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7B4860)
#define JMHMGOGCCNB_EQUALS_OFFSET UNITYSDK_OFFSET(0x7B4840)
#define JMHMGOGCCNB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7B4950)
#define JMHMGOGCCNB_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x7B49A0)
#define JMHMGOGCCNB_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x7B4A00)
#define JMHMGOGCCNB__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B4BDB0)
#define JMHMGOGCCNB__CTOR_OFFSET UNITYSDK_OFFSET(0x3CEE90)

inline static constexpr unsigned int JMHMGOGCCNB_TypeDefinitionIndex = 87936;

struct alignas(4) JMHMGOGCCNB
{
	static ::JMHMGOGCCNB* StaticGet_EFMCBKOMKIH()
	{
		return (::JMHMGOGCCNB*)Il2CppClass::FromTypeDefinitionIndex(JMHMGOGCCNB_TypeDefinitionIndex)->GetStaticField(0xAD10);
	}
	::System::Int16 BELNJJKMMJP; // 0x10
	::System::UInt16 PMMGOAJJPJB; // 0x12

	::System::Void _ctor(::System::Int16 ABHBKFJKINO, ::System::UInt16 CMJLFAIMHLE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int16, ::System::UInt16))((::PBYTE)hIl2Cpp + JMHMGOGCCNB__CTOR_OFFSET))(this, ABHBKFJKINO, CMJLFAIMHLE);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMHMGOGCCNB__CCTOR_OFFSET))();
	}

	/*
	::System::Boolean Equals(::JMHMGOGCCNB LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::JMHMGOGCCNB))((::PBYTE)hIl2Cpp + JMHMGOGCCNB_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JMHMGOGCCNB_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMHMGOGCCNB_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMHMGOGCCNB_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JMHMGOGCCNB_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
