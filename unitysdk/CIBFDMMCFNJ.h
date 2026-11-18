#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJIJMNMKNCL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define CIBFDMMCFNJ_CLIDAJLEMCI_OFFSET UNITYSDK_OFFSET(0x1660E7F0)
#define CIBFDMMCFNJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1660E900)
#define CIBFDMMCFNJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1660E9F0)
#define CIBFDMMCFNJ_HNKECDKGKKP_OFFSET UNITYSDK_OFFSET(0x1660EA00)
#define CIBFDMMCFNJ_LELGKJLJHHJ_OFFSET UNITYSDK_OFFSET(0x1660EC90)
#define CIBFDMMCFNJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1660EC80)
#define CIBFDMMCFNJ_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1660EB40)
#define CIBFDMMCFNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1660E7E0)

inline static constexpr unsigned int CIBFDMMCFNJ_TypeDefinitionIndex = 10892;

class CIBFDMMCFNJ : public ::System::Object
{
public:
	::HJIJMNMKNCL HBDPAIKANDB; // 0x10
	::System::String* OGLACEPEEED; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 GOPKKMICAAL; // 0x30
	::System::Int32 PCMOJLNOPPM; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 FKPHFIMOFDD; // 0x3C

	::System::Void _ctor(::HJIJMNMKNCL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HJIJMNMKNCL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CIBFDMMCFNJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* CLIDAJLEMCI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIBFDMMCFNJ_CLIDAJLEMCI_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIBFDMMCFNJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CIBFDMMCFNJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 HNKECDKGKKP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIBFDMMCFNJ_HNKECDKGKKP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIBFDMMCFNJ_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CIBFDMMCFNJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 LELGKJLJHHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIBFDMMCFNJ_LELGKJLJHHJ_OFFSET))(this);
	}
};
