#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KEGGHLKEPMB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define BAMOIDGAIMO_BGDGFOGPFDD_OFFSET UNITYSDK_OFFSET(0x17A759A0)
#define BAMOIDGAIMO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17A75AE0)
#define BAMOIDGAIMO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17A75D20)
#define BAMOIDGAIMO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17A75D10)
#define BAMOIDGAIMO_MDPGIAMNIIG_OFFSET UNITYSDK_OFFSET(0x17A75BD0)
#define BAMOIDGAIMO_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x17A75D30)
#define BAMOIDGAIMO__CTOR_OFFSET UNITYSDK_OFFSET(0x17A75990)

inline static constexpr unsigned int BAMOIDGAIMO_TypeDefinitionIndex = 9757;

class BAMOIDGAIMO : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::KEGGHLKEPMB HBDPAIKANDB; // 0x18
	::System::Int32 PCMOJLNOPPM; // 0x28
	::System::Int32 KGMAOOGABJB; // 0x2C
	::System::Int32 OGAGKPKBBCG; // 0x30
	::System::Int32 FLIILGKGFAM; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A

	::System::Void _ctor(::KEGGHLKEPMB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KEGGHLKEPMB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BAMOIDGAIMO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 BGDGFOGPFDD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMOIDGAIMO_BGDGFOGPFDD_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMOIDGAIMO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 MDPGIAMNIIG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMOIDGAIMO_MDPGIAMNIIG_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMOIDGAIMO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BAMOIDGAIMO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMOIDGAIMO_PPIFNHNGCGO_OFFSET))(this);
	}
};
