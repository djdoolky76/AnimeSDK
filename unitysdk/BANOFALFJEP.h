#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDBEOMOLOJD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define BANOFALFJEP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19AC15B0)
#define BANOFALFJEP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19AC17E0)
#define BANOFALFJEP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19AC15A0)
#define BANOFALFJEP_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19AC16A0)
#define BANOFALFJEP__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC1590)

inline static constexpr unsigned int BANOFALFJEP_TypeDefinitionIndex = 10124;

class BANOFALFJEP : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::LDBEOMOLOJD HBDPAIKANDB; // 0x18
	::System::Byte ACIOBDEBDNK; // 0x28
	::System::Byte CNIAANMNOCF; // 0x29
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x2C

	::System::Void _ctor(::LDBEOMOLOJD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LDBEOMOLOJD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BANOFALFJEP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANOFALFJEP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANOFALFJEP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANOFALFJEP_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANOFALFJEP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
