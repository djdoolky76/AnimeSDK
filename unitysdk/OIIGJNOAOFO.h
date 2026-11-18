#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define OIIGJNOAOFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x602070)
#define OIIGJNOAOFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x602020)
#define OIIGJNOAOFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x602080)
#define OIIGJNOAOFO_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x6020D0)
#define OIIGJNOAOFO_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x602130)
#define OIIGJNOAOFO__CTOR_OFFSET UNITYSDK_OFFSET(0x359150)

inline static constexpr unsigned int OIIGJNOAOFO_TypeDefinitionIndex = 44552;

struct alignas(4) OIIGJNOAOFO
{
	::System::UInt32 HDLILDCNLGJ; // 0x10

	::System::Void _ctor(::System::UInt32 FIACPPCJAIK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OIIGJNOAOFO__CTOR_OFFSET))(this, FIACPPCJAIK);
	}

	/*
	::System::Boolean Equals(::OIIGJNOAOFO LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::OIIGJNOAOFO))((::PBYTE)hIl2Cpp + OIIGJNOAOFO_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OIIGJNOAOFO_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIGJNOAOFO_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIGJNOAOFO_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OIIGJNOAOFO_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
