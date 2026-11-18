#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KICDGLKJPPE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define KJPMCPHDCBL_BNCMLPAGAPC_OFFSET UNITYSDK_OFFSET(0x16123850)
#define KJPMCPHDCBL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x16123C30)
#define KJPMCPHDCBL_DLOPLJFNAHO_OFFSET UNITYSDK_OFFSET(0x16123AE0)
#define KJPMCPHDCBL_FGNCDADEKCN_OFFSET UNITYSDK_OFFSET(0x16123D20)
#define KJPMCPHDCBL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x16123990)
#define KJPMCPHDCBL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x16123C20)
#define KJPMCPHDCBL_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x161239A0)
#define KJPMCPHDCBL__CTOR_OFFSET UNITYSDK_OFFSET(0x16123840)

inline static constexpr unsigned int KJPMCPHDCBL_TypeDefinitionIndex = 12003;

class KJPMCPHDCBL : public ::System::Object
{
public:
	::System::String* GPNJCCHKLIP; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::KICDGLKJPPE HBDPAIKANDB; // 0x20
	::System::Int32 OLONKCENLOF; // 0x30
	::System::Int32 PCMOJLNOPPM; // 0x34
	::System::Int32 IBODFDEHEAK; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x3D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Int32 FLJKHHBKDKB; // 0x40

	::System::Void _ctor(::KICDGLKJPPE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KICDGLKJPPE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KJPMCPHDCBL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 BNCMLPAGAPC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPMCPHDCBL_BNCMLPAGAPC_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KJPMCPHDCBL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPMCPHDCBL_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 DLOPLJFNAHO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPMCPHDCBL_DLOPLJFNAHO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPMCPHDCBL_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPMCPHDCBL_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 FGNCDADEKCN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPMCPHDCBL_FGNCDADEKCN_OFFSET))(this);
	}
};
