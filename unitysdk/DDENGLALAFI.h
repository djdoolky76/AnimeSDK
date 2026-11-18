#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFDBIJLOACN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define DDENGLALAFI_BLCMGFFNCNE_OFFSET UNITYSDK_OFFSET(0x1A189280)
#define DDENGLALAFI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A189030)
#define DDENGLALAFI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A189120)
#define DDENGLALAFI_HIMIAFBOKLA_OFFSET UNITYSDK_OFFSET(0x1A189130)
#define DDENGLALAFI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A189270)
#define DDENGLALAFI_LPEIKGMBCCA_OFFSET UNITYSDK_OFFSET(0x1A1893C0)
#define DDENGLALAFI_OAAHLBPNOLE_OFFSET UNITYSDK_OFFSET(0x1A189500)
#define DDENGLALAFI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A189020)

inline static constexpr unsigned int DDENGLALAFI_TypeDefinitionIndex = 9769;

class DDENGLALAFI : public ::System::Object
{
public:
	::FFDBIJLOACN HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Byte ACIOBDEBDNK; // 0x28
	::System::Byte CNIAANMNOCF; // 0x29
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 OOCHKFKAFII; // 0x2C
	::System::Int32 CDBFPFPNBGF; // 0x30
	::System::Int32 CDHBBHBMBFE; // 0x34
	::System::Int32 CIDACANEILE; // 0x38

	::System::Void _ctor(::FFDBIJLOACN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FFDBIJLOACN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DDENGLALAFI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDENGLALAFI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DDENGLALAFI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 HIMIAFBOKLA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDENGLALAFI_HIMIAFBOKLA_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DDENGLALAFI_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 BLCMGFFNCNE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDENGLALAFI_BLCMGFFNCNE_OFFSET))(this);
	}

	::System::Int32 LPEIKGMBCCA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDENGLALAFI_LPEIKGMBCCA_OFFSET))(this);
	}

	::System::Int32 OAAHLBPNOLE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDENGLALAFI_OAAHLBPNOLE_OFFSET))(this);
	}
};
