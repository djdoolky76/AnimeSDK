#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BubbleProgressColorType.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/MoleMole/Config/SpecialDamageTextType.h"
#include "unitysdk/Share/EHollowQuestType.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

class BDPPNOENHOJ;
class BubbleProgressColor;
class MLOIOKJDBIN;
namespace Foundation { class Assets_ConfigHashSetTrim; }
namespace Foundation { class ConfigDiffPatcher; }
namespace MoleMole { class AreaPositionConfig; }
namespace MoleMole { class ConfigDownloader; }
namespace MoleMole { class ConfigGeneralIconBadgeColor; }
namespace MoleMole { class DepositoryPageTabConfigs; }
namespace MoleMole { class ItemIconTweenConfig; }
namespace MoleMole { class NewConfigUICommon; }
namespace MoleMole { class UITokenShowConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define LMFBCPPPKCI_ABGKIAHPOIA_OFFSET UNITYSDK_OFFSET(0x158FA060)
#define LMFBCPPPKCI_AFLGHENKAHG_OFFSET UNITYSDK_OFFSET(0x158FD320)
#define LMFBCPPPKCI_BEDNFCBHBCM_OFFSET UNITYSDK_OFFSET(0x158F7C90)
#define LMFBCPPPKCI_BGOHIDCKBCI_OFFSET UNITYSDK_OFFSET(0x158FD090)
#define LMFBCPPPKCI_BKDPKKGPIEI_OFFSET UNITYSDK_OFFSET(0x158F8280)
#define LMFBCPPPKCI_BMENOLIPGID_OFFSET UNITYSDK_OFFSET(0x158FE690)
#define LMFBCPPPKCI_CDOHILPPNML_OFFSET UNITYSDK_OFFSET(0x158FF100)
#define LMFBCPPPKCI_CFLNADLNNPI_OFFSET UNITYSDK_OFFSET(0x158F7910)
#define LMFBCPPPKCI_CLCDEBBEOAN_OFFSET UNITYSDK_OFFSET(0x158F87C0)
#define LMFBCPPPKCI_CPNMOPGGLHJ_OFFSET UNITYSDK_OFFSET(0x158F8A30)
#define LMFBCPPPKCI_DBAJBPEEFLG_OFFSET UNITYSDK_OFFSET(0x158FB1A0)
#define LMFBCPPPKCI_DBJENOJMNNK_OFFSET UNITYSDK_OFFSET(0x158FCB10)
#define LMFBCPPPKCI_DHJMEGPIBEM_OFFSET UNITYSDK_OFFSET(0x158F70B0)
#define LMFBCPPPKCI_DMOKBKLLENL_OFFSET UNITYSDK_OFFSET(0x158FF510)
#define LMFBCPPPKCI_DNBGCNKFCHE_OFFSET UNITYSDK_OFFSET(0x158FBD60)
#define LMFBCPPPKCI_DNFGAMGGOOM_OFFSET UNITYSDK_OFFSET(0x158FB7A0)
#define LMFBCPPPKCI_EMGHMKPIOGN_OFFSET UNITYSDK_OFFSET(0x158F9420)
#define LMFBCPPPKCI_FIHEKIIMCDL_OFFSET UNITYSDK_OFFSET(0x158FC340)
#define LMFBCPPPKCI_GCLPPIECFPJ_OFFSET UNITYSDK_OFFSET(0x158FB010)
#define LMFBCPPPKCI_GNMHCCGDAEA_OFFSET UNITYSDK_OFFSET(0x158FC750)
#define LMFBCPPPKCI_GPDPAEBBBMO_OFFSET UNITYSDK_OFFSET(0x158FE360)
#define LMFBCPPPKCI_GPPMCGJHMAM_OFFSET UNITYSDK_OFFSET(0x158FDBC0)
#define LMFBCPPPKCI_HHEPPGJNMJK_OFFSET UNITYSDK_OFFSET(0x158F9190)
#define LMFBCPPPKCI_HMJLAOHKCNO_OFFSET UNITYSDK_OFFSET(0x158FC980)
#define LMFBCPPPKCI_HOMOOHBJNDE_OFFSET UNITYSDK_OFFSET(0x158F8C80)
#define LMFBCPPPKCI_IGCMGOOPOJJ_OFFSET UNITYSDK_OFFSET(0x158F9B00)
#define LMFBCPPPKCI_IJGMHLIHFHJ_OFFSET UNITYSDK_OFFSET(0x158FACB0)
#define LMFBCPPPKCI_IJNIEMHADHN_OFFSET UNITYSDK_OFFSET(0x158FA2E0)
#define LMFBCPPPKCI_IMDFEOINJFN_OFFSET UNITYSDK_OFFSET(0x158F8550)
#define LMFBCPPPKCI_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x158FE820)
#define LMFBCPPPKCI_JFNCBMBLMKE_OFFSET UNITYSDK_OFFSET(0x158FD330)
#define LMFBCPPPKCI_JGBJIBFADBD_OFFSET UNITYSDK_OFFSET(0x158FF6A0)
#define LMFBCPPPKCI_JHDPOOPKFJI_OFFSET UNITYSDK_OFFSET(0x158F98D0)
#define LMFBCPPPKCI_JJHFFCMIHOA_OFFSET UNITYSDK_OFFSET(0x158FA670)
#define LMFBCPPPKCI_JKJLMKFFFKH_OFFSET UNITYSDK_OFFSET(0x158FE930)
#define LMFBCPPPKCI_KJOLNKFPFPH_OFFSET UNITYSDK_OFFSET(0x158FAA30)
#define LMFBCPPPKCI_LBIONLBIFGF_OFFSET UNITYSDK_OFFSET(0x158FD0A0)
#define LMFBCPPPKCI_LCLMODELKCA_OFFSET UNITYSDK_OFFSET(0x158FD950)
#define LMFBCPPPKCI_LEMLGLBNCJA_OFFSET UNITYSDK_OFFSET(0x158FE8F0)
#define LMFBCPPPKCI_LKDHABNBLOC_OFFSET UNITYSDK_OFFSET(0x158FE250)
#define LMFBCPPPKCI_LKGCCIEAJJJ_OFFSET UNITYSDK_OFFSET(0x158FBB30)
#define LMFBCPPPKCI_MBMGPDAINHM_OFFSET UNITYSDK_OFFSET(0x158FF290)
#define LMFBCPPPKCI_MCJCCFNIOHF_OFFSET UNITYSDK_OFFSET(0x158F8F10)
#define LMFBCPPPKCI_MFILKCPKKBN_OFFSET UNITYSDK_OFFSET(0x158F7B80)
#define LMFBCPPPKCI_MICNFDPKHDC_OFFSET UNITYSDK_OFFSET(0x158F76C0)
#define LMFBCPPPKCI_MNHNHMBFGLO_OFFSET UNITYSDK_OFFSET(0x158FA800)
#define LMFBCPPPKCI_MNOOJKBDJLC_OFFSET UNITYSDK_OFFSET(0x158FB510)
#define LMFBCPPPKCI_NGALLLNFEPI_OFFSET UNITYSDK_OFFSET(0x158FEC60)
#define LMFBCPPPKCI_NGKNHFJAFMD_OFFSET UNITYSDK_OFFSET(0x158F7320)
#define LMFBCPPPKCI_NKBAJJFPCKH_OFFSET UNITYSDK_OFFSET(0x158FDE50)
#define LMFBCPPPKCI_NKGBJOOBAAO_OFFSET UNITYSDK_OFFSET(0x158FBFB0)
#define LMFBCPPPKCI_NOCLFFBCODJ_OFFSET UNITYSDK_OFFSET(0x158FD5B0)
#define LMFBCPPPKCI_OAGIJHOKGOC_1_OFFSET UNITYSDK_OFFSET(0x158FDFE0)
#define LMFBCPPPKCI_OAGIJHOKGOC_OFFSET UNITYSDK_OFFSET(0x158FCD30)
#define LMFBCPPPKCI_OBEMGJDDCPP_OFFSET UNITYSDK_OFFSET(0x158FF830)
#define LMFBCPPPKCI_POHGOFGBGFP_OFFSET UNITYSDK_OFFSET(0x158FEEE0)
#define LMFBCPPPKCI_PPDPFLMIMEG_OFFSET UNITYSDK_OFFSET(0x158F96A0)
#define LMFBCPPPKCI_PPIKPPBHDAL_OFFSET UNITYSDK_OFFSET(0x158F7F20)
#define LMFBCPPPKCI_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x158F7000)
#define LMFBCPPPKCI__CTOR_OFFSET UNITYSDK_OFFSET(0x158F6F10)

inline static constexpr unsigned int LMFBCPPPKCI_TypeDefinitionIndex = 76116;

class LMFBCPPPKCI
{
public:
	::MLOIOKJDBIN* _IDJHEGJCAJG_k__BackingField; // 0x28
	::BDPPNOENHOJ* _OLLJPAPMCPA_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::MoleMole::ConfigDownloader* DHJMEGPIBEM()
	{
		return ((::MoleMole::ConfigDownloader*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_DHJMEGPIBEM_OFFSET))(this);
	}

	::UnityEngine::Color NGKNHFJAFMD(::System::String* MCOHLHMKLIP)
	{
		return ((::UnityEngine::Color(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_NGKNHFJAFMD_OFFSET))(this, MCOHLHMKLIP);
	}

	::UnityEngine::Color MICNFDPKHDC(::System::String* OBNIAHNMHPF)
	{
		return ((::UnityEngine::Color(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_MICNFDPKHDC_OFFSET))(this, OBNIAHNMHPF);
	}

	::MoleMole::ItemIconTweenConfig* CFLNADLNNPI()
	{
		return ((::MoleMole::ItemIconTweenConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_CFLNADLNNPI_OFFSET))(this);
	}

	::MoleMole::NewConfigUICommon* MFILKCPKKBN()
	{
		return ((::MoleMole::NewConfigUICommon*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_MFILKCPKKBN_OFFSET))(this);
	}

	::System::Single BEDNFCBHBCM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_BEDNFCBHBCM_OFFSET))(this);
	}

	::System::Boolean PPIKPPBHDAL(::Foundation::AssetPath CJBJONJDOLI, ::Foundation::AssetPath& AEIHFBNNLBP)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetPath, ::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_PPIKPPBHDAL_OFFSET))(this, CJBJONJDOLI, AEIHFBNNLBP);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Int32> BKDPKKGPIEI()
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_BKDPKKGPIEI_OFFSET))(this);
	}

	::Foundation::Assets_ConfigHashSetTrim* IMDFEOINJFN()
	{
		return ((::Foundation::Assets_ConfigHashSetTrim*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_IMDFEOINJFN_OFFSET))(this);
	}

	::MoleMole::DepositoryPageTabConfigs* CLCDEBBEOAN()
	{
		return ((::MoleMole::DepositoryPageTabConfigs*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_CLCDEBBEOAN_OFFSET))(this);
	}

	::UnityEngine::Color CPNMOPGGLHJ(::System::Int32 OBNIAHNMHPF)
	{
		return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_CPNMOPGGLHJ_OFFSET))(this, OBNIAHNMHPF);
	}

	::System::Single HOMOOHBJNDE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_HOMOOHBJNDE_OFFSET))(this);
	}

	::System::Single MCJCCFNIOHF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_MCJCCFNIOHF_OFFSET))(this);
	}

	::System::Single HHEPPGJNMJK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_HHEPPGJNMJK_OFFSET))(this);
	}

	::UnityEngine::Color EMGHMKPIOGN()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_EMGHMKPIOGN_OFFSET))(this);
	}

	::System::String* PPDPFLMIMEG(::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_PPDPFLMIMEG_OFFSET))(this, MOBNMDEDJIP);
	}

	::System::String* JHDPOOPKFJI(::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_JHDPOOPKFJI_OFFSET))(this, MOBNMDEDJIP);
	}

	::UnityEngine::Color IGCMGOOPOJJ(::System::String* AJFAKLKHHGJ, ::System::Int32 MOBNMDEDJIP)
	{
		return ((::UnityEngine::Color(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_IGCMGOOPOJJ_OFFSET))(this, AJFAKLKHHGJ, MOBNMDEDJIP);
	}

	::UnityEngine::Color ABGKIAHPOIA()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_ABGKIAHPOIA_OFFSET))(this);
	}

	::System::Single IJNIEMHADHN(::MoleMole::Config::SpecialDamageTextType HNJCMEJKCNB)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Config::SpecialDamageTextType))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_IJNIEMHADHN_OFFSET))(this, HNJCMEJKCNB);
	}

	::System::Single JJHFFCMIHOA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_JJHFFCMIHOA_OFFSET))(this);
	}

	::UnityEngine::Vector2 MNHNHMBFGLO(::System::String* MCOHLHMKLIP)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_MNHNHMBFGLO_OFFSET))(this, MCOHLHMKLIP);
	}

	::UnityEngine::Color KJOLNKFPFPH()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_KJOLNKFPFPH_OFFSET))(this);
	}

	::MoleMole::AreaPositionConfig* IJGMHLIHFHJ(::System::Int32 JALKKPOGEHK)
	{
		return ((::MoleMole::AreaPositionConfig*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_IJGMHLIHFHJ_OFFSET))(this, JALKKPOGEHK);
	}

	::UnityEngine::AnimationCurve* GCLPPIECFPJ()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_GCLPPIECFPJ_OFFSET))(this);
	}

	::BubbleProgressColor* DBAJBPEEFLG(::BubbleProgressColorType OCLFHKMKDOL)
	{
		return ((::BubbleProgressColor*(*)(::PVOID, ::BubbleProgressColorType))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_DBAJBPEEFLG_OFFSET))(this, OCLFHKMKDOL);
	}

	::System::Single MNOOJKBDJLC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_MNOOJKBDJLC_OFFSET))(this);
	}

	::System::String* DNFGAMGGOOM(::System::Int32 EGOBOLCFHMO, ::System::Int32 PKMFBJMJCOO, ::System::Boolean OBNNFGDBNEC)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_DNFGAMGGOOM_OFFSET))(this, EGOBOLCFHMO, PKMFBJMJCOO, OBNNFGDBNEC);
	}

	::System::Collections::Generic::List_1<::MoleMole::UITokenShowConfig*>* LKGCCIEAJJJ(::System::String* JAFKJKEIHHI)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UITokenShowConfig*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_LKGCCIEAJJJ_OFFSET))(this, JAFKJKEIHHI);
	}

	::UnityEngine::Color DNBGCNKFCHE(::System::Int32 EGOBOLCFHMO)
	{
		return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_DNBGCNKFCHE_OFFSET))(this, EGOBOLCFHMO);
	}

	::System::Single NKGBJOOBAAO(::MoleMole::Config::SpecialDamageTextType HNJCMEJKCNB)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Config::SpecialDamageTextType))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_NKGBJOOBAAO_OFFSET))(this, HNJCMEJKCNB);
	}

	::UnityEngine::Color FIHEKIIMCDL(::System::Int32 HCKDKJHAOMF)
	{
		return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_FIHEKIIMCDL_OFFSET))(this, HCKDKJHAOMF);
	}

	::System::String* GNMHCCGDAEA(::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_GNMHCCGDAEA_OFFSET))(this, MOBNMDEDJIP);
	}

	::UnityEngine::AnimationCurve* HMJLAOHKCNO()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_HMJLAOHKCNO_OFFSET))(this);
	}

	::MoleMole::ConfigGeneralIconBadgeColor* DBJENOJMNNK(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MoleMole::ConfigGeneralIconBadgeColor*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_DBJENOJMNNK_OFFSET))(this, MGMDLMBEDJF);
	}

	::UnityEngine::Color OAGIJHOKGOC(::Share::EHollowQuestType OBNIAHNMHPF)
	{
		return ((::UnityEngine::Color(*)(::PVOID, ::Share::EHollowQuestType))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_OAGIJHOKGOC_OFFSET))(this, OBNIAHNMHPF);
	}

	::MLOIOKJDBIN* BGOHIDCKBCI()
	{
		return ((::MLOIOKJDBIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_BGOHIDCKBCI_OFFSET))(this);
	}

	::UnityEngine::Color LBIONLBIFGF()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_LBIONLBIFGF_OFFSET))(this);
	}

	::BDPPNOENHOJ* AFLGHENKAHG()
	{
		return ((::BDPPNOENHOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_AFLGHENKAHG_OFFSET))(this);
	}

	::UnityEngine::Color JFNCBMBLMKE()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_JFNCBMBLMKE_OFFSET))(this);
	}

	::System::String* NOCLFFBCODJ(::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_NOCLFFBCODJ_OFFSET))(this, MOBNMDEDJIP);
	}

	::Foundation::ConfigDiffPatcher* LCLMODELKCA()
	{
		return ((::Foundation::ConfigDiffPatcher*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_LCLMODELKCA_OFFSET))(this);
	}

	::System::Single GPPMCGJHMAM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_GPPMCGJHMAM_OFFSET))(this);
	}

	::System::Single NKBAJJFPCKH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_NKBAJJFPCKH_OFFSET))(this);
	}

	::System::String* OAGIJHOKGOC_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_OAGIJHOKGOC_1_OFFSET))(this);
	}

	::System::Void LKDHABNBLOC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_LKDHABNBLOC_OFFSET))(this);
	}

	::System::Int32 GPDPAEBBBMO(::System::Int32 POOJDDDCAHJ)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_GPDPAEBBBMO_OFFSET))(this, POOJDDDCAHJ);
	}

	::System::Single BMENOLIPGID()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_BMENOLIPGID_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Single LEMLGLBNCJA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_LEMLGLBNCJA_OFFSET))(this);
	}

	::System::Int32 JKJLMKFFFKH(::System::Int32 POOJDDDCAHJ)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_JKJLMKFFFKH_OFFSET))(this, POOJDDDCAHJ);
	}

	::UnityEngine::Color NGALLLNFEPI()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_NGALLLNFEPI_OFFSET))(this);
	}

	::System::Single POHGOFGBGFP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_POHGOFGBGFP_OFFSET))(this);
	}

	::System::Single CDOHILPPNML()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_CDOHILPPNML_OFFSET))(this);
	}

	::System::Single MBMGPDAINHM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_MBMGPDAINHM_OFFSET))(this);
	}

	::System::Single DMOKBKLLENL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_DMOKBKLLENL_OFFSET))(this);
	}

	::System::Single JGBJIBFADBD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_JGBJIBFADBD_OFFSET))(this);
	}

	::System::Single OBEMGJDDCPP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBCPPPKCI_OBEMGJDDCPP_OFFSET))(this);
	}
};
