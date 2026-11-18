#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PMHKPGAOHCB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define KIIAEJILDDD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1936ABC0)
#define KIIAEJILDDD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1936ABB0)
#define KIIAEJILDDD_KCFBOPKOLKI_OFFSET UNITYSDK_OFFSET(0x1936AF40)
#define KIIAEJILDDD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1936ACB0)
#define KIIAEJILDDD_PDMPAKJENIF_OFFSET UNITYSDK_OFFSET(0x1936AE00)
#define KIIAEJILDDD_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1936ACC0)
#define KIIAEJILDDD__CTOR_OFFSET UNITYSDK_OFFSET(0x1936ABA0)

inline static constexpr unsigned int KIIAEJILDDD_TypeDefinitionIndex = 11379;

class KIIAEJILDDD : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::PMHKPGAOHCB HBDPAIKANDB; // 0x18
	::System::Int32 FMKHJEAILLO; // 0x28
	::System::Int32 MFAAMEMILEM; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x34

	::System::Void _ctor(::PMHKPGAOHCB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PMHKPGAOHCB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KIIAEJILDDD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KIIAEJILDDD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIIAEJILDDD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIIAEJILDDD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIIAEJILDDD_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 PDMPAKJENIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIIAEJILDDD_PDMPAKJENIF_OFFSET))(this);
	}

	::System::Int32 KCFBOPKOLKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIIAEJILDDD_KCFBOPKOLKI_OFFSET))(this);
	}
};
