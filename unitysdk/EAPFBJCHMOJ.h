#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/ENOCPALEDOM.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EAPFBJCHMOJ_ADJNPIDCDNF_OFFSET UNITYSDK_OFFSET(0xF9B3E40)
#define EAPFBJCHMOJ_AFBHCNCIKEK_OFFSET UNITYSDK_OFFSET(0xF9B45A0)
#define EAPFBJCHMOJ_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0xF9B3E30)
#define EAPFBJCHMOJ_BKNOBBPJGII_OFFSET UNITYSDK_OFFSET(0xF9B3460)
#define EAPFBJCHMOJ_BOLIKOCLLDC_OFFSET UNITYSDK_OFFSET(0xF9B4D90)
#define EAPFBJCHMOJ_BPELBMONDAO_OFFSET UNITYSDK_OFFSET(0xF9B39D0)
#define EAPFBJCHMOJ_CGCIILEDOBB_OFFSET UNITYSDK_OFFSET(0xF9B4770)
#define EAPFBJCHMOJ_CJEIEGAMCIB_OFFSET UNITYSDK_OFFSET(0xF9B56F0)
#define EAPFBJCHMOJ_DHBAKIEKJIJ_OFFSET UNITYSDK_OFFSET(0xF9B3C40)
#define EAPFBJCHMOJ_FIKEOKFDCGE_OFFSET UNITYSDK_OFFSET(0xF9B4C00)
#define EAPFBJCHMOJ_FPBOPLONJEB_OFFSET UNITYSDK_OFFSET(0xF9B4EC0)
#define EAPFBJCHMOJ_HNFAPPAHNKF_1_OFFSET UNITYSDK_OFFSET(0xF9B4250)
#define EAPFBJCHMOJ_HNFAPPAHNKF_OFFSET UNITYSDK_OFFSET(0xF9B4010)
#define EAPFBJCHMOJ_KODMDMKGJFI_1_OFFSET UNITYSDK_OFFSET(0xF9B5190)
#define EAPFBJCHMOJ_KODMDMKGJFI_OFFSET UNITYSDK_OFFSET(0xF9B4FB0)
#define EAPFBJCHMOJ_LIBFEFEJOCF_OFFSET UNITYSDK_OFFSET(0xF9B5180)
#define EAPFBJCHMOJ_LKMEIDLHCHN_OFFSET UNITYSDK_OFFSET(0xF9B39E0)
#define EAPFBJCHMOJ_MCJGGBMPMKC_OFFSET UNITYSDK_OFFSET(0xF9B45B0)
#define EAPFBJCHMOJ_MNCMIJLDOGJ_OFFSET UNITYSDK_OFFSET(0xF9B4A20)
#define EAPFBJCHMOJ_NMDKMCHJEJO_OFFSET UNITYSDK_OFFSET(0xF9B4B10)
#define EAPFBJCHMOJ_ONATTACH_OFFSET UNITYSDK_OFFSET(0xF9B3400)
#define EAPFBJCHMOJ_ONCREATE_OFFSET UNITYSDK_OFFSET(0xF9B3220)
#define EAPFBJCHMOJ_ONDETACH_OFFSET UNITYSDK_OFFSET(0xF9B3800)
#define EAPFBJCHMOJ_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xF9B3780)
#define EAPFBJCHMOJ_ONVISITONE_OFFSET UNITYSDK_OFFSET(0xF9B3930)
#define EAPFBJCHMOJ_PBNCDEHHDDD_OFFSET UNITYSDK_OFFSET(0xF9B47B0)
#define EAPFBJCHMOJ_PEHEBDJPOPF_OFFSET UNITYSDK_OFFSET(0xF9B5700)
#define EAPFBJCHMOJ_PLBMFBONCEG_OFFSET UNITYSDK_OFFSET(0xF9B3E20)
#define EAPFBJCHMOJ__CTOR_OFFSET UNITYSDK_OFFSET(0xF9B3990)

inline static constexpr unsigned int EAPFBJCHMOJ_TypeDefinitionIndex = 61524;

class EAPFBJCHMOJ
{
public:
	::Foundation::Unreal::FGameplayTagContainer EKJPCKIPCFF; // 0x28
	::System::String* _IFMJNDLJPBG_k__BackingField; // 0x98
	::System::Collections::Generic::List_1<::Foundation::Unreal::FGameplayTag>* DCLOOPCKLEO; // 0xA0
	::System::Boolean OHAOIGJGBKJ; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAPFBJCHMOJ__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAPFBJCHMOJ_ONCREATE_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAPFBJCHMOJ_ONATTACH_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAPFBJCHMOJ_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAPFBJCHMOJ_ONDETACH_OFFSET))(this);
	}

	::System::Void OnVisitOne(::Foundation::Unreal::FGameplayTag AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + EAPFBJCHMOJ_ONVISITONE_OFFSET))(this, AELLPLBJELA);
	}

	::System::Void BPELBMONDAO(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EAPFBJCHMOJ_BPELBMONDAO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LKMEIDLHCHN(::Foundation::Unreal::FGameplayTagContainer DJNNKLJBFOD, ::Foundation::Unreal::FGameplayTagContainer OFCAHDADHHF, ::System::Boolean CLCDOKABAIN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer, ::Foundation::Unreal::FGameplayTagContainer, ::System::Boolean))((::PBYTE)hIl2Cpp + EAPFBJCHMOJ_LKMEIDLHCHN_OFFSET))(this, DJNNKLJBFOD, OFCAHDADHHF, CLCDOKABAIN);
	}

	::System::Void BKNOBBPJGII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAPFBJCHMOJ_BKNOBBPJGII_OFFSET))(this);
	}

	::System::Void PLBMFBONCEG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAPFBJCHMOJ_PLBMFBONCEG_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAPFBJCHMOJ_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void ADJNPIDCDNF(::Foundation::Unreal::FGameplayTagContainer JMDOANHOEJG, ::System::Boolean CLCDOKABAIN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer, ::System::Boolean))((::PBYTE)hIl2Cpp + EAPFBJCHMOJ_ADJNPIDCDNF_OFFSET))(this, JMDOANHOEJG, CLCDOKABAIN);
	}

	::System::Void DHBAKIEKJIJ(::ENOCPALEDOM MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::ENOCPALEDOM))((::PBYTE)hIl2Cpp + EAPFBJCHMOJ_DHBAKIEKJIJ_OFFSET))(this, MNDIBLLFAJI);
	}

	::System::Void HNFAPPAHNKF(::System::String* AELLPLBJELA, ::System::Boolean CLCDOKABAIN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + EAPFBJCHMOJ_HNFAPPAHNKF_OFFSET))(this, AELLPLBJELA, CLCDOKABAIN);
	}

	::System::Void AFBHCNCIKEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAPFBJCHMOJ_AFBHCNCIKEK_OFFSET))(this);
	}

	::System::Void MCJGGBMPMKC(::Foundation::Unreal::FGameplayTag MDIDPKOOFFF, ::System::Boolean CLCDOKABAIN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + EAPFBJCHMOJ_MCJGGBMPMKC_OFFSET))(this, MDIDPKOOFFF, CLCDOKABAIN);
	}

	::Foundation::Unreal::FGameplayTagContainer CGCIILEDOBB()
	{
		return ((::Foundation::Unreal::FGameplayTagContainer(*)(::PVOID))((::PBYTE)hIl2Cpp + EAPFBJCHMOJ_CGCIILEDOBB_OFFSET))(this);
	}

	::System::Void PBNCDEHHDDD(::Foundation::Unreal::FGameplayTag BMCKPLEKFKJ, ::Foundation::Unreal::FGameplayTag IHLLHIDMBFK, ::System::Boolean CLCDOKABAIN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::Foundation::Unreal::FGameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + EAPFBJCHMOJ_PBNCDEHHDDD_OFFSET))(this, BMCKPLEKFKJ, IHLLHIDMBFK, CLCDOKABAIN);
	}

	::System::Boolean MNCMIJLDOGJ(::Foundation::Unreal::FGameplayTagContainer HDALMGJCBLF)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + EAPFBJCHMOJ_MNCMIJLDOGJ_OFFSET))(this, HDALMGJCBLF);
	}

	::System::Boolean NMDKMCHJEJO(::Foundation::Unreal::FGameplayTagContainer HDALMGJCBLF)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + EAPFBJCHMOJ_NMDKMCHJEJO_OFFSET))(this, HDALMGJCBLF);
	}

	::System::Boolean FIKEOKFDCGE(::Foundation::Unreal::FGameplayTag JNMIIDIDEGJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + EAPFBJCHMOJ_FIKEOKFDCGE_OFFSET))(this, JNMIIDIDEGJ);
	}

	::System::Boolean BOLIKOCLLDC(::Foundation::Unreal::FGameplayTag JNMIIDIDEGJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + EAPFBJCHMOJ_BOLIKOCLLDC_OFFSET))(this, JNMIIDIDEGJ);
	}

	::System::Boolean FPBOPLONJEB(::Foundation::Unreal::FGameplayTagContainer HDALMGJCBLF)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + EAPFBJCHMOJ_FPBOPLONJEB_OFFSET))(this, HDALMGJCBLF);
	}

	::System::Void KODMDMKGJFI(::Foundation::Unreal::FGameplayTagContainer NGFEFHPLMHK, ::System::Boolean CLCDOKABAIN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer, ::System::Boolean))((::PBYTE)hIl2Cpp + EAPFBJCHMOJ_KODMDMKGJFI_OFFSET))(this, NGFEFHPLMHK, CLCDOKABAIN);
	}

	::System::Void LIBFEFEJOCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAPFBJCHMOJ_LIBFEFEJOCF_OFFSET))(this);
	}

	::System::Void KODMDMKGJFI_1(::System::Collections::Generic::List_1<::System::String*>* JMDOANHOEJG, ::System::Boolean CLCDOKABAIN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EAPFBJCHMOJ_KODMDMKGJFI_1_OFFSET))(this, JMDOANHOEJG, CLCDOKABAIN);
	}

	::System::String* CJEIEGAMCIB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAPFBJCHMOJ_CJEIEGAMCIB_OFFSET))(this);
	}

	::System::Void HNFAPPAHNKF_1(::Foundation::Unreal::FGameplayTag MDIDPKOOFFF, ::System::Boolean CLCDOKABAIN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + EAPFBJCHMOJ_HNFAPPAHNKF_1_OFFSET))(this, MDIDPKOOFFF, CLCDOKABAIN);
	}

	::System::Boolean PEHEBDJPOPF(::Foundation::Unreal::FGameplayTagContainer HDALMGJCBLF)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + EAPFBJCHMOJ_PEHEBDJPOPF_OFFSET))(this, HDALMGJCBLF);
	}
};
