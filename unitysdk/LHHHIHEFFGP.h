#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFNMHMDCDOG.h"
#include "unitysdk/HOALPDNFMKD.h"
#include "unitysdk/JMPEHHCKNBD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LHHHIHEFFGP_CBFOCAHCGND_OFFSET UNITYSDK_OFFSET(0x19567FB0)
#define LHHHIHEFFGP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x195675A0)
#define LHHHIHEFFGP_FFJHBAPAPPP_OFFSET UNITYSDK_OFFSET(0x19567690)
#define LHHHIHEFFGP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19567E60)
#define LHHHIHEFFGP_HAKCGJKMBFL_OFFSET UNITYSDK_OFFSET(0x19567C00)
#define LHHHIHEFFGP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x195682C0)
#define LHHHIHEFFGP_OJHCNAEFEJP_OFFSET UNITYSDK_OFFSET(0x195678F0)
#define LHHHIHEFFGP_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19567E70)
#define LHHHIHEFFGP__CTOR_OFFSET UNITYSDK_OFFSET(0x19549110)

inline static constexpr unsigned int LHHHIHEFFGP_TypeDefinitionIndex = 9551;

class LHHHIHEFFGP : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* KKELKJMNEAE; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* HGLLDJBGGLJ; // 0x20
	::JMPEHHCKNBD HBDPAIKANDB; // 0x28
	::System::Collections::Generic::List_1<::HFNMHMDCDOG>* CGOCDIBKNAB; // 0x38
	::System::Collections::Generic::List_1<::HOALPDNFMKD>* JHPBCPAKFJJ; // 0x40
	::System::Byte CNIAANMNOCF; // 0x48
	::System::Byte ACIOBDEBDNK; // 0x49
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4A
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x4C

	::System::Void _ctor(::JMPEHHCKNBD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JMPEHHCKNBD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LHHHIHEFFGP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHHIHEFFGP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* FFJHBAPAPPP()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHHIHEFFGP_FFJHBAPAPPP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::HOALPDNFMKD>* OJHCNAEFEJP()
	{
		return ((::System::Collections::Generic::List_1<::HOALPDNFMKD>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHHIHEFFGP_OJHCNAEFEJP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* HAKCGJKMBFL()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHHIHEFFGP_HAKCGJKMBFL_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LHHHIHEFFGP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHHIHEFFGP_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::HFNMHMDCDOG>* CBFOCAHCGND()
	{
		return ((::System::Collections::Generic::List_1<::HFNMHMDCDOG>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHHIHEFFGP_CBFOCAHCGND_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHHIHEFFGP_LJANCIBECFG_OFFSET))(this);
	}
};
