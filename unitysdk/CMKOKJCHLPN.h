#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BGPOBLOJPHH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CMKOKJCHLPN_CNBEMMKIDIA_OFFSET UNITYSDK_OFFSET(0x1878DFC0)
#define CMKOKJCHLPN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1878DDB0)
#define CMKOKJCHLPN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1878DEA0)
#define CMKOKJCHLPN_JPEENHICKAB_OFFSET UNITYSDK_OFFSET(0x1878DB50)
#define CMKOKJCHLPN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1878DB40)
#define CMKOKJCHLPN_LLDAMBKLDNI_OFFSET UNITYSDK_OFFSET(0x1878DEB0)
#define CMKOKJCHLPN_PMOBHMFNJBC_OFFSET UNITYSDK_OFFSET(0x1878D870)
#define CMKOKJCHLPN_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1878E100)
#define CMKOKJCHLPN__CTOR_OFFSET UNITYSDK_OFFSET(0x1878D860)

inline static constexpr unsigned int CMKOKJCHLPN_TypeDefinitionIndex = 11115;

class CMKOKJCHLPN : public ::System::Object
{
public:
	::BGPOBLOJPHH HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* BELHNOPCFFL; // 0x28
	::System::String* DEEJHDPEMLG; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* JFDOLEHIKJN; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x41
	::System::Byte CNIAANMNOCF; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x44
	::System::Int32 PBCNDCFJLJN; // 0x48

	::System::Void _ctor(::BGPOBLOJPHH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BGPOBLOJPHH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CMKOKJCHLPN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* PMOBHMFNJBC()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMKOKJCHLPN_PMOBHMFNJBC_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMKOKJCHLPN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* JPEENHICKAB()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMKOKJCHLPN_JPEENHICKAB_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMKOKJCHLPN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CMKOKJCHLPN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* LLDAMBKLDNI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMKOKJCHLPN_LLDAMBKLDNI_OFFSET))(this);
	}

	::System::Int32 CNBEMMKIDIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMKOKJCHLPN_CNBEMMKIDIA_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMKOKJCHLPN_PPIFNHNGCGO_OFFSET))(this);
	}
};
