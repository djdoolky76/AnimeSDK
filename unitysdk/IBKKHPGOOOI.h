#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EHELBGHCCBI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define IBKKHPGOOOI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x16102930)
#define IBKKHPGOOOI_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x16102B80)
#define IBKKHPGOOOI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x16102A20)
#define IBKKHPGOOOI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x16102A30)
#define IBKKHPGOOOI_OCCMAIGKFBL_OFFSET UNITYSDK_OFFSET(0x16102A40)
#define IBKKHPGOOOI_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x16102C90)
#define IBKKHPGOOOI__CTOR_OFFSET UNITYSDK_OFFSET(0x16102920)

inline static constexpr unsigned int IBKKHPGOOOI_TypeDefinitionIndex = 10222;

class IBKKHPGOOOI : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::EHELBGHCCBI HBDPAIKANDB; // 0x18
	::System::String* OMDLAHBLCAM; // 0x28
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Int32 INNKKILNJDE; // 0x34
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A

	::System::Void _ctor(::EHELBGHCCBI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EHELBGHCCBI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IBKKHPGOOOI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBKKHPGOOOI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IBKKHPGOOOI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IBKKHPGOOOI_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 OCCMAIGKFBL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBKKHPGOOOI_OCCMAIGKFBL_OFFSET))(this);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBKKHPGOOOI_ENJENAJGHFI_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBKKHPGOOOI_PPIFNHNGCGO_OFFSET))(this);
	}
};
