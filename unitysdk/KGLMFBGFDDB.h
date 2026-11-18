#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJODHHBGFAN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define KGLMFBGFDDB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B7E2450)
#define KGLMFBGFDDB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B7E2540)
#define KGLMFBGFDDB_HKCFLKNJLNB_OFFSET UNITYSDK_OFFSET(0x1B7E2690)
#define KGLMFBGFDDB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B7E27D0)
#define KGLMFBGFDDB_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B7E2550)
#define KGLMFBGFDDB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E2440)

inline static constexpr unsigned int KGLMFBGFDDB_TypeDefinitionIndex = 13287;

class KGLMFBGFDDB : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::HJODHHBGFAN HBDPAIKANDB; // 0x18
	::System::Int32 PCMOJLNOPPM; // 0x28
	::System::Int32 IGEEMJPEDOA; // 0x2C
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32

	::System::Void _ctor(::HJODHHBGFAN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HJODHHBGFAN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KGLMFBGFDDB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGLMFBGFDDB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KGLMFBGFDDB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGLMFBGFDDB_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 HKCFLKNJLNB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGLMFBGFDDB_HKCFLKNJLNB_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGLMFBGFDDB_LJANCIBECFG_OFFSET))(this);
	}
};
