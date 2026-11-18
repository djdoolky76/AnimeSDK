#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BubbleProgressColorType.h"
#include "unitysdk/MoleMole/Config/SpecialDamageTextType.h"
#include "unitysdk/Share/EHollowQuestType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

class BubbleProgressColor;
namespace Foundation { class Assets_ConfigHashSetTrim; }
namespace Foundation { class ConfigDiffPatcher; }
namespace MoleMole { class AreaPositionConfig; }
namespace MoleMole { class ConfigDownloader; }
namespace MoleMole { class ConfigGeneralIconBadgeColor; }
namespace MoleMole { class DepositoryPageTabConfigs; }
namespace MoleMole { class ItemIconTweenConfig; }
namespace MoleMole { class NewConfigUICommon; }
namespace MoleMole { class UITokenShowConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define KAHAIFPJBOO_ABGKIAHPOIA_OFFSET UNITYSDK_OFFSET(0x194883B0)
#define KAHAIFPJBOO_BEDNFCBHBCM_OFFSET UNITYSDK_OFFSET(0x1947F800)
#define KAHAIFPJBOO_BKDPKKGPIEI_OFFSET UNITYSDK_OFFSET(0x19488710)
#define KAHAIFPJBOO_BMENOLIPGID_OFFSET UNITYSDK_OFFSET(0x1947D210)
#define KAHAIFPJBOO_CDOHILPPNML_OFFSET UNITYSDK_OFFSET(0x1947F5B0)
#define KAHAIFPJBOO_CFLNADLNNPI_OFFSET UNITYSDK_OFFSET(0x194802F0)
#define KAHAIFPJBOO_CLCDEBBEOAN_OFFSET UNITYSDK_OFFSET(0x194810A0)
#define KAHAIFPJBOO_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x19480720)
#define KAHAIFPJBOO_CPNMOPGGLHJ_OFFSET UNITYSDK_OFFSET(0x19485DB0)
#define KAHAIFPJBOO_DBAJBPEEFLG_OFFSET UNITYSDK_OFFSET(0x19481D30)
#define KAHAIFPJBOO_DBJENOJMNNK_OFFSET UNITYSDK_OFFSET(0x19484700)
#define KAHAIFPJBOO_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x19480630)
#define KAHAIFPJBOO_DHJMEGPIBEM_OFFSET UNITYSDK_OFFSET(0x1947E420)
#define KAHAIFPJBOO_DIKOEPIPHOA_OFFSET UNITYSDK_OFFSET(0x1947E250)
#define KAHAIFPJBOO_DMOKBKLLENL_OFFSET UNITYSDK_OFFSET(0x19481630)
#define KAHAIFPJBOO_DNBGCNKFCHE_OFFSET UNITYSDK_OFFSET(0x19486D70)
#define KAHAIFPJBOO_DNFGAMGGOOM_OFFSET UNITYSDK_OFFSET(0x19483C30)
#define KAHAIFPJBOO_ECMGCLKGOND_OFFSET UNITYSDK_OFFSET(0x194851F0)
#define KAHAIFPJBOO_EMGHMKPIOGN_OFFSET UNITYSDK_OFFSET(0x19482AA0)
#define KAHAIFPJBOO_FIHEKIIMCDL_OFFSET UNITYSDK_OFFSET(0x19487E80)
#define KAHAIFPJBOO_GCLPPIECFPJ_OFFSET UNITYSDK_OFFSET(0x19485270)
#define KAHAIFPJBOO_GNMHCCGDAEA_OFFSET UNITYSDK_OFFSET(0x1947D890)
#define KAHAIFPJBOO_GPDPAEBBBMO_OFFSET UNITYSDK_OFFSET(0x1947D460)
#define KAHAIFPJBOO_GPPMCGJHMAM_OFFSET UNITYSDK_OFFSET(0x1947F250)
#define KAHAIFPJBOO_HHEPPGJNMJK_OFFSET UNITYSDK_OFFSET(0x19482E00)
#define KAHAIFPJBOO_HMJLAOHKCNO_OFFSET UNITYSDK_OFFSET(0x194813E0)
#define KAHAIFPJBOO_HOMOOHBJNDE_OFFSET UNITYSDK_OFFSET(0x194824F0)
#define KAHAIFPJBOO_IGCMGOOPOJJ_OFFSET UNITYSDK_OFFSET(0x19483160)
#define KAHAIFPJBOO_IJGMHLIHFHJ_OFFSET UNITYSDK_OFFSET(0x1947FB60)
#define KAHAIFPJBOO_IJNIEMHADHN_OFFSET UNITYSDK_OFFSET(0x194863E0)
#define KAHAIFPJBOO_IMDFEOINJFN_OFFSET UNITYSDK_OFFSET(0x1947FFB0)
#define KAHAIFPJBOO_JFNCBMBLMKE_OFFSET UNITYSDK_OFFSET(0x194840A0)
#define KAHAIFPJBOO_JGBJIBFADBD_OFFSET UNITYSDK_OFFSET(0x194854C0)
#define KAHAIFPJBOO_JHDPOOPKFJI_OFFSET UNITYSDK_OFFSET(0x19484400)
#define KAHAIFPJBOO_JJHFFCMIHOA_OFFSET UNITYSDK_OFFSET(0x19487C30)
#define KAHAIFPJBOO_JKJLMKFFFKH_OFFSET UNITYSDK_OFFSET(0x194870A0)
#define KAHAIFPJBOO_KJOLNKFPFPH_OFFSET UNITYSDK_OFFSET(0x19485710)
#define KAHAIFPJBOO_LBIONLBIFGF_OFFSET UNITYSDK_OFFSET(0x1947E760)
#define KAHAIFPJBOO_LCLMODELKCA_OFFSET UNITYSDK_OFFSET(0x19485A70)
#define KAHAIFPJBOO_LEMLGLBNCJA_OFFSET UNITYSDK_OFFSET(0x1947D010)
#define KAHAIFPJBOO_LKDHABNBLOC_OFFSET UNITYSDK_OFFSET(0x19484E50)
#define KAHAIFPJBOO_LKGCCIEAJJJ_OFFSET UNITYSDK_OFFSET(0x19487930)
#define KAHAIFPJBOO_MBMGPDAINHM_OFFSET UNITYSDK_OFFSET(0x19482190)
#define KAHAIFPJBOO_MCJCCFNIOHF_OFFSET UNITYSDK_OFFSET(0x19480D40)
#define KAHAIFPJBOO_MFILKCPKKBN_OFFSET UNITYSDK_OFFSET(0x19486860)
#define KAHAIFPJBOO_MICNFDPKHDC_OFFSET UNITYSDK_OFFSET(0x19486A40)
#define KAHAIFPJBOO_MNHNHMBFGLO_OFFSET UNITYSDK_OFFSET(0x194860E0)
#define KAHAIFPJBOO_MNOOJKBDJLC_OFFSET UNITYSDK_OFFSET(0x1947DB90)
#define KAHAIFPJBOO_NGALLLNFEPI_OFFSET UNITYSDK_OFFSET(0x1947DEF0)
#define KAHAIFPJBOO_NGKNHFJAFMD_OFFSET UNITYSDK_OFFSET(0x1947EDB0)
#define KAHAIFPJBOO_NKBAJJFPCKH_OFFSET UNITYSDK_OFFSET(0x19482850)
#define KAHAIFPJBOO_NKGBJOOBAAO_OFFSET UNITYSDK_OFFSET(0x194837B0)
#define KAHAIFPJBOO_NOCLFFBCODJ_OFFSET UNITYSDK_OFFSET(0x19481880)
#define KAHAIFPJBOO_OAGIJHOKGOC_1_OFFSET UNITYSDK_OFFSET(0x194874D0)
#define KAHAIFPJBOO_OAGIJHOKGOC_OFFSET UNITYSDK_OFFSET(0x1947CCC0)
#define KAHAIFPJBOO_OBEMGJDDCPP_OFFSET UNITYSDK_OFFSET(0x1947C960)
#define KAHAIFPJBOO_POHGOFGBGFP_OFFSET UNITYSDK_OFFSET(0x1947EAC0)
#define KAHAIFPJBOO_PPDPFLMIMEG_OFFSET UNITYSDK_OFFSET(0x19480A40)
#define KAHAIFPJBOO_PPIKPPBHDAL_OFFSET UNITYSDK_OFFSET(0x194849F0)

inline static constexpr unsigned int KAHAIFPJBOO_TypeDefinitionIndex = 54423;

class KAHAIFPJBOO : public ::System::Object
{
public:
	static ::MoleMole::NewConfigUICommon** StaticGet_LAGOEKJMLMI()
	{
		return (::MoleMole::NewConfigUICommon**)Il2CppClass::FromTypeDefinitionIndex(KAHAIFPJBOO_TypeDefinitionIndex)->GetStaticField(0x38120);
	}

	static ::System::Single OBEMGJDDCPP()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + KAHAIFPJBOO_OBEMGJDDCPP_OFFSET))();
	}

	static ::System::String* OAGIJHOKGOC()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + KAHAIFPJBOO_OAGIJHOKGOC_OFFSET))();
	}

	static ::System::Single LEMLGLBNCJA()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + KAHAIFPJBOO_LEMLGLBNCJA_OFFSET))();
	}

	static ::System::Single BMENOLIPGID()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + KAHAIFPJBOO_BMENOLIPGID_OFFSET))();
	}

	static ::System::Int32 GPDPAEBBBMO(::System::Int32 POOJDDDCAHJ)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + KAHAIFPJBOO_GPDPAEBBBMO_OFFSET))(POOJDDDCAHJ);
	}

	static ::System::String* GNMHCCGDAEA(::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + KAHAIFPJBOO_GNMHCCGDAEA_OFFSET))(MOBNMDEDJIP);
	}

	static ::System::Single MNOOJKBDJLC()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + KAHAIFPJBOO_MNOOJKBDJLC_OFFSET))();
	}

	static ::UnityEngine::Color NGALLLNFEPI()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + KAHAIFPJBOO_NGALLLNFEPI_OFFSET))();
	}

	static ::System::Void DIKOEPIPHOA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAHAIFPJBOO_DIKOEPIPHOA_OFFSET))();
	}

	static ::MoleMole::ConfigDownloader* DHJMEGPIBEM()
	{
		return ((::MoleMole::ConfigDownloader*(*)())((::PBYTE)hIl2Cpp + KAHAIFPJBOO_DHJMEGPIBEM_OFFSET))();
	}

	static ::UnityEngine::Color LBIONLBIFGF()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + KAHAIFPJBOO_LBIONLBIFGF_OFFSET))();
	}

	static ::System::Single POHGOFGBGFP()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + KAHAIFPJBOO_POHGOFGBGFP_OFFSET))();
	}

	static ::UnityEngine::Color NGKNHFJAFMD(::System::String* MCOHLHMKLIP)
	{
		return ((::UnityEngine::Color(*)(::System::String*))((::PBYTE)hIl2Cpp + KAHAIFPJBOO_NGKNHFJAFMD_OFFSET))(MCOHLHMKLIP);
	}

	static ::System::Single GPPMCGJHMAM()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + KAHAIFPJBOO_GPPMCGJHMAM_OFFSET))();
	}

	static ::System::Single CDOHILPPNML()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + KAHAIFPJBOO_CDOHILPPNML_OFFSET))();
	}

	static ::System::Single BEDNFCBHBCM()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + KAHAIFPJBOO_BEDNFCBHBCM_OFFSET))();
	}

	static ::MoleMole::AreaPositionConfig* IJGMHLIHFHJ(::System::Int32 JALKKPOGEHK)
	{
		return ((::MoleMole::AreaPositionConfig*(*)(::System::Int32))((::PBYTE)hIl2Cpp + KAHAIFPJBOO_IJGMHLIHFHJ_OFFSET))(JALKKPOGEHK);
	}

	static ::Foundation::Assets_ConfigHashSetTrim* IMDFEOINJFN()
	{
		return ((::Foundation::Assets_ConfigHashSetTrim*(*)())((::PBYTE)hIl2Cpp + KAHAIFPJBOO_IMDFEOINJFN_OFFSET))();
	}

	static ::MoleMole::ItemIconTweenConfig* CFLNADLNNPI()
	{
		return ((::MoleMole::ItemIconTweenConfig*(*)())((::PBYTE)hIl2Cpp + KAHAIFPJBOO_CFLNADLNNPI_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + KAHAIFPJBOO_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::String* PPDPFLMIMEG(::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + KAHAIFPJBOO_PPDPFLMIMEG_OFFSET))(MOBNMDEDJIP);
	}

	static ::System::Single MCJCCFNIOHF()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + KAHAIFPJBOO_MCJCCFNIOHF_OFFSET))();
	}

	static ::MoleMole::DepositoryPageTabConfigs* CLCDEBBEOAN()
	{
		return ((::MoleMole::DepositoryPageTabConfigs*(*)())((::PBYTE)hIl2Cpp + KAHAIFPJBOO_CLCDEBBEOAN_OFFSET))();
	}

	static ::UnityEngine::AnimationCurve* HMJLAOHKCNO()
	{
		return ((::UnityEngine::AnimationCurve*(*)())((::PBYTE)hIl2Cpp + KAHAIFPJBOO_HMJLAOHKCNO_OFFSET))();
	}

	static ::System::Single DMOKBKLLENL()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + KAHAIFPJBOO_DMOKBKLLENL_OFFSET))();
	}

	static ::System::String* NOCLFFBCODJ(::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + KAHAIFPJBOO_NOCLFFBCODJ_OFFSET))(MOBNMDEDJIP);
	}

	static ::BubbleProgressColor* DBAJBPEEFLG(::BubbleProgressColorType OCLFHKMKDOL)
	{
		return ((::BubbleProgressColor*(*)(::BubbleProgressColorType))((::PBYTE)hIl2Cpp + KAHAIFPJBOO_DBAJBPEEFLG_OFFSET))(OCLFHKMKDOL);
	}

	static ::System::Single MBMGPDAINHM()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + KAHAIFPJBOO_MBMGPDAINHM_OFFSET))();
	}

	static ::System::Single HOMOOHBJNDE()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + KAHAIFPJBOO_HOMOOHBJNDE_OFFSET))();
	}

	static ::System::Single NKBAJJFPCKH()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + KAHAIFPJBOO_NKBAJJFPCKH_OFFSET))();
	}

	static ::UnityEngine::Color EMGHMKPIOGN()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + KAHAIFPJBOO_EMGHMKPIOGN_OFFSET))();
	}

	static ::System::Single HHEPPGJNMJK()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + KAHAIFPJBOO_HHEPPGJNMJK_OFFSET))();
	}

	static ::UnityEngine::Color IGCMGOOPOJJ(::System::String* AJFAKLKHHGJ, ::System::Int32 MOBNMDEDJIP)
	{
		return ((::UnityEngine::Color(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + KAHAIFPJBOO_IGCMGOOPOJJ_OFFSET))(AJFAKLKHHGJ, MOBNMDEDJIP);
	}

	static ::System::Single NKGBJOOBAAO(::MoleMole::Config::SpecialDamageTextType HNJCMEJKCNB)
	{
		return ((::System::Single(*)(::MoleMole::Config::SpecialDamageTextType))((::PBYTE)hIl2Cpp + KAHAIFPJBOO_NKGBJOOBAAO_OFFSET))(HNJCMEJKCNB);
	}

	static ::System::String* DNFGAMGGOOM(::System::Int32 EGOBOLCFHMO, ::System::Int32 PKMFBJMJCOO, ::System::Boolean OBNNFGDBNEC)
	{
		return ((::System::String*(*)(::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + KAHAIFPJBOO_DNFGAMGGOOM_OFFSET))(EGOBOLCFHMO, PKMFBJMJCOO, OBNNFGDBNEC);
	}

	static ::UnityEngine::Color JFNCBMBLMKE()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + KAHAIFPJBOO_JFNCBMBLMKE_OFFSET))();
	}

	static ::System::String* JHDPOOPKFJI(::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + KAHAIFPJBOO_JHDPOOPKFJI_OFFSET))(MOBNMDEDJIP);
	}

	static ::MoleMole::ConfigGeneralIconBadgeColor* DBJENOJMNNK(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MoleMole::ConfigGeneralIconBadgeColor*(*)(::System::Int32))((::PBYTE)hIl2Cpp + KAHAIFPJBOO_DBJENOJMNNK_OFFSET))(MGMDLMBEDJF);
	}

	static ::System::Boolean PPIKPPBHDAL(::Foundation::AssetPath CJBJONJDOLI, ::Foundation::AssetPath& AEIHFBNNLBP)
	{
		return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + KAHAIFPJBOO_PPIKPPBHDAL_OFFSET))(CJBJONJDOLI, AEIHFBNNLBP);
	}

	static ::System::Void LKDHABNBLOC(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + KAHAIFPJBOO_LKDHABNBLOC_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::String* ECMGCLKGOND(::System::Int32 EGOBOLCFHMO)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + KAHAIFPJBOO_ECMGCLKGOND_OFFSET))(EGOBOLCFHMO);
	}

	static ::UnityEngine::AnimationCurve* GCLPPIECFPJ()
	{
		return ((::UnityEngine::AnimationCurve*(*)())((::PBYTE)hIl2Cpp + KAHAIFPJBOO_GCLPPIECFPJ_OFFSET))();
	}

	static ::System::Single JGBJIBFADBD()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + KAHAIFPJBOO_JGBJIBFADBD_OFFSET))();
	}

	static ::UnityEngine::Color KJOLNKFPFPH()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + KAHAIFPJBOO_KJOLNKFPFPH_OFFSET))();
	}

	static ::Foundation::ConfigDiffPatcher* LCLMODELKCA()
	{
		return ((::Foundation::ConfigDiffPatcher*(*)())((::PBYTE)hIl2Cpp + KAHAIFPJBOO_LCLMODELKCA_OFFSET))();
	}

	static ::UnityEngine::Color CPNMOPGGLHJ(::System::Int32 OBNIAHNMHPF)
	{
		return ((::UnityEngine::Color(*)(::System::Int32))((::PBYTE)hIl2Cpp + KAHAIFPJBOO_CPNMOPGGLHJ_OFFSET))(OBNIAHNMHPF);
	}

	static ::UnityEngine::Vector2 MNHNHMBFGLO(::System::String* MCOHLHMKLIP)
	{
		return ((::UnityEngine::Vector2(*)(::System::String*))((::PBYTE)hIl2Cpp + KAHAIFPJBOO_MNHNHMBFGLO_OFFSET))(MCOHLHMKLIP);
	}

	static ::System::Single IJNIEMHADHN(::MoleMole::Config::SpecialDamageTextType HNJCMEJKCNB)
	{
		return ((::System::Single(*)(::MoleMole::Config::SpecialDamageTextType))((::PBYTE)hIl2Cpp + KAHAIFPJBOO_IJNIEMHADHN_OFFSET))(HNJCMEJKCNB);
	}

	static ::MoleMole::NewConfigUICommon* MFILKCPKKBN()
	{
		return ((::MoleMole::NewConfigUICommon*(*)())((::PBYTE)hIl2Cpp + KAHAIFPJBOO_MFILKCPKKBN_OFFSET))();
	}

	static ::UnityEngine::Color MICNFDPKHDC(::System::String* OBNIAHNMHPF)
	{
		return ((::UnityEngine::Color(*)(::System::String*))((::PBYTE)hIl2Cpp + KAHAIFPJBOO_MICNFDPKHDC_OFFSET))(OBNIAHNMHPF);
	}

	static ::UnityEngine::Color DNBGCNKFCHE(::System::Int32 EGOBOLCFHMO)
	{
		return ((::UnityEngine::Color(*)(::System::Int32))((::PBYTE)hIl2Cpp + KAHAIFPJBOO_DNBGCNKFCHE_OFFSET))(EGOBOLCFHMO);
	}

	static ::System::Int32 JKJLMKFFFKH(::System::Int32 POOJDDDCAHJ)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + KAHAIFPJBOO_JKJLMKFFFKH_OFFSET))(POOJDDDCAHJ);
	}

	static ::UnityEngine::Color OAGIJHOKGOC_1(::Share::EHollowQuestType OBNIAHNMHPF)
	{
		return ((::UnityEngine::Color(*)(::Share::EHollowQuestType))((::PBYTE)hIl2Cpp + KAHAIFPJBOO_OAGIJHOKGOC_1_OFFSET))(OBNIAHNMHPF);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::UITokenShowConfig*>* LKGCCIEAJJJ(::System::String* JAFKJKEIHHI)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UITokenShowConfig*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + KAHAIFPJBOO_LKGCCIEAJJJ_OFFSET))(JAFKJKEIHHI);
	}

	static ::System::Single JJHFFCMIHOA()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + KAHAIFPJBOO_JJHFFCMIHOA_OFFSET))();
	}

	static ::UnityEngine::Color FIHEKIIMCDL(::System::Int32 HCKDKJHAOMF)
	{
		return ((::UnityEngine::Color(*)(::System::Int32))((::PBYTE)hIl2Cpp + KAHAIFPJBOO_FIHEKIIMCDL_OFFSET))(HCKDKJHAOMF);
	}

	static ::UnityEngine::Color ABGKIAHPOIA()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + KAHAIFPJBOO_ABGKIAHPOIA_OFFSET))();
	}

	static ::System::ValueTuple_2<::System::Int32, ::System::Int32> BKDPKKGPIEI()
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)())((::PBYTE)hIl2Cpp + KAHAIFPJBOO_BKDPKKGPIEI_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + KAHAIFPJBOO_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}
};
