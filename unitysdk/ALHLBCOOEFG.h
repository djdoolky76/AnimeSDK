#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IKNDOKMILAA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define ALHLBCOOEFG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x194EDD90)
#define ALHLBCOOEFG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x194ED9C0)
#define ALHLBCOOEFG_KCFBOPKOLKI_OFFSET UNITYSDK_OFFSET(0x194ED9D0)
#define ALHLBCOOEFG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x194EDE80)
#define ALHLBCOOEFG_OJLCHPLOPBC_OFFSET UNITYSDK_OFFSET(0x194EDC50)
#define ALHLBCOOEFG_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x194EDB10)
#define ALHLBCOOEFG__CTOR_OFFSET UNITYSDK_OFFSET(0x194ED9B0)

inline static constexpr unsigned int ALHLBCOOEFG_TypeDefinitionIndex = 14289;

class ALHLBCOOEFG : public ::System::Object
{
public:
	::IKNDOKMILAA HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x29
	::System::Byte CNIAANMNOCF; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x2C
	::System::Int32 MFAAMEMILEM; // 0x30
	::System::Int32 PECFNGDFBFF; // 0x34

	::System::Void _ctor(::IKNDOKMILAA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IKNDOKMILAA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ALHLBCOOEFG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ALHLBCOOEFG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 KCFBOPKOLKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHLBCOOEFG_KCFBOPKOLKI_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHLBCOOEFG_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 OJLCHPLOPBC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHLBCOOEFG_OJLCHPLOPBC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHLBCOOEFG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHLBCOOEFG_LJANCIBECFG_OFFSET))(this);
	}
};
