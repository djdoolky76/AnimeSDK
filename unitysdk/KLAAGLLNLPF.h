#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGJBMGADNFI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KLAAGLLNLPF_BFHDFEADNPF_OFFSET UNITYSDK_OFFSET(0x16124F20)
#define KLAAGLLNLPF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x16125350)
#define KLAAGLLNLPF_CPJFGDHIENB_OFFSET UNITYSDK_OFFSET(0x16125550)
#define KLAAGLLNLPF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x16124F00)
#define KLAAGLLNLPF_IMDEKKJIOHI_OFFSET UNITYSDK_OFFSET(0x16124DC0)
#define KLAAGLLNLPF_LAIFKHDEFJG_OFFSET UNITYSDK_OFFSET(0x16125080)
#define KLAAGLLNLPF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x16124F10)
#define KLAAGLLNLPF_OHLNCMBPFNO_OFFSET UNITYSDK_OFFSET(0x16125440)
#define KLAAGLLNLPF__CTOR_OFFSET UNITYSDK_OFFSET(0x16124DB0)

inline static constexpr unsigned int KLAAGLLNLPF_TypeDefinitionIndex = 15157;

class KLAAGLLNLPF : public ::System::Object
{
public:
	::System::String* COEFOHCKLPE; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* KEOKGOLNIBI; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* EHGGGPBLOGD; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::IGJBMGADNFI HBDPAIKANDB; // 0x30
	::System::Int32 AKAAKALMNAJ; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x44
	::System::Byte ACIOBDEBDNK; // 0x45
	::System::Byte CNIAANMNOCF; // 0x46
	::System::Boolean NCIEPAGIPML; // 0x47

	::System::Void _ctor(::IGJBMGADNFI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IGJBMGADNFI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KLAAGLLNLPF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 IMDEKKJIOHI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAAGLLNLPF_IMDEKKJIOHI_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KLAAGLLNLPF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAAGLLNLPF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Boolean BFHDFEADNPF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAAGLLNLPF_BFHDFEADNPF_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* LAIFKHDEFJG()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAAGLLNLPF_LAIFKHDEFJG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAAGLLNLPF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* OHLNCMBPFNO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAAGLLNLPF_OHLNCMBPFNO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* CPJFGDHIENB()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAAGLLNLPF_CPJFGDHIENB_OFFSET))(this);
	}
};
