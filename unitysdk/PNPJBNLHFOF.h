#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNGNCPFLJDP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define PNPJBNLHFOF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1FD7C480)
#define PNPJBNLHFOF_DFIGOHGIDJN_OFFSET UNITYSDK_OFFSET(0x1FD7C6C0)
#define PNPJBNLHFOF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1FD7C7D0)
#define PNPJBNLHFOF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1FD7C570)
#define PNPJBNLHFOF_OGAKJIPMFOI_OFFSET UNITYSDK_OFFSET(0x1FD7C580)
#define PNPJBNLHFOF__CTOR_OFFSET UNITYSDK_OFFSET(0x1FD7C470)

inline static constexpr unsigned int PNPJBNLHFOF_TypeDefinitionIndex = 10410;

class PNPJBNLHFOF : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* BHFPABKJHEO; // 0x18
	::BNGNCPFLJDP HBDPAIKANDB; // 0x20
	::System::Int32 PMAODDHJGGE; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36

	::System::Void _ctor(::BNGNCPFLJDP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BNGNCPFLJDP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PNPJBNLHFOF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPJBNLHFOF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPJBNLHFOF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 OGAKJIPMFOI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPJBNLHFOF_OGAKJIPMFOI_OFFSET))(this);
	}

	::System::String* DFIGOHGIDJN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPJBNLHFOF_DFIGOHGIDJN_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PNPJBNLHFOF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
