#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMBBCHCAPBP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define NFHNEKILONB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19DC1AF0)
#define NFHNEKILONB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19DC1AE0)
#define NFHNEKILONB_IHEKKCIGPOF_OFFSET UNITYSDK_OFFSET(0x19DC1BF0)
#define NFHNEKILONB_JFNBMOEDJKH_OFFSET UNITYSDK_OFFSET(0x19DC1860)
#define NFHNEKILONB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19DC1BE0)
#define NFHNEKILONB_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19DC19A0)
#define NFHNEKILONB__CTOR_OFFSET UNITYSDK_OFFSET(0x19DC1850)

inline static constexpr unsigned int NFHNEKILONB_TypeDefinitionIndex = 15221;

class NFHNEKILONB : public ::System::Object
{
public:
	::FMBBCHCAPBP HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 PCMOJLNOPPM; // 0x28
	::System::Int32 KCDEOFEODCH; // 0x2C
	::System::Int32 KKBBCOKNLDN; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36

	::System::Void _ctor(::FMBBCHCAPBP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FMBBCHCAPBP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NFHNEKILONB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 JFNBMOEDJKH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHNEKILONB_JFNBMOEDJKH_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHNEKILONB_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NFHNEKILONB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHNEKILONB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHNEKILONB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 IHEKKCIGPOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHNEKILONB_IHEKKCIGPOF_OFFSET))(this);
	}
};
