#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MPEMFEEPDBG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define PMEGBFJGCNA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1F291700)
#define PMEGBFJGCNA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1F2916F0)
#define PMEGBFJGCNA_KCBFOICDMMP_OFFSET UNITYSDK_OFFSET(0x1F291940)
#define PMEGBFJGCNA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1F291930)
#define PMEGBFJGCNA_LPBCBNLPKGG_OFFSET UNITYSDK_OFFSET(0x1F2915B0)
#define PMEGBFJGCNA_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1F2917F0)
#define PMEGBFJGCNA__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2915A0)

inline static constexpr unsigned int PMEGBFJGCNA_TypeDefinitionIndex = 14356;

class PMEGBFJGCNA : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::MPEMFEEPDBG HBDPAIKANDB; // 0x18
	::System::Int32 BAJFBCKBMJO; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x2D
	::System::Byte CNIAANMNOCF; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Int32 LMKJGECOHEA; // 0x34

	::System::Void _ctor(::MPEMFEEPDBG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MPEMFEEPDBG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PMEGBFJGCNA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 LPBCBNLPKGG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEGBFJGCNA_LPBCBNLPKGG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PMEGBFJGCNA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEGBFJGCNA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEGBFJGCNA_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEGBFJGCNA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 KCBFOICDMMP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEGBFJGCNA_KCBFOICDMMP_OFFSET))(this);
	}
};
