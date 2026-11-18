#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFNMHMDCDOG.h"
#include "unitysdk/HOALPDNFMKD.h"
#include "unitysdk/JJICEEOIKHN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JKMCEGNAEDC_CBFOCAHCGND_OFFSET UNITYSDK_OFFSET(0x1935E790)
#define JKMCEGNAEDC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1935F270)
#define JKMCEGNAEDC_FFJHBAPAPPP_OFFSET UNITYSDK_OFFSET(0x1935EDB0)
#define JKMCEGNAEDC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1935E640)
#define JKMCEGNAEDC_HAKCGJKMBFL_OFFSET UNITYSDK_OFFSET(0x1935F010)
#define JKMCEGNAEDC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1935F360)
#define JKMCEGNAEDC_OJHCNAEFEJP_OFFSET UNITYSDK_OFFSET(0x1935EAA0)
#define JKMCEGNAEDC_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1935E650)
#define JKMCEGNAEDC__CTOR_OFFSET UNITYSDK_OFFSET(0x1935E630)

inline static constexpr unsigned int JKMCEGNAEDC_TypeDefinitionIndex = 14074;

class JKMCEGNAEDC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* KKELKJMNEAE; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* HGLLDJBGGLJ; // 0x18
	::System::Collections::Generic::List_1<::HFNMHMDCDOG>* CGOCDIBKNAB; // 0x20
	::System::Collections::Generic::List_1<::HOALPDNFMKD>* JHPBCPAKFJJ; // 0x28
	::JJICEEOIKHN HBDPAIKANDB; // 0x30
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x48
	::System::Byte ACIOBDEBDNK; // 0x49
	::System::Byte CNIAANMNOCF; // 0x4A
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x4C

	::System::Void _ctor(::JJICEEOIKHN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JJICEEOIKHN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JKMCEGNAEDC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JKMCEGNAEDC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMCEGNAEDC_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::HFNMHMDCDOG>* CBFOCAHCGND()
	{
		return ((::System::Collections::Generic::List_1<::HFNMHMDCDOG>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMCEGNAEDC_CBFOCAHCGND_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::HOALPDNFMKD>* OJHCNAEFEJP()
	{
		return ((::System::Collections::Generic::List_1<::HOALPDNFMKD>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMCEGNAEDC_OJHCNAEFEJP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* FFJHBAPAPPP()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMCEGNAEDC_FFJHBAPAPPP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* HAKCGJKMBFL()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMCEGNAEDC_HAKCGJKMBFL_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMCEGNAEDC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMCEGNAEDC_LJANCIBECFG_OFFSET))(this);
	}
};
