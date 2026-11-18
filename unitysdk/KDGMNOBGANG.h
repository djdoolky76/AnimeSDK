#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBOJDIMKBHC.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define KDGMNOBGANG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B7E09C0)
#define KDGMNOBGANG_DAILDALIMEB_OFFSET UNITYSDK_OFFSET(0x1B7E0840)
#define KDGMNOBGANG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B7E09B0)
#define KDGMNOBGANG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B7E09A0)
#define KDGMNOBGANG_PIOOCBCJADC_OFFSET UNITYSDK_OFFSET(0x1B7E06F0)
#define KDGMNOBGANG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E06E0)

inline static constexpr unsigned int KDGMNOBGANG_TypeDefinitionIndex = 15852;

class KDGMNOBGANG : public ::System::Object
{
public:
	::Foundation::AssetPath JGNBBHIPDBN; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::CBOJDIMKBHC HBDPAIKANDB; // 0x28
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A
	::System::Byte _padding0[0x5];
	::System::UInt64 OJPHMONDMAC; // 0x40

	::System::Void _ctor(::CBOJDIMKBHC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CBOJDIMKBHC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KDGMNOBGANG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::UInt64 PIOOCBCJADC()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGMNOBGANG_PIOOCBCJADC_OFFSET))(this);
	}

	::Foundation::AssetPath DAILDALIMEB()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGMNOBGANG_DAILDALIMEB_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGMNOBGANG_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KDGMNOBGANG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGMNOBGANG_COFGIJJOFLP_OFFSET))(this);
	}
};
