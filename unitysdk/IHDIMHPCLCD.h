#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAALFOFOOLD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IHDIMHPCLCD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x15A96C10)
#define IHDIMHPCLCD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x15A96930)
#define IHDIMHPCLCD_GCLOAMIJOIP_OFFSET UNITYSDK_OFFSET(0x15A96940)
#define IHDIMHPCLCD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x15A96D00)
#define IHDIMHPCLCD_PBFKHLEHIGG_OFFSET UNITYSDK_OFFSET(0x15A966E0)
#define IHDIMHPCLCD_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x15A967F0)
#define IHDIMHPCLCD__CTOR_OFFSET UNITYSDK_OFFSET(0x15A966D0)

inline static constexpr unsigned int IHDIMHPCLCD_TypeDefinitionIndex = 11131;

class IHDIMHPCLCD : public ::System::Object
{
public:
	::KAALFOFOOLD HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* JIBIHKDHAKD; // 0x28
	::System::String* CDEKJIPBECO; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x3C

	::System::Void _ctor(::KAALFOFOOLD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KAALFOFOOLD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IHDIMHPCLCD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* PBFKHLEHIGG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDIMHPCLCD_PBFKHLEHIGG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDIMHPCLCD_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IHDIMHPCLCD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* GCLOAMIJOIP()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDIMHPCLCD_GCLOAMIJOIP_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDIMHPCLCD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDIMHPCLCD_LJANCIBECFG_OFFSET))(this);
	}
};
