#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLHFKNIAAMB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define FNBFCKBIELM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18B9D050)
#define FNBFCKBIELM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18B9CEF0)
#define FNBFCKBIELM_HJFCIELMJPA_OFFSET UNITYSDK_OFFSET(0x18B9CF10)
#define FNBFCKBIELM_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x18B9CDB0)
#define FNBFCKBIELM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18B9CF00)
#define FNBFCKBIELM_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x18B9CC70)
#define FNBFCKBIELM__CTOR_OFFSET UNITYSDK_OFFSET(0x18B9CC60)

inline static constexpr unsigned int FNBFCKBIELM_TypeDefinitionIndex = 15964;

class FNBFCKBIELM : public ::System::Object
{
public:
	::CLHFKNIAAMB HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 POKJNGILNLB; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2C
	::System::Byte CNIAANMNOCF; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 OCGIOHPBCIK; // 0x30
	::System::Int32 PCMOJLNOPPM; // 0x34

	::System::Void _ctor(::CLHFKNIAAMB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CLHFKNIAAMB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FNBFCKBIELM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNBFCKBIELM_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNBFCKBIELM_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FNBFCKBIELM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FNBFCKBIELM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 HJFCIELMJPA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNBFCKBIELM_HJFCIELMJPA_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNBFCKBIELM_COFGIJJOFLP_OFFSET))(this);
	}
};
