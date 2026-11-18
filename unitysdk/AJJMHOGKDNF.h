#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define AJJMHOGKDNF_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x79E200)
#define AJJMHOGKDNF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x79E0B0)
#define AJJMHOGKDNF_EQUALS_OFFSET UNITYSDK_OFFSET(0x79E040)
#define AJJMHOGKDNF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x79E0C0)
#define AJJMHOGKDNF_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x79E190)
#define AJJMHOGKDNF_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x79E120)
#define AJJMHOGKDNF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x79E110)

inline static constexpr unsigned int AJJMHOGKDNF_TypeDefinitionIndex = 48255;

struct alignas(4) AJJMHOGKDNF
{
	::System::Int32 EJFGMAHJMHK; // 0x10
	::System::Int32 KMMGKJPAOMF; // 0x14
	::System::Int32 LJMPPBEMEPP; // 0x18

	/*
	::System::Boolean Equals(::AJJMHOGKDNF LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::AJJMHOGKDNF))((::PBYTE)hIl2Cpp + AJJMHOGKDNF_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AJJMHOGKDNF_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJMHOGKDNF_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJMHOGKDNF_TOSTRING_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AJJMHOGKDNF_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJMHOGKDNF_HLPHPBAODIF_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJMHOGKDNF_DPIHOJBBGLA_OFFSET))(this);
	}
};
