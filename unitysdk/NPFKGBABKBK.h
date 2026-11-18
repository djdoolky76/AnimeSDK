#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPDDKDEOBKG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define NPFKGBABKBK_BFNIKILNFLH_OFFSET UNITYSDK_OFFSET(0x1B334B90)
#define NPFKGBABKBK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B334940)
#define NPFKGBABKBK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B334B80)
#define NPFKGBABKBK_LBGKLHPBGAF_OFFSET UNITYSDK_OFFSET(0x1B334CD0)
#define NPFKGBABKBK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B334B70)
#define NPFKGBABKBK_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B334A30)
#define NPFKGBABKBK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B334930)

inline static constexpr unsigned int NPFKGBABKBK_TypeDefinitionIndex = 10888;

class NPFKGBABKBK : public ::System::Object
{
public:
	::HPDDKDEOBKG HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 PCMOJLNOPPM; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2C
	::System::Byte CNIAANMNOCF; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 POLDALPEEFI; // 0x30
	::System::Int32 CDMIDEOMGJE; // 0x34

	::System::Void _ctor(::HPDDKDEOBKG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HPDDKDEOBKG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NPFKGBABKBK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPFKGBABKBK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPFKGBABKBK_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPFKGBABKBK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPFKGBABKBK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 BFNIKILNFLH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPFKGBABKBK_BFNIKILNFLH_OFFSET))(this);
	}

	::System::Int32 LBGKLHPBGAF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPFKGBABKBK_LBGKLHPBGAF_OFFSET))(this);
	}
};
