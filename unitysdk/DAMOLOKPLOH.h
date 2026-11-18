#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMCGLIMCNOG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define DAMOLOKPLOH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x195073E0)
#define DAMOLOKPLOH_FLPHCJKKIIN_OFFSET UNITYSDK_OFFSET(0x195074D0)
#define DAMOLOKPLOH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19507290)
#define DAMOLOKPLOH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19507000)
#define DAMOLOKPLOH_NKFALLBKIHF_OFFSET UNITYSDK_OFFSET(0x195072A0)
#define DAMOLOKPLOH_PLIKPGLKGCL_OFFSET UNITYSDK_OFFSET(0x19507010)
#define DAMOLOKPLOH_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19507150)
#define DAMOLOKPLOH__CTOR_OFFSET UNITYSDK_OFFSET(0x19506FF0)

inline static constexpr unsigned int DAMOLOKPLOH_TypeDefinitionIndex = 12129;

class DAMOLOKPLOH : public ::System::Object
{
public:
	::DMCGLIMCNOG HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 IGBCIHHDBMI; // 0x28
	::System::Int32 PCMOJLNOPPM; // 0x2C
	::System::Int32 NNIFNAJDHHP; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 AHJEMEAOFDB; // 0x38

	::System::Void _ctor(::DMCGLIMCNOG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DMCGLIMCNOG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DAMOLOKPLOH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMOLOKPLOH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PLIKPGLKGCL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMOLOKPLOH_PLIKPGLKGCL_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMOLOKPLOH_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DAMOLOKPLOH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 NKFALLBKIHF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMOLOKPLOH_NKFALLBKIHF_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMOLOKPLOH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 FLPHCJKKIIN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMOLOKPLOH_FLPHCJKKIIN_OFFSET))(this);
	}
};
