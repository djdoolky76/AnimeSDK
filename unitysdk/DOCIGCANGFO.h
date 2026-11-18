#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"

class PPAAEGFGDNM;

#define DOCIGCANGFO_ADJNPIDCDNF_OFFSET UNITYSDK_OFFSET(0x7FDCAB0)
#define DOCIGCANGFO_CGPPDGKBBCF_OFFSET UNITYSDK_OFFSET(0x7FDCA60)
#define DOCIGCANGFO_EOIHJPBHJFE_OFFSET UNITYSDK_OFFSET(0x7FDBE80)
#define DOCIGCANGFO_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x7FDC840)
#define DOCIGCANGFO_HNFAPPAHNKF_OFFSET UNITYSDK_OFFSET(0x7FDC560)
#define DOCIGCANGFO_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x7FDCEC0)
#define DOCIGCANGFO_MCJGGBMPMKC_OFFSET UNITYSDK_OFFSET(0x7FDCBF0)
#define DOCIGCANGFO_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x7FDCDC0)
#define DOCIGCANGFO_NDDMFDOOBLO_OFFSET UNITYSDK_OFFSET(0x7FDCE50)
#define DOCIGCANGFO_NGJBHIHJLCA_OFFSET UNITYSDK_OFFSET(0x7FDC920)
#define DOCIGCANGFO_OJJJKMLBCIB_OFFSET UNITYSDK_OFFSET(0x7FDC130)
#define DOCIGCANGFO_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x7FDC790)
#define DOCIGCANGFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x7FDC890)
#define DOCIGCANGFO__CTOR_OFFSET UNITYSDK_OFFSET(0x7FDC910)

inline static constexpr unsigned int DOCIGCANGFO_TypeDefinitionIndex = 90039;

class DOCIGCANGFO : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xB4; // 0x0
	::Foundation::Unreal::FGameplayTagContainer NMOIECCHIMB; // 0x48
	::System::Boolean ILFFFKPPKGG; // 0xB8
	::System::Boolean MGIDOIKGKOK; // 0xB9
	::System::Boolean MLIMCHEANEA; // 0xBA

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOCIGCANGFO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCIGCANGFO__CTOR_OFFSET))(this);
	}

	::System::Boolean EOIHJPBHJFE(::PPAAEGFGDNM*& PAAKENELHJL)
	{
		return ((::System::Boolean(*)(::PVOID, ::PPAAEGFGDNM*&))((::PBYTE)hIl2Cpp + DOCIGCANGFO_EOIHJPBHJFE_OFFSET))(this, PAAKENELHJL);
	}

	::System::Boolean OJJJKMLBCIB(::PPAAEGFGDNM* PAAKENELHJL)
	{
		return ((::System::Boolean(*)(::PVOID, ::PPAAEGFGDNM*))((::PBYTE)hIl2Cpp + DOCIGCANGFO_OJJJKMLBCIB_OFFSET))(this, PAAKENELHJL);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCIGCANGFO_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCIGCANGFO_GETCLASSID_OFFSET))(this);
	}

	::System::Void NGJBHIHJLCA(::Foundation::Unreal::FGameplayTagContainer NGFEFHPLMHK, ::System::Boolean MDDAPPNCCJJ)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer, ::System::Boolean))((::PBYTE)hIl2Cpp + DOCIGCANGFO_NGJBHIHJLCA_OFFSET))(this, NGFEFHPLMHK, MDDAPPNCCJJ);
	}

	::System::Void ADJNPIDCDNF(::Foundation::Unreal::FGameplayTagContainer NGFEFHPLMHK, ::System::Boolean MDDAPPNCCJJ)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer, ::System::Boolean))((::PBYTE)hIl2Cpp + DOCIGCANGFO_ADJNPIDCDNF_OFFSET))(this, NGFEFHPLMHK, MDDAPPNCCJJ);
	}

	::System::Boolean MCJGGBMPMKC(::Foundation::Unreal::FGameplayTag AELLPLBJELA, ::System::Boolean MDDAPPNCCJJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + DOCIGCANGFO_MCJGGBMPMKC_OFFSET))(this, AELLPLBJELA, MDDAPPNCCJJ);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCIGCANGFO_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Boolean HNFAPPAHNKF(::Foundation::Unreal::FGameplayTag AELLPLBJELA, ::System::Boolean MDDAPPNCCJJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + DOCIGCANGFO_HNFAPPAHNKF_OFFSET))(this, AELLPLBJELA, MDDAPPNCCJJ);
	}

	::System::Void CGPPDGKBBCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCIGCANGFO_CGPPDGKBBCF_OFFSET))(this);
	}

	::System::Void NDDMFDOOBLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCIGCANGFO_NDDMFDOOBLO_OFFSET))(this);
	}

	static ::DOCIGCANGFO* JFDOOELFAOA()
	{
		return ((::DOCIGCANGFO*(*)())((::PBYTE)hIl2Cpp + DOCIGCANGFO_JFDOOELFAOA_OFFSET))();
	}
};
