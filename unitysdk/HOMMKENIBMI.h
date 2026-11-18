#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/GuidePoint_AutoGenStrategy.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/UnityEngine/Vector3.h"

class IIMHFNMMBEA;
class JBMJAGGDPGC;
namespace MoleMole { class UIInLevelGuideChildWindowController; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOMMKENIBMI_ALNGAKEGJCF_1_OFFSET UNITYSDK_OFFSET(0x16D03E20)
#define HOMMKENIBMI_ALNGAKEGJCF_OFFSET UNITYSDK_OFFSET(0x16D01CC0)
#define HOMMKENIBMI_AOEBNCPGBEI_OFFSET UNITYSDK_OFFSET(0x16D02220)
#define HOMMKENIBMI_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x16D04A40)
#define HOMMKENIBMI_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x16D04440)
#define HOMMKENIBMI_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x16D01110)
#define HOMMKENIBMI_DIFPAIBMFDE_OFFSET UNITYSDK_OFFSET(0x16D016C0)
#define HOMMKENIBMI_DMJKOGHGAMH_OFFSET UNITYSDK_OFFSET(0x16D03720)
#define HOMMKENIBMI_DOMFPCNFIKC_OFFSET UNITYSDK_OFFSET(0x16D04BF0)
#define HOMMKENIBMI_EMLFNDEJBKN_OFFSET UNITYSDK_OFFSET(0x16D045C0)
#define HOMMKENIBMI_FNEOLHGEPIG_OFFSET UNITYSDK_OFFSET(0x16D046C0)
#define HOMMKENIBMI_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x16D02BF0)
#define HOMMKENIBMI_IBAPMCMCGFG_OFFSET UNITYSDK_OFFSET(0x16D044D0)
#define HOMMKENIBMI_ILHEBNKFJPK_OFFSET UNITYSDK_OFFSET(0x16D03530)
#define HOMMKENIBMI_JHEHJNKDOMG_OFFSET UNITYSDK_OFFSET(0x16D03E90)
#define HOMMKENIBMI_JPMEPJHBKBF_OFFSET UNITYSDK_OFFSET(0x16D03850)
#define HOMMKENIBMI_KLGIIKALHAF_OFFSET UNITYSDK_OFFSET(0x16D02DC0)
#define HOMMKENIBMI_KPHNGEDKGGN_OFFSET UNITYSDK_OFFSET(0x16D03F90)
#define HOMMKENIBMI_MABKNPJLENN_OFFSET UNITYSDK_OFFSET(0x16D03950)
#define HOMMKENIBMI_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x16D04D50)
#define HOMMKENIBMI_NOIFEDLMFGG_OFFSET UNITYSDK_OFFSET(0x16D02F30)
#define HOMMKENIBMI_NOOJCAEIBKE_1_OFFSET UNITYSDK_OFFSET(0x16D026E0)
#define HOMMKENIBMI_NOOJCAEIBKE_OFFSET UNITYSDK_OFFSET(0x16D02640)
#define HOMMKENIBMI_OOAMLLGPJCH_1_OFFSET UNITYSDK_OFFSET(0x16D01580)
#define HOMMKENIBMI_OOAMLLGPJCH_OFFSET UNITYSDK_OFFSET(0x16D014E0)
#define HOMMKENIBMI_OPAFIKCOBGH_OFFSET UNITYSDK_OFFSET(0x16D041B0)
#define HOMMKENIBMI_PADAGMFALEM_OFFSET UNITYSDK_OFFSET(0x16D01AF0)
#define HOMMKENIBMI_PGGCHLBJIKI_OFFSET UNITYSDK_OFFSET(0x16D02F70)
#define HOMMKENIBMI_PHJLKKBFCFA_OFFSET UNITYSDK_OFFSET(0x16D01990)
#define HOMMKENIBMI_UPDATE_OFFSET UNITYSDK_OFFSET(0x16D01310)
#define HOMMKENIBMI__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D014D0)
#define HOMMKENIBMI__CTOR_OFFSET UNITYSDK_OFFSET(0x16D01480)

inline static constexpr unsigned int HOMMKENIBMI_TypeDefinitionIndex = 60015;

class HOMMKENIBMI : public ::OAOOLPCNHKA
{
public:
	static ::MoleMole::UIInLevelGuideChildWindowController** StaticGet_GALMLMJMLMH()
	{
		return (::MoleMole::UIInLevelGuideChildWindowController**)Il2CppClass::FromTypeDefinitionIndex(HOMMKENIBMI_TypeDefinitionIndex)->GetStaticField(0x37BE0);
	}
	static ::MoleMole::Config::GuidePoint_AutoGenStrategy* StaticGet_PIBBHNMPBKK()
	{
		return (::MoleMole::Config::GuidePoint_AutoGenStrategy*)Il2CppClass::FromTypeDefinitionIndex(HOMMKENIBMI_TypeDefinitionIndex)->GetStaticField(0x37BE8);
	}
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMMKENIBMI__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOMMKENIBMI__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + HOMMKENIBMI_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMMKENIBMI_UPDATE_OFFSET))(this);
	}

	static ::System::Void OOAMLLGPJCH(::System::String* MBLOLPGDHEM)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HOMMKENIBMI_OOAMLLGPJCH_OFFSET))(MBLOLPGDHEM);
	}

	static ::System::Int32 DIFPAIBMFDE(::JBMJAGGDPGC* JCNBNNJDKJD, ::System::String* EBCCPPJHLND, ::System::String* HFKIDEMMMBN)
	{
		return ((::System::Int32(*)(::JBMJAGGDPGC*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOMMKENIBMI_DIFPAIBMFDE_OFFSET))(JCNBNNJDKJD, EBCCPPJHLND, HFKIDEMMMBN);
	}

	static ::System::Void PHJLKKBFCFA(::JBMJAGGDPGC* FKONMAFIOHA)
	{
		return ((::System::Void(*)(::JBMJAGGDPGC*))((::PBYTE)hIl2Cpp + HOMMKENIBMI_PHJLKKBFCFA_OFFSET))(FKONMAFIOHA);
	}

	static ::System::Void ALNGAKEGJCF(::System::Collections::Generic::List_1<::System::String*>* IBGBKPADGJO, ::System::Int32 NOGGAPFJGJI, ::System::Int32 DOBFFIICAII, ::System::Collections::Generic::Dictionary_2<::System::String*, ::IIMHFNMMBEA*>* PHAHCENMHGL)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::IIMHFNMMBEA*>*))((::PBYTE)hIl2Cpp + HOMMKENIBMI_ALNGAKEGJCF_OFFSET))(IBGBKPADGJO, NOGGAPFJGJI, DOBFFIICAII, PHAHCENMHGL);
	}

	static ::System::Void AOEBNCPGBEI(::JBMJAGGDPGC* IKFEFDLCHGN)
	{
		return ((::System::Void(*)(::JBMJAGGDPGC*))((::PBYTE)hIl2Cpp + HOMMKENIBMI_AOEBNCPGBEI_OFFSET))(IKFEFDLCHGN);
	}

	static ::System::Void NOOJCAEIBKE(::UnityEngine::Vector3 GKOEEJHILPG, ::JBMJAGGDPGC* JCNBNNJDKJD)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::JBMJAGGDPGC*))((::PBYTE)hIl2Cpp + HOMMKENIBMI_NOOJCAEIBKE_OFFSET))(GKOEEJHILPG, JCNBNNJDKJD);
	}

	static ::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HOMMKENIBMI_HMLGKBFFNHI_OFFSET))(BKLGNCBNEGM);
	}

	static ::UnityEngine::Vector3 PGGCHLBJIKI(::JBMJAGGDPGC* FKONMAFIOHA, ::UnityEngine::Vector3 AKAGDEFAGJA)
	{
		return ((::UnityEngine::Vector3(*)(::JBMJAGGDPGC*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HOMMKENIBMI_PGGCHLBJIKI_OFFSET))(FKONMAFIOHA, AKAGDEFAGJA);
	}

	static ::System::Void KLGIIKALHAF(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HOMMKENIBMI_KLGIIKALHAF_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void DMJKOGHGAMH(::JBMJAGGDPGC* FKONMAFIOHA, ::System::String* MCOHLHMKLIP, ::System::Boolean JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::JBMJAGGDPGC*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOMMKENIBMI_DMJKOGHGAMH_OFFSET))(FKONMAFIOHA, MCOHLHMKLIP, JKBLDFBGBPK);
	}

	static ::System::Int32 JPMEPJHBKBF(::JBMJAGGDPGC* JCNBNNJDKJD, ::System::String* EBCCPPJHLND, ::System::String* HFKIDEMMMBN)
	{
		return ((::System::Int32(*)(::JBMJAGGDPGC*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOMMKENIBMI_JPMEPJHBKBF_OFFSET))(JCNBNNJDKJD, EBCCPPJHLND, HFKIDEMMMBN);
	}

	static ::System::Void MABKNPJLENN(::JBMJAGGDPGC* NPLINKPKJON)
	{
		return ((::System::Void(*)(::JBMJAGGDPGC*))((::PBYTE)hIl2Cpp + HOMMKENIBMI_MABKNPJLENN_OFFSET))(NPLINKPKJON);
	}

	static ::System::Void ALNGAKEGJCF_1(::JBMJAGGDPGC* JCNBNNJDKJD)
	{
		return ((::System::Void(*)(::JBMJAGGDPGC*))((::PBYTE)hIl2Cpp + HOMMKENIBMI_ALNGAKEGJCF_1_OFFSET))(JCNBNNJDKJD);
	}

	static ::System::Boolean JHEHJNKDOMG(::JBMJAGGDPGC* FKONMAFIOHA)
	{
		return ((::System::Boolean(*)(::JBMJAGGDPGC*))((::PBYTE)hIl2Cpp + HOMMKENIBMI_JHEHJNKDOMG_OFFSET))(FKONMAFIOHA);
	}

	static ::IIMHFNMMBEA* KPHNGEDKGGN(::JBMJAGGDPGC* FKONMAFIOHA, ::System::String* MCOHLHMKLIP, ::UnityEngine::Vector3 CKPGOKHECCH, ::System::Single HLMLFHCLIGL, ::System::Boolean LKDCFIOKGEO, ::System::UInt32 DKBGLBIECBN)
	{
		return ((::IIMHFNMMBEA*(*)(::JBMJAGGDPGC*, ::System::String*, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + HOMMKENIBMI_KPHNGEDKGGN_OFFSET))(FKONMAFIOHA, MCOHLHMKLIP, CKPGOKHECCH, HLMLFHCLIGL, LKDCFIOKGEO, DKBGLBIECBN);
	}

	static ::System::Void NOIFEDLMFGG()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOMMKENIBMI_NOIFEDLMFGG_OFFSET))();
	}

	static ::System::Void NOOJCAEIBKE_1(::UnityEngine::Vector3 FBEFMNHLEHO, ::System::Collections::Generic::List_1<::System::String*>* IBGBKPADGJO, ::System::Int32 NOGGAPFJGJI, ::System::Int32 DOBFFIICAII, ::System::Collections::Generic::Dictionary_2<::System::String*, ::IIMHFNMMBEA*>* PHAHCENMHGL)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::IIMHFNMMBEA*>*))((::PBYTE)hIl2Cpp + HOMMKENIBMI_NOOJCAEIBKE_1_OFFSET))(FBEFMNHLEHO, IBGBKPADGJO, NOGGAPFJGJI, DOBFFIICAII, PHAHCENMHGL);
	}

	static ::UnityEngine::Vector3 OPAFIKCOBGH(::JBMJAGGDPGC* FKONMAFIOHA, ::UnityEngine::Vector3 AKAGDEFAGJA)
	{
		return ((::UnityEngine::Vector3(*)(::JBMJAGGDPGC*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HOMMKENIBMI_OPAFIKCOBGH_OFFSET))(FKONMAFIOHA, AKAGDEFAGJA);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMMKENIBMI_CMFOMGGDPPA_OFFSET))(this);
	}

	static ::System::Void IBAPMCMCGFG(::JBMJAGGDPGC* FKONMAFIOHA, ::System::Boolean JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::JBMJAGGDPGC*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOMMKENIBMI_IBAPMCMCGFG_OFFSET))(FKONMAFIOHA, JKBLDFBGBPK);
	}

	static ::System::String* EMLFNDEJBKN(::JBMJAGGDPGC* FKONMAFIOHA)
	{
		return ((::System::String*(*)(::JBMJAGGDPGC*))((::PBYTE)hIl2Cpp + HOMMKENIBMI_EMLFNDEJBKN_OFFSET))(FKONMAFIOHA);
	}

	static ::System::Void FNEOLHGEPIG(::JBMJAGGDPGC* JCNBNNJDKJD, ::System::Collections::Generic::List_1<::System::String*>* NDKMFFFJHCO)
	{
		return ((::System::Void(*)(::JBMJAGGDPGC*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + HOMMKENIBMI_FNEOLHGEPIG_OFFSET))(JCNBNNJDKJD, NDKMFFFJHCO);
	}

	static ::System::Void PADAGMFALEM(::JBMJAGGDPGC* NPLINKPKJON, ::System::String* MCOHLHMKLIP, ::System::Boolean JIPDCEPFHCG, ::System::Boolean FKKFMCIJGJC)
	{
		return ((::System::Void(*)(::JBMJAGGDPGC*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOMMKENIBMI_PADAGMFALEM_OFFSET))(NPLINKPKJON, MCOHLHMKLIP, JIPDCEPFHCG, FKKFMCIJGJC);
	}

	static ::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + HOMMKENIBMI_APAGIJMHEAK_OFFSET))(MNGHGOLKKNO);
	}

	static ::UnityEngine::Vector3 DOMFPCNFIKC(::JBMJAGGDPGC* FKONMAFIOHA, ::System::String* MCOHLHMKLIP)
	{
		return ((::UnityEngine::Vector3(*)(::JBMJAGGDPGC*, ::System::String*))((::PBYTE)hIl2Cpp + HOMMKENIBMI_DOMFPCNFIKC_OFFSET))(FKONMAFIOHA, MCOHLHMKLIP);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + HOMMKENIBMI_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void ILHEBNKFJPK(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HOMMKENIBMI_ILHEBNKFJPK_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void OOAMLLGPJCH_1(::JBMJAGGDPGC* FKONMAFIOHA, ::System::String* MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::JBMJAGGDPGC*, ::System::String*))((::PBYTE)hIl2Cpp + HOMMKENIBMI_OOAMLLGPJCH_1_OFFSET))(FKONMAFIOHA, MCOHLHMKLIP);
	}
};
