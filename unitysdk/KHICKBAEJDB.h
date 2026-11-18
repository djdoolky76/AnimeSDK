#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LIPPFDGPKJL.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define KHICKBAEJDB_BLFKNELJFFB_OFFSET UNITYSDK_OFFSET(0x359320)
#define KHICKBAEJDB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x6EBB00)
#define KHICKBAEJDB_EQUALS_OFFSET UNITYSDK_OFFSET(0x6EBAA0)
#define KHICKBAEJDB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6EBB10)
#define KHICKBAEJDB_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x6EBB60)
#define KHICKBAEJDB_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x6EBBC0)
#define KHICKBAEJDB_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x3CE9E0)
#define KHICKBAEJDB__CTOR_OFFSET UNITYSDK_OFFSET(0x2E4140)

inline static constexpr unsigned int KHICKBAEJDB_TypeDefinitionIndex = 52470;

struct alignas(4) KHICKBAEJDB
{
	::LIPPFDGPKJL _KJLOFHBDCML_k__BackingField; // 0x10
	::System::Int32 _NEEODMMHPGB_k__BackingField; // 0x14

	::System::Void _ctor(::LIPPFDGPKJL OBNIAHNMHPF, ::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::LIPPFDGPKJL, ::System::Int32))((::PBYTE)hIl2Cpp + KHICKBAEJDB__CTOR_OFFSET))(this, OBNIAHNMHPF, MGMDLMBEDJF);
	}

	/*
	::System::Boolean Equals(::KHICKBAEJDB LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KHICKBAEJDB))((::PBYTE)hIl2Cpp + KHICKBAEJDB_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KHICKBAEJDB_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHICKBAEJDB_GETHASHCODE_OFFSET))(this);
	}

	::LIPPFDGPKJL BLFKNELJFFB()
	{
		return ((::LIPPFDGPKJL(*)(::PVOID))((::PBYTE)hIl2Cpp + KHICKBAEJDB_BLFKNELJFFB_OFFSET))(this);
	}

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHICKBAEJDB_NKCNGLADFNA_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHICKBAEJDB_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KHICKBAEJDB_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
