#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MKKNFBCMKJO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KHGHPCNCLMH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BB021A0)
#define KHGHPCNCLMH_EPBFBIKDJOM_OFFSET UNITYSDK_OFFSET(0x1BB027E0)
#define KHGHPCNCLMH_FEMLPHIGLAP_OFFSET UNITYSDK_OFFSET(0x1BB026A0)
#define KHGHPCNCLMH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BB028F0)
#define KHGHPCNCLMH_GMAPCFKGEFB_OFFSET UNITYSDK_OFFSET(0x1BB023D0)
#define KHGHPCNCLMH_KAMIPOPKIEC_OFFSET UNITYSDK_OFFSET(0x1BB02060)
#define KHGHPCNCLMH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BB02050)
#define KHGHPCNCLMH_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1BB02290)
#define KHGHPCNCLMH__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB02040)

inline static constexpr unsigned int KHGHPCNCLMH_TypeDefinitionIndex = 10838;

class KHGHPCNCLMH : public ::System::Object
{
public:
	::MKKNFBCMKJO HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* KMJGHMGENKK; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* GOMDNPEMEKJ; // 0x30
	::System::Int32 IADMMJJMOLH; // 0x38
	::System::Int32 JKLCALGBGJP; // 0x3C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x40
	::System::Byte CNIAANMNOCF; // 0x41
	::System::Byte ACIOBDEBDNK; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x44

	::System::Void _ctor(::MKKNFBCMKJO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MKKNFBCMKJO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KHGHPCNCLMH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHGHPCNCLMH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 KAMIPOPKIEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHGHPCNCLMH_KAMIPOPKIEC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHGHPCNCLMH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHGHPCNCLMH_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* GMAPCFKGEFB()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHGHPCNCLMH_GMAPCFKGEFB_OFFSET))(this);
	}

	::System::Int32 FEMLPHIGLAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHGHPCNCLMH_FEMLPHIGLAP_OFFSET))(this);
	}

	::System::String* EPBFBIKDJOM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHGHPCNCLMH_EPBFBIKDJOM_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KHGHPCNCLMH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
