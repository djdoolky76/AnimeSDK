#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GCEPOGKKDEF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define IFIELKHAPIF_APLFCBFFBDM_OFFSET UNITYSDK_OFFSET(0x1BAE6A10)
#define IFIELKHAPIF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BAE6F20)
#define IFIELKHAPIF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BAE7010)
#define IFIELKHAPIF_JIIBBMGOCFC_OFFSET UNITYSDK_OFFSET(0x1BAE6CA0)
#define IFIELKHAPIF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BAE6C90)
#define IFIELKHAPIF_PFJIBKBMOII_OFFSET UNITYSDK_OFFSET(0x1BAE6B50)
#define IFIELKHAPIF_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1BAE6DE0)
#define IFIELKHAPIF__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAE6A00)

inline static constexpr unsigned int IFIELKHAPIF_TypeDefinitionIndex = 15451;

class IFIELKHAPIF : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::GCEPOGKKDEF HBDPAIKANDB; // 0x18
	::System::Byte ACIOBDEBDNK; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x29
	::System::Byte CNIAANMNOCF; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 MAGCDIIEFLL; // 0x2C
	::System::Int32 MPMNGPGFPMH; // 0x30
	::System::Int32 HHKKCBBPAMB; // 0x34
	::System::Int32 PCMOJLNOPPM; // 0x38

	::System::Void _ctor(::GCEPOGKKDEF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GCEPOGKKDEF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IFIELKHAPIF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 APLFCBFFBDM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIELKHAPIF_APLFCBFFBDM_OFFSET))(this);
	}

	::System::Int32 PFJIBKBMOII()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIELKHAPIF_PFJIBKBMOII_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIELKHAPIF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 JIIBBMGOCFC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIELKHAPIF_JIIBBMGOCFC_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIELKHAPIF_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIELKHAPIF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIELKHAPIF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
