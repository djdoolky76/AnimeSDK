#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NELIGLNLMOE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BFNHIJMEEBF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A16B200)
#define BFNHIJMEEBF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A16B1E0)
#define BFNHIJMEEBF_HGLIDNCHGHL_OFFSET UNITYSDK_OFFSET(0x1A16B2F0)
#define BFNHIJMEEBF_KFJIOHKHLPD_OFFSET UNITYSDK_OFFSET(0x1A16AF10)
#define BFNHIJMEEBF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A16B1F0)
#define BFNHIJMEEBF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A16AF00)

inline static constexpr unsigned int BFNHIJMEEBF_TypeDefinitionIndex = 14634;

class BFNHIJMEEBF : public ::System::Object
{
public:
	::NELIGLNLMOE HBDPAIKANDB; // 0x10
	::System::String* HCCHHNGMPKD; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* BKIOMPCPEMH; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A

	::System::Void _ctor(::NELIGLNLMOE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NELIGLNLMOE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BFNHIJMEEBF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* KFJIOHKHLPD()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFNHIJMEEBF_KFJIOHKHLPD_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BFNHIJMEEBF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFNHIJMEEBF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFNHIJMEEBF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* HGLIDNCHGHL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFNHIJMEEBF_HGLIDNCHGHL_OFFSET))(this);
	}
};
