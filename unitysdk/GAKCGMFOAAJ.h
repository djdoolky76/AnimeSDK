#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGAIFJMJHFC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define GAKCGMFOAAJ_BPGFNLHNHGA_OFFSET UNITYSDK_OFFSET(0x19AF7160)
#define GAKCGMFOAAJ_CLGHEHABOBD_OFFSET UNITYSDK_OFFSET(0x19AF73F0)
#define GAKCGMFOAAJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19AF6F30)
#define GAKCGMFOAAJ_FNFEFGIGIJI_OFFSET UNITYSDK_OFFSET(0x19AF72B0)
#define GAKCGMFOAAJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19AF72A0)
#define GAKCGMFOAAJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19AF6F20)
#define GAKCGMFOAAJ_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19AF7020)
#define GAKCGMFOAAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF6F10)

inline static constexpr unsigned int GAKCGMFOAAJ_TypeDefinitionIndex = 14303;

class GAKCGMFOAAJ : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::LGAIFJMJHFC HBDPAIKANDB; // 0x18
	::System::Int32 FMEHFAKPMHG; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2D
	::System::Byte CNIAANMNOCF; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Int32 JLEMDJPGBDL; // 0x34
	::System::Int32 MKMFCEPFEMF; // 0x38

	::System::Void _ctor(::LGAIFJMJHFC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LGAIFJMJHFC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GAKCGMFOAAJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKCGMFOAAJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKCGMFOAAJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKCGMFOAAJ_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 BPGFNLHNHGA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKCGMFOAAJ_BPGFNLHNHGA_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GAKCGMFOAAJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 FNFEFGIGIJI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKCGMFOAAJ_FNFEFGIGIJI_OFFSET))(this);
	}

	::System::Int32 CLGHEHABOBD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKCGMFOAAJ_CLGHEHABOBD_OFFSET))(this);
	}
};
