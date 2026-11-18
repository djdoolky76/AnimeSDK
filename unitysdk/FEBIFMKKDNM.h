#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADAJLLHFFLG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define FEBIFMKKDNM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x15A70D90)
#define FEBIFMKKDNM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x15A70AF0)
#define FEBIFMKKDNM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x15A70B00)
#define FEBIFMKKDNM_NFMFBPDFLJD_OFFSET UNITYSDK_OFFSET(0x15A70C50)
#define FEBIFMKKDNM_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x15A70B10)
#define FEBIFMKKDNM__CTOR_OFFSET UNITYSDK_OFFSET(0x15A70AE0)

inline static constexpr unsigned int FEBIFMKKDNM_TypeDefinitionIndex = 11857;

class FEBIFMKKDNM : public ::System::Object
{
public:
	::ADAJLLHFFLG HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Byte GCHCDJCFCEG; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x29
	::System::Byte ACIOBDEBDNK; // 0x2A
	::System::Byte CNIAANMNOCF; // 0x2B
	::System::Int32 JPEIIBFMBPC; // 0x2C
	::System::Int32 PCMOJLNOPPM; // 0x30

	::System::Void _ctor(::ADAJLLHFFLG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::ADAJLLHFFLG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FEBIFMKKDNM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FEBIFMKKDNM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FEBIFMKKDNM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEBIFMKKDNM_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 NFMFBPDFLJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEBIFMKKDNM_NFMFBPDFLJD_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEBIFMKKDNM_COFGIJJOFLP_OFFSET))(this);
	}
};
