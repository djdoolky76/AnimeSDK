#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJDKELOLEMD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JJOAIDINEJF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1935C930)
#define JJOAIDINEJF_FNCKEEDJDEO_OFFSET UNITYSDK_OFFSET(0x1935CB80)
#define JJOAIDINEJF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1935CB60)
#define JJOAIDINEJF_IGMOCLGENLA_OFFSET UNITYSDK_OFFSET(0x1935C660)
#define JJOAIDINEJF_JADHELLDBML_OFFSET UNITYSDK_OFFSET(0x1935CE50)
#define JJOAIDINEJF_JOFBFJNNMFG_OFFSET UNITYSDK_OFFSET(0x1935CA20)
#define JJOAIDINEJF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1935CB70)
#define JJOAIDINEJF_PIPBPLEIPFK_OFFSET UNITYSDK_OFFSET(0x1935CF90)
#define JJOAIDINEJF__CTOR_OFFSET UNITYSDK_OFFSET(0x1935C650)

inline static constexpr unsigned int JJOAIDINEJF_TypeDefinitionIndex = 10362;

class JJOAIDINEJF : public ::System::Object
{
public:
	::IJDKELOLEMD HBDPAIKANDB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* KEJCCCDHGBF; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* BPEMAGGGFDL; // 0x30
	::System::Int32 NCIBGCDIAFC; // 0x38
	::System::Int32 PCMOJLNOPPM; // 0x3C
	::System::Int32 LEOEBNELFOM; // 0x40
	::System::Int32 OIKCPMJLMGI; // 0x44
	::System::Byte ACIOBDEBDNK; // 0x48
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x49
	::System::Byte CNIAANMNOCF; // 0x4A

	::System::Void _ctor(::IJDKELOLEMD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IJDKELOLEMD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JJOAIDINEJF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* IGMOCLGENLA()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOAIDINEJF_IGMOCLGENLA_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOAIDINEJF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 JOFBFJNNMFG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOAIDINEJF_JOFBFJNNMFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JJOAIDINEJF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOAIDINEJF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* FNCKEEDJDEO()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOAIDINEJF_FNCKEEDJDEO_OFFSET))(this);
	}

	::System::Int32 JADHELLDBML()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOAIDINEJF_JADHELLDBML_OFFSET))(this);
	}

	::System::Int32 PIPBPLEIPFK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOAIDINEJF_PIPBPLEIPFK_OFFSET))(this);
	}
};
