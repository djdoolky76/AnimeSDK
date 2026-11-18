#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAOPCNDAPBL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define GJDDIMMAPDM_APFPBLDHMHM_OFFSET UNITYSDK_OFFSET(0x1B4D46D0)
#define GJDDIMMAPDM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B4D45E0)
#define GJDDIMMAPDM_FBNLDKPMGKE_OFFSET UNITYSDK_OFFSET(0x1B4D4360)
#define GJDDIMMAPDM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B4D4350)
#define GJDDIMMAPDM_KCFBOPKOLKI_OFFSET UNITYSDK_OFFSET(0x1B4D44A0)
#define GJDDIMMAPDM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B4D4A90)
#define GJDDIMMAPDM_LPGBKKLKMJL_OFFSET UNITYSDK_OFFSET(0x1B4D4810)
#define GJDDIMMAPDM_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B4D4950)
#define GJDDIMMAPDM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4D4340)

inline static constexpr unsigned int GJDDIMMAPDM_TypeDefinitionIndex = 15108;

class GJDDIMMAPDM : public ::System::Object
{
public:
	::NAOPCNDAPBL HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 AKHOFODLACF; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x2D
	::System::Byte CNIAANMNOCF; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 BHHAGFFCAGK; // 0x30
	::System::Int32 MFAAMEMILEM; // 0x34
	::System::Int32 ECALHDCCKCE; // 0x38
	::System::Int32 PCMOJLNOPPM; // 0x3C

	::System::Void _ctor(::NAOPCNDAPBL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NAOPCNDAPBL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GJDDIMMAPDM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GJDDIMMAPDM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 FBNLDKPMGKE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDDIMMAPDM_FBNLDKPMGKE_OFFSET))(this);
	}

	::System::Int32 KCFBOPKOLKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDDIMMAPDM_KCFBOPKOLKI_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDDIMMAPDM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 APFPBLDHMHM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDDIMMAPDM_APFPBLDHMHM_OFFSET))(this);
	}

	::System::Int32 LPGBKKLKMJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDDIMMAPDM_LPGBKKLKMJL_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDDIMMAPDM_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDDIMMAPDM_LJANCIBECFG_OFFSET))(this);
	}
};
