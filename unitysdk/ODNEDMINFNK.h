#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEPGEIMNDKC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define ODNEDMINFNK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1C09E3F0)
#define ODNEDMINFNK_EMOACCCKGNN_OFFSET UNITYSDK_OFFSET(0x1C09DF50)
#define ODNEDMINFNK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1C09DF40)
#define ODNEDMINFNK_GKAMCMIJFHJ_OFFSET UNITYSDK_OFFSET(0x1C09DDF0)
#define ODNEDMINFNK_KLGOHOPOKEN_OFFSET UNITYSDK_OFFSET(0x1C09E060)
#define ODNEDMINFNK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1C09DF30)
#define ODNEDMINFNK_MGPGOBJJMIA_OFFSET UNITYSDK_OFFSET(0x1C09E2E0)
#define ODNEDMINFNK_PLMMMHHCPPJ_OFFSET UNITYSDK_OFFSET(0x1C09E4E0)
#define ODNEDMINFNK_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1C09E1A0)
#define ODNEDMINFNK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C09DDE0)

inline static constexpr unsigned int ODNEDMINFNK_TypeDefinitionIndex = 9783;

class ODNEDMINFNK : public ::System::Object
{
public:
	::OEPGEIMNDKC HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* JPMKBDEKJNI; // 0x28
	::System::String* GFPFCPFIIIK; // 0x30
	::System::String* MNFBGDJHOFC; // 0x38
	::System::Int32 OKBBGPGIODD; // 0x40
	::System::Int32 PCMOJLNOPPM; // 0x44
	::System::Byte CNIAANMNOCF; // 0x48
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x49
	::System::Byte ACIOBDEBDNK; // 0x4A
	::System::Byte _padding0[0x1];
	::System::Int32 EHNPHHINEDG; // 0x4C

	::System::Void _ctor(::OEPGEIMNDKC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OEPGEIMNDKC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ODNEDMINFNK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 GKAMCMIJFHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNEDMINFNK_GKAMCMIJFHJ_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNEDMINFNK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ODNEDMINFNK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* EMOACCCKGNN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNEDMINFNK_EMOACCCKGNN_OFFSET))(this);
	}

	::System::Int32 KLGOHOPOKEN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNEDMINFNK_KLGOHOPOKEN_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNEDMINFNK_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* MGPGOBJJMIA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNEDMINFNK_MGPGOBJJMIA_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNEDMINFNK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* PLMMMHHCPPJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNEDMINFNK_PLMMMHHCPPJ_OFFSET))(this);
	}
};
