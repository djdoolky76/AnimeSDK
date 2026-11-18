#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NOLEBCPEIFH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define KGABMJOLDNO_BFEIGFOPNPC_OFFSET UNITYSDK_OFFSET(0x1B8A2760)
#define KGABMJOLDNO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B8A2B40)
#define KGABMJOLDNO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B8A2B30)
#define KGABMJOLDNO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B8A28A0)
#define KGABMJOLDNO_LJDLCEKMAAN_OFFSET UNITYSDK_OFFSET(0x1B8A28B0)
#define KGABMJOLDNO_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B8A29F0)
#define KGABMJOLDNO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A2750)

inline static constexpr unsigned int KGABMJOLDNO_TypeDefinitionIndex = 10691;

class KGABMJOLDNO : public ::System::Object
{
public:
	::NOLEBCPEIFH HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x29
	::System::Byte CNIAANMNOCF; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 KEILCMHLOFL; // 0x2C
	::System::Int32 IFNBCJMHDKG; // 0x30
	::System::Int32 PCMOJLNOPPM; // 0x34

	::System::Void _ctor(::NOLEBCPEIFH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NOLEBCPEIFH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KGABMJOLDNO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 BFEIGFOPNPC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGABMJOLDNO_BFEIGFOPNPC_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGABMJOLDNO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 LJDLCEKMAAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGABMJOLDNO_LJDLCEKMAAN_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGABMJOLDNO_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KGABMJOLDNO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGABMJOLDNO_COFGIJJOFLP_OFFSET))(this);
	}
};
