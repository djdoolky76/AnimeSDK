#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFEOGBPMBFB.h"
#include "unitysdk/KLEFGGIHGMI_RegionBlockVisibilityStatusPriority.h"
#include "unitysdk/RPG/Client/ContributionOwner.h"
#include "unitysdk/RPG/Client/PauseRegionManagerReason.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/RPG/GameCore/RegionBlockVisibilityStatus.h"
#include "unitysdk/RPG/GameCore/StageRegionActiveState.h"
#include "unitysdk/RPG/GameCore/StageRegionVisualState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EMIOLHAIOIG.h"
#include "unitysdk/FPJDAJBKDMN.h"
#include "unitysdk/GLAJJDPBHLL.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"
class APLEMBNFLAA;
class JJECNLGDFMP;
class KGDADKNPPOL;
class KLEFGGIHGMI;
class OGBCFPAJBMN;
class PKKNEBGOION;
class PKKNEBGOION_AKOPAHKBDJN;
class PKKNEBGOION_COKPEGBODLD;
class PKKNEBGOION_FJDKPAGMCLM;
namespace RPG::Client { class RegionManagerDebugMono; }
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StageRegionCollection; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define PKKNEBGOION_AAMHKBPEHFH_OFFSET UNITYSDK_OFFSET(0xCBF33E0)
#define PKKNEBGOION_ABFGJMONOLI_OFFSET UNITYSDK_OFFSET(0xCBF7050)
#define PKKNEBGOION_ACFHBHEBHFP_OFFSET UNITYSDK_OFFSET(0xCBF0350)
#define PKKNEBGOION_AEJBHEBOGEM_OFFSET UNITYSDK_OFFSET(0xCBFAE70)
#define PKKNEBGOION_AGKGHHKNOGJ_OFFSET UNITYSDK_OFFSET(0xCBF7960)
#define PKKNEBGOION_AHEEAOFELEF_OFFSET UNITYSDK_OFFSET(0xCBF55F0)
#define PKKNEBGOION_AJBKOOCNJLG_OFFSET UNITYSDK_OFFSET(0xCBEFE90)
#define PKKNEBGOION_AJKFNHDAGCC_OFFSET UNITYSDK_OFFSET(0xCBF06F0)
#define PKKNEBGOION_AMKBLNGHGOD_OFFSET UNITYSDK_OFFSET(0xCBF0A20)
#define PKKNEBGOION_ANBLOBLKAJB_OFFSET UNITYSDK_OFFSET(0xCBFBE90)
#define PKKNEBGOION_BDNEGMIMPND_OFFSET UNITYSDK_OFFSET(0xCBF1470)
#define PKKNEBGOION_BFAPPGBDIIH_OFFSET UNITYSDK_OFFSET(0xCBFC0E0)
#define PKKNEBGOION_BJCHAENIHKJ_OFFSET UNITYSDK_OFFSET(0xCBF38D0)
#define PKKNEBGOION_BKGEOMAJANM_OFFSET UNITYSDK_OFFSET(0xCBFCB40)
#define PKKNEBGOION_CBOOOBBKBDE_OFFSET UNITYSDK_OFFSET(0xCBF79B0)
#define PKKNEBGOION_CCTOR_OFFSET UNITYSDK_OFFSET(0xCBFE280)
#define PKKNEBGOION_CJPDKBMKGOF_OFFSET UNITYSDK_OFFSET(0xCBF3C30)
#define PKKNEBGOION_CMGKACCNHNL_OFFSET UNITYSDK_OFFSET(0xCBF9CF0)
#define PKKNEBGOION_CMMDOKACKKJ_OFFSET UNITYSDK_OFFSET(0xCBFDD60)
#define PKKNEBGOION_CTOR_OFFSET UNITYSDK_OFFSET(0xCBF7BD0)
#define PKKNEBGOION_DCMODGGDMAL_OFFSET UNITYSDK_OFFSET(0xCBF7910)
#define PKKNEBGOION_DENGOJAHJEP_OFFSET UNITYSDK_OFFSET(0xCBF5D70)
#define PKKNEBGOION_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xCBFA870)
#define PKKNEBGOION_DIDFDFGNJMI_OFFSET UNITYSDK_OFFSET(0xCBF49F0)
#define PKKNEBGOION_DIIIFDPFHFH_OFFSET UNITYSDK_OFFSET(0xCBF2410)
#define PKKNEBGOION_DJFHAIAAFMI_OFFSET UNITYSDK_OFFSET(0xCBF6880)
#define PKKNEBGOION_DJNJNLBNNHB_OFFSET UNITYSDK_OFFSET(0xCBF6460)
#define PKKNEBGOION_EAKFBMFJGJP_OFFSET UNITYSDK_OFFSET(0xCBF68F0)
#define PKKNEBGOION_EDALBCBHANJ_1_OFFSET UNITYSDK_OFFSET(0xCBF7820)
#define PKKNEBGOION_EDALBCBHANJ_OFFSET UNITYSDK_OFFSET(0xCBF7560)
#define PKKNEBGOION_EJBGHACPOON_OFFSET UNITYSDK_OFFSET(0xCBF0CE0)
#define PKKNEBGOION_EKBNAHCBHNG_OFFSET UNITYSDK_OFFSET(0xCBFA6B0)
#define PKKNEBGOION_FEGCBGJFNPJ_OFFSET UNITYSDK_OFFSET(0xCBF0F10)
#define PKKNEBGOION_FJLJJCKLAIO_OFFSET UNITYSDK_OFFSET(0xCBF4200)
#define PKKNEBGOION_FKDKFFLFAFC_OFFSET UNITYSDK_OFFSET(0xCBF6810)
#define PKKNEBGOION_FKJJKHCBCPM_OFFSET UNITYSDK_OFFSET(0xCBF5AA0)
#define PKKNEBGOION_FLNEECIIDKK_OFFSET UNITYSDK_OFFSET(0xCBF3600)
#define PKKNEBGOION_FLNKDEPJMBF_OFFSET UNITYSDK_OFFSET(0xCBFDD10)
#define PKKNEBGOION_FMBKOMKIKLI_OFFSET UNITYSDK_OFFSET(0xCBF3C80)
#define PKKNEBGOION_GBKEDOFMLJO_OFFSET UNITYSDK_OFFSET(0xCBF6640)
#define PKKNEBGOION_GDAAEOOFNIG_1_OFFSET UNITYSDK_OFFSET(0xCBF5E80)
#define PKKNEBGOION_GDAAEOOFNIG_OFFSET UNITYSDK_OFFSET(0xCBF5F20)
#define PKKNEBGOION_GDDHJLDDJJM_OFFSET UNITYSDK_OFFSET(0xCBF6E30)
#define PKKNEBGOION_GDJJOAKAFPO_OFFSET UNITYSDK_OFFSET(0xCBF7B30)
#define PKKNEBGOION_GET_CURRENTACTIVEANDCONNECTIONREGIONSIDS_OFFSET UNITYSDK_OFFSET(0xCBFDDB0)
#define PKKNEBGOION_GET_ENABLEGROUPREGIONSTREAMING_OFFSET UNITYSDK_OFFSET(0xCBFDCF0)
#define PKKNEBGOION_GET_HASREGION_OFFSET UNITYSDK_OFFSET(0xCBFDCD0)
#define PKKNEBGOION_GET_SOURCEDISTUSEREGIONV1_OFFSET UNITYSDK_OFFSET(0xCBFDE70)
#define PKKNEBGOION_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0xCBF79F0)
#define PKKNEBGOION_GGGGOMKGEHN_OFFSET UNITYSDK_OFFSET(0xCBF3960)
#define PKKNEBGOION_GKJFHPOBBDN_OFFSET UNITYSDK_OFFSET(0xCBFC470)
#define PKKNEBGOION_GKMPPDDHKDI_OFFSET UNITYSDK_OFFSET(0xCBF7490)
#define PKKNEBGOION_GNPCEFCDJOI_OFFSET UNITYSDK_OFFSET(0xCBF13D0)
#define PKKNEBGOION_GOFAHMJKBEH_OFFSET UNITYSDK_OFFSET(0xCBFDDD0)
#define PKKNEBGOION_GOLOOJGHEJH_OFFSET UNITYSDK_OFFSET(0xCBF63C0)
#define PKKNEBGOION_GPHIKMBBPKB_OFFSET UNITYSDK_OFFSET(0xCBF0EB0)
#define PKKNEBGOION_HCNEKHMPFGC_OFFSET UNITYSDK_OFFSET(0xCBEFF90)
#define PKKNEBGOION_IDEIKKFHEHI_OFFSET UNITYSDK_OFFSET(0xCBF65A0)
#define PKKNEBGOION_IDPPJALHPEE_OFFSET UNITYSDK_OFFSET(0xCBF69F0)
#define PKKNEBGOION_IECIAPPANHI_OFFSET UNITYSDK_OFFSET(0xCBFBF30)
#define PKKNEBGOION_IENJBPFFIIG_OFFSET UNITYSDK_OFFSET(0xCBF3880)
#define PKKNEBGOION_IKEDLJJOFEG_OFFSET UNITYSDK_OFFSET(0xCBFBFC0)
#define PKKNEBGOION_IMFBEHMBMNA_OFFSET UNITYSDK_OFFSET(0xCBF0540)
#define PKKNEBGOION_IPFHLAAAJJN_OFFSET UNITYSDK_OFFSET(0xCBFB920)
#define PKKNEBGOION_JGDFEIKGBPK_OFFSET UNITYSDK_OFFSET(0xCBF11D0)
#define PKKNEBGOION_JGICHJKJBPB_OFFSET UNITYSDK_OFFSET(0xCBF02B0)
#define PKKNEBGOION_JKENLGCOLEB_OFFSET UNITYSDK_OFFSET(0xCBF5D20)
#define PKKNEBGOION_JNBMCPANPPD_OFFSET UNITYSDK_OFFSET(0xCBF6770)
#define PKKNEBGOION_JPADDNHGOPN_OFFSET UNITYSDK_OFFSET(0xCBF6970)
#define PKKNEBGOION_JPEIPPDIIAJ_OFFSET UNITYSDK_OFFSET(0xCBFBE50)
#define PKKNEBGOION_JPHBCDFLGHP_OFFSET UNITYSDK_OFFSET(0xCBF36B0)
#define PKKNEBGOION_KEDGMHINBLG_OFFSET UNITYSDK_OFFSET(0xCBFDBA0)
#define PKKNEBGOION_KGDDNBNDBMI_OFFSET UNITYSDK_OFFSET(0xCBF27A0)
#define PKKNEBGOION_KKKCPJCNDLE_OFFSET UNITYSDK_OFFSET(0xCBF3660)
#define PKKNEBGOION_KLFOFBFKHAA_OFFSET UNITYSDK_OFFSET(0xCBF1020)
#define PKKNEBGOION_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCBF8A30)
#define PKKNEBGOION_LHIBKEKLJBF_OFFSET UNITYSDK_OFFSET(0xCBEFDD0)
#define PKKNEBGOION_LJDMIPOCPON_OFFSET UNITYSDK_OFFSET(0xCBF5680)
#define PKKNEBGOION_LLFLDGHEMFA_OFFSET UNITYSDK_OFFSET(0xCBF0780)
#define PKKNEBGOION_MAHMAJIIJNJ_OFFSET UNITYSDK_OFFSET(0xCBF6690)
#define PKKNEBGOION_MCAGMKCHILP_OFFSET UNITYSDK_OFFSET(0xCBF6500)
#define PKKNEBGOION_MDDGOJICDPH_OFFSET UNITYSDK_OFFSET(0xCBF0BD0)
#define PKKNEBGOION_MGMCHFFCJFH_OFFSET UNITYSDK_OFFSET(0xCBEFEF0)
#define PKKNEBGOION_MKODAFDHHHP_OFFSET UNITYSDK_OFFSET(0xCBFC050)
#define PKKNEBGOION_MPIEOBCBOBA_OFFSET UNITYSDK_OFFSET(0xCBF60F0)
#define PKKNEBGOION_NDOPCAIPAAC_OFFSET UNITYSDK_OFFSET(0xCBF75D0)
#define PKKNEBGOION_NJDEOELLMOL_OFFSET UNITYSDK_OFFSET(0xCBF9AE0)
#define PKKNEBGOION_NJHFCCEPBBB_OFFSET UNITYSDK_OFFSET(0xCBF9A60)
#define PKKNEBGOION_NOLJFFAAPGC_OFFSET UNITYSDK_OFFSET(0xCBF5B90)
#define PKKNEBGOION_NPKAJGMHLGA_OFFSET UNITYSDK_OFFSET(0xCBF6D90)
#define PKKNEBGOION_NPKJKNPIMCH_OFFSET UNITYSDK_OFFSET(0xCBF2D20)
#define PKKNEBGOION_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0xCBFBED0)
#define PKKNEBGOION_OIDAPHOJDAM_OFFSET UNITYSDK_OFFSET(0xCBF1070)
#define PKKNEBGOION_OJPEEGFKDDD_OFFSET UNITYSDK_OFFSET(0xCBF3DA0)
#define PKKNEBGOION_OLJKHOPHNDL_OFFSET UNITYSDK_OFFSET(0xCBF4C80)
#define PKKNEBGOION_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xCBF9C20)
#define PKKNEBGOION_PDLGLLKPHGD_OFFSET UNITYSDK_OFFSET(0xCBF66D0)
#define PKKNEBGOION_PJDPIPDGAMJ_OFFSET UNITYSDK_OFFSET(0xCBF57D0)
#define PKKNEBGOION_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xCBF9290)
#define PKKNEBGOION_PKAOJCPPKKP_OFFSET UNITYSDK_OFFSET(0xCBF1580)
#define PKKNEBGOION_PLKJJKMAOGM_OFFSET UNITYSDK_OFFSET(0xCBFDE20)
#define PKKNEBGOION_POIIGNHOFMP_OFFSET UNITYSDK_OFFSET(0xCBF6330)
#define PKKNEBGOION_POJNBDCIJFE_OFFSET UNITYSDK_OFFSET(0xCBF1230)
#define PKKNEBGOION_SET_CURRENTACTIVEANDCONNECTIONREGIONSIDS_OFFSET UNITYSDK_OFFSET(0xCBFDDC0)
#define PKKNEBGOION_SET_ENABLEGROUPREGIONSTREAMING_OFFSET UNITYSDK_OFFSET(0xCBFDD00)
#define PKKNEBGOION_SET_HASREGION_OFFSET UNITYSDK_OFFSET(0xCBFDCE0)
#define PKKNEBGOION_SET_SOURCEDISTUSEREGIONV1_OFFSET UNITYSDK_OFFSET(0xCBFDE80)

inline static constexpr unsigned int PKKNEBGOION_TypeDefinitionIndex = 63588;

	class PKKNEBGOION : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>* GDNBCDOFPJG; // 0x10
		::UnityEngine::GameObject* GKNBCPMJHMN; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Action_2<::KGDADKNPPOL*, ::KGDADKNPPOL*>*>* FHFGICFBGMK; // 0x20
		::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>* PPIFFLDJJEF; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::StageRegionVisualState>* OFEDKPPGAGO; // 0x30
		::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>* AJMEFIKCNED; // 0x38
		::System::Collections::Generic::HashSet_1<::KLEFGGIHGMI*>* DHCFAIKJBNH; // 0x40
		::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>* BCKANDNDKMA; // 0x48
		::System::Collections::Generic::List_1<::KLEFGGIHGMI*>* LCFOBPCCLIB; // 0x50
		::System::Action_1<::System::Collections::Generic::IReadOnlyCollection_1<::KGDADKNPPOL*>*>* AKILKFIOHNA; // 0x58
		::RPG::Client::Stage* PKLNPNKEJOO; // 0x60
		::System::Collections::Generic::List_1<::KGDADKNPPOL*>* NCNPOINLNGC; // 0x68
		::System::Collections::Generic::List_1<::KGDADKNPPOL*>* MDOHEJMFDCN; // 0x70
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* JMBKNAGNKEL; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::KGDADKNPPOL*>* OPLMLLNGEEF; // 0x80
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::JJECNLGDFMP*>* DCJGBNLBGME; // 0x88
		::System::Collections::Generic::HashSet_1<::KLEFGGIHGMI*>* FGODHGOAAAE; // 0x90
		::RPG::Client::RegionManagerDebugMono* MPFDPICIPID; // 0x98
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::KGDADKNPPOL*>* LKNMPNEMGJH; // 0xA0
		::PKKNEBGOION_FJDKPAGMCLM* MOEDCKJAOEB; // 0xA8
		::System::Action_1<::KGDADKNPPOL*>* MEMMLLEOEEH; // 0xB0
		::System::Collections::Generic::HashSet_1<::System::UInt32>* CICFOBOMHNI; // 0xB8
		::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>* CCJMNHLONEA; // 0xC0
		::System::Collections::Generic::List_1<::BFEOGBPMBFB>* EJKCBEMOCBM; // 0xC8
		::PKKNEBGOION_AKOPAHKBDJN* MHNKIDKIHHM; // 0xD0
		::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>* HOPDGDDJKOA; // 0xD8
		::System::Collections::Generic::List_1<::KGDADKNPPOL*>* JEJGNIEBELD; // 0xE0
		::System::Action_1<::KGDADKNPPOL*>* OFJLHOIMPCD; // 0xE8
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::KGDADKNPPOL*>* LMMJPNMIDFN; // 0xF0
		::System::Collections::Generic::List_1<::KGDADKNPPOL*>* ICGDKKEHJMH; // 0xF8
		::System::Collections::Generic::List_1<::RPG::GameCore::StageRegionVisualState>* JMGHNGMPACJ; // 0x100
		::System::Collections::Generic::List_1<::RPG::GameCore::StageRegionVisualState>* ICENIBNIENK; // 0x108
		::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>* BKNIFDPBPJG; // 0x110
		::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>* OGGGBMKGKIP; // 0x118
		::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>* JBOAHJHEOJL; // 0x120
		::System::Collections::Generic::List_1<::RPG::GameCore::StageRegionVisualState>* MEAPIMDMKLK; // 0x128
		::RPG::GameCore::StageRegionCollection* OCPODIPIJFN; // 0x130
		::System::Action_2<::KGDADKNPPOL*, ::KGDADKNPPOL*>* BIKOJDMGFON; // 0x138
		::PKKNEBGOION_COKPEGBODLD* KGLEAOAOHKO; // 0x140
		::OGBCFPAJBMN* CIHCMFCLCNI; // 0x148
		::System::Collections::Generic::List_1<::KGDADKNPPOL*>* HPFLHEPIKMI; // 0x150
		::System::Collections::Generic::List_1<::KGDADKNPPOL*>* JKAFPIGAPKD; // 0x158
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _CurrentActiveAndConnectionRegionsIDs_k__BackingField; // 0x160
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::StageRegionVisualState>* OEEPNDCIPAE; // 0x168
		::System::Collections::Generic::HashSet_1<::System::UInt32>* OCMOPOKGJNN; // 0x170
		::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>* PPMMPAOAKGE; // 0x178
		::KGDADKNPPOL* DOKGABILFED; // 0x180
		::System::Collections::Generic::List_1<::KGDADKNPPOL*>* GMOGELHAPDP; // 0x188
		::System::Action_3<::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>*, ::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>*, ::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>*>* EPFAPAONHMI; // 0x190
		::System::Collections::Generic::List_1<::KGDADKNPPOL*>* OHDJPOJFAAL; // 0x198
		::PKKNEBGOION_AKOPAHKBDJN* FJOCNPFBHIJ; // 0x1A0
		::System::Boolean _EnableGroupRegionStreaming_k__BackingField; // 0x1A8
		::System::Boolean GHAALCBLMCJ; // 0x1A9
		::System::Boolean HLLMPJMOBDB; // 0x1AA
		::System::Boolean AEHAGJIAAOE; // 0x1AB
		::System::Boolean PAIIGLNBFCP; // 0x1AC
		::System::Boolean MGDNHBGKDBD; // 0x1AD
		::System::Boolean _SourceDistUseRegionV1_k__BackingField; // 0x1AE
		::System::Boolean _HasRegion_k__BackingField; // 0x1AF
		::System::UInt64 NLLCNGAIFCL; // 0x1B0
		::System::UInt64 JPFHHABLMIL; // 0x1B8
		::System::Int32 FHMJEGELJHG; // 0x1C0
		::System::Boolean KCIINCLOJDD; // 0x1C4
		::System::Boolean IFJELGCDAPJ; // 0x1C5
		::System::Boolean KFDGAGLPABC; // 0x1C6
		::System::Boolean LNGMLPJPDDL; // 0x1C7
		::RPG::Client::ReasonBool_1<::RPG::Client::PauseRegionManagerReason> IMGPHHLDLNE; // 0x1C8
		static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>** StaticGet_JBBCKPOAHCL()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>**)UnitySDK::FromName("", "PKKNEBGOION")->GetStaticField(0x3B880);
		}

		static ::System::Boolean* StaticGet_HMKFCDPBKFJ()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PKKNEBGOION")->GetStaticField(0xD1A0);
		}

		static ::System::Boolean* StaticGet_AHOMJDMJJPO()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PKKNEBGOION")->GetStaticField(0xD1A1);
		}

		static ::System::Boolean* StaticGet_ENNGPHPPFPP()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PKKNEBGOION")->GetStaticField(0xD1A2);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKKNEBGOION_CCTOR_OFFSET))();
		}

		::System::Void LHIBKEKLJBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_LHIBKEKLJBF_OFFSET))(this);
		}

		static ::System::Boolean AJBKOOCNJLG(::RPG::GameCore::RegionBlockVisibilityStatus a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RegionBlockVisibilityStatus, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PKKNEBGOION_AJBKOOCNJLG_OFFSET))(a1, a2, a3);
		}

		::System::Void MGMCHFFCJFH(::KGDADKNPPOL* a1, ::KLEFGGIHGMI* a2, ::GLAJJDPBHLL a3, ::System::Boolean a4, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority a5)
		{
			return ((::System::Void(*)(::PVOID, ::KGDADKNPPOL*, ::KLEFGGIHGMI*, ::GLAJJDPBHLL, ::System::Boolean, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + PKKNEBGOION_MGMCHFFCJFH_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void JGICHJKJBPB(::KGDADKNPPOL* a1, ::KLEFGGIHGMI* a2, ::GLAJJDPBHLL a3, ::System::Boolean a4, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority a5)
		{
			return ((::System::Void(*)(::PVOID, ::KGDADKNPPOL*, ::KLEFGGIHGMI*, ::GLAJJDPBHLL, ::System::Boolean, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + PKKNEBGOION_JGICHJKJBPB_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void HCNEKHMPFGC(::KGDADKNPPOL* a1, ::KLEFGGIHGMI* a2, ::GLAJJDPBHLL a3, ::System::Boolean a4, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority a5, ::RPG::Client::ContributionOwner a6)
		{
			return ((::System::Void(*)(::PVOID, ::KGDADKNPPOL*, ::KLEFGGIHGMI*, ::GLAJJDPBHLL, ::System::Boolean, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority, ::RPG::Client::ContributionOwner))((::PBYTE)hIl2Cpp + PKKNEBGOION_HCNEKHMPFGC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void ACFHBHEBHFP(::KGDADKNPPOL* a1, ::KLEFGGIHGMI* a2, ::GLAJJDPBHLL a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::KGDADKNPPOL*, ::KLEFGGIHGMI*, ::GLAJJDPBHLL, ::System::Boolean))((::PBYTE)hIl2Cpp + PKKNEBGOION_ACFHBHEBHFP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void IMFBEHMBMNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_IMFBEHMBMNA_OFFSET))(this);
		}

		::System::Void LLFLDGHEMFA(::KGDADKNPPOL* a1, ::KLEFGGIHGMI* a2, ::RPG::GameCore::RegionBlockVisibilityStatus a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::KGDADKNPPOL*, ::KLEFGGIHGMI*, ::RPG::GameCore::RegionBlockVisibilityStatus, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PKKNEBGOION_LLFLDGHEMFA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void AMKBLNGHGOD(::KLEFGGIHGMI* a1, ::GLAJJDPBHLL a2, ::System::Boolean a3, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority a4)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*, ::GLAJJDPBHLL, ::System::Boolean, ::KLEFGGIHGMI_RegionBlockVisibilityStatusPriority))((::PBYTE)hIl2Cpp + PKKNEBGOION_AMKBLNGHGOD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MDDGOJICDPH(::System::Collections::Generic::HashSet_1<::KLEFGGIHGMI*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::KLEFGGIHGMI*>*))((::PBYTE)hIl2Cpp + PKKNEBGOION_MDDGOJICDPH_OFFSET))(this, a1);
		}

		::System::Void GPHIKMBBPKB(::KLEFGGIHGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*))((::PBYTE)hIl2Cpp + PKKNEBGOION_GPHIKMBBPKB_OFFSET))(this, a1);
		}

		::System::Boolean FEGCBGJFNPJ(::KLEFGGIHGMI* a1, ::FPJDAJBKDMN a2, ::EMIOLHAIOIG a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::KLEFGGIHGMI*, ::FPJDAJBKDMN, ::EMIOLHAIOIG))((::PBYTE)hIl2Cpp + PKKNEBGOION_FEGCBGJFNPJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EJBGHACPOON(::KLEFGGIHGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*))((::PBYTE)hIl2Cpp + PKKNEBGOION_EJBGHACPOON_OFFSET))(this, a1);
		}

		::System::Boolean KLFOFBFKHAA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_KLFOFBFKHAA_OFFSET))(this);
		}

		::System::Boolean OIDAPHOJDAM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_OIDAPHOJDAM_OFFSET))(this);
		}

		::System::Boolean JGDFEIKGBPK(::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::GameCore::StageRegionVisualState>* a1, ::System::Nullable_1<::System::UInt32> a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::GameCore::StageRegionVisualState>*, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + PKKNEBGOION_JGDFEIKGBPK_OFFSET))(this, a1, a2);
		}

		::System::Boolean GNPCEFCDJOI(::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::GameCore::StageRegionVisualState>* a1, ::System::Nullable_1<::System::UInt32> a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::GameCore::StageRegionVisualState>*, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + PKKNEBGOION_GNPCEFCDJOI_OFFSET))(this, a1, a2);
		}

		::System::Boolean POJNBDCIJFE(::System::Nullable_1<::System::UInt32> a1, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::GameCore::StageRegionVisualState>* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Nullable_1<::System::UInt32>, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::GameCore::StageRegionVisualState>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PKKNEBGOION_POJNBDCIJFE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean FLNEECIIDKK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_FLNEECIIDKK_OFFSET))(this);
		}

		::System::Boolean PKAOJCPPKKP(::System::Nullable_1<::System::UInt32> a1, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::GameCore::StageRegionVisualState>* a2, ::System::Boolean a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::StageRegionVisualState>* a4, ::KGDADKNPPOL* a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Nullable_1<::System::UInt32>, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::GameCore::StageRegionVisualState>*, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::StageRegionVisualState>*, ::KGDADKNPPOL*))((::PBYTE)hIl2Cpp + PKKNEBGOION_PKAOJCPPKKP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void NPKJKNPIMCH(::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::GameCore::StageRegionVisualState>* a1, ::KGDADKNPPOL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::GameCore::StageRegionVisualState>*, ::KGDADKNPPOL*))((::PBYTE)hIl2Cpp + PKKNEBGOION_NPKJKNPIMCH_OFFSET))(this, a1, a2);
		}

		::System::Void KGDDNBNDBMI(::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::GameCore::StageRegionVisualState>* a1, ::KGDADKNPPOL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::GameCore::StageRegionVisualState>*, ::KGDADKNPPOL*))((::PBYTE)hIl2Cpp + PKKNEBGOION_KGDDNBNDBMI_OFFSET))(this, a1, a2);
		}

		::System::Void OJPEEGFKDDD(::APLEMBNFLAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APLEMBNFLAA*))((::PBYTE)hIl2Cpp + PKKNEBGOION_OJPEEGFKDDD_OFFSET))(this, a1);
		}

		::System::Boolean BDNEGMIMPND()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_BDNEGMIMPND_OFFSET))(this);
		}

		::System::Void OLJKHOPHNDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_OLJKHOPHNDL_OFFSET))(this);
		}

		::System::Void AHEEAOFELEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_AHEEAOFELEF_OFFSET))(this);
		}

		::System::Void LJDMIPOCPON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_LJDMIPOCPON_OFFSET))(this);
		}

		::System::Void CJPDKBMKGOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_CJPDKBMKGOF_OFFSET))(this);
		}

		::System::Void FMBKOMKIKLI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_FMBKOMKIKLI_OFFSET))(this);
		}

		::System::Void GGGGOMKGEHN(::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::GameCore::StageRegionVisualState>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::GameCore::StageRegionVisualState>*))((::PBYTE)hIl2Cpp + PKKNEBGOION_GGGGOMKGEHN_OFFSET))(this, a1);
		}

		::System::Void BJCHAENIHKJ(::KGDADKNPPOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGDADKNPPOL*))((::PBYTE)hIl2Cpp + PKKNEBGOION_BJCHAENIHKJ_OFFSET))(this, a1);
		}

		::System::Void DIIIFDPFHFH(::System::Boolean a1, ::KGDADKNPPOL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::KGDADKNPPOL*))((::PBYTE)hIl2Cpp + PKKNEBGOION_DIIIFDPFHFH_OFFSET))(this, a1, a2);
		}

		::System::Void DIDFDFGNJMI(::KGDADKNPPOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGDADKNPPOL*))((::PBYTE)hIl2Cpp + PKKNEBGOION_DIDFDFGNJMI_OFFSET))(this, a1);
		}

		::System::Void AAMHKBPEHFH(::KGDADKNPPOL* a1, ::KGDADKNPPOL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KGDADKNPPOL*, ::KGDADKNPPOL*))((::PBYTE)hIl2Cpp + PKKNEBGOION_AAMHKBPEHFH_OFFSET))(this, a1, a2);
		}

		::System::Void FKJJKHCBCPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_FKJJKHCBCPM_OFFSET))(this);
		}

		::System::Void NOLJFFAAPGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_NOLJFFAAPGC_OFFSET))(this);
		}

		static ::System::Boolean KKKCPJCNDLE(::RPG::GameCore::StageRegionVisualState a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::StageRegionVisualState))((::PBYTE)hIl2Cpp + PKKNEBGOION_KKKCPJCNDLE_OFFSET))(a1);
		}

		::KGDADKNPPOL* JKENLGCOLEB()
		{
			return ((::KGDADKNPPOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_JKENLGCOLEB_OFFSET))(this);
		}

		::KGDADKNPPOL* DENGOJAHJEP(::APLEMBNFLAA* a1)
		{
			return ((::KGDADKNPPOL*(*)(::PVOID, ::APLEMBNFLAA*))((::PBYTE)hIl2Cpp + PKKNEBGOION_DENGOJAHJEP_OFFSET))(this, a1);
		}

		static ::KGDADKNPPOL* GDAAEOOFNIG(::System::Collections::Generic::List_1<::KGDADKNPPOL*>* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::KGDADKNPPOL*(*)(::System::Collections::Generic::List_1<::KGDADKNPPOL*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PKKNEBGOION_GDAAEOOFNIG_OFFSET))(a1, a2);
		}

		::KGDADKNPPOL* GDAAEOOFNIG_1(::UnityEngine::Vector3 a1)
		{
			return ((::KGDADKNPPOL*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PKKNEBGOION_GDAAEOOFNIG_1_OFFSET))(this, a1);
		}

		::System::Void MPIEOBCBOBA(::RPG::GameCore::GameEntity* a1, ::System::Action_2<::KGDADKNPPOL*, ::KGDADKNPPOL*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action_2<::KGDADKNPPOL*, ::KGDADKNPPOL*>*))((::PBYTE)hIl2Cpp + PKKNEBGOION_MPIEOBCBOBA_OFFSET))(this, a1, a2);
		}

		::System::Void POIIGNHOFMP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PKKNEBGOION_POIIGNHOFMP_OFFSET))(this, a1);
		}

		::System::Void GOLOOJGHEJH(::System::Action_1<::KGDADKNPPOL*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::KGDADKNPPOL*>*))((::PBYTE)hIl2Cpp + PKKNEBGOION_GOLOOJGHEJH_OFFSET))(this, a1);
		}

		::System::Void DJNJNLBNNHB(::System::Action_1<::KGDADKNPPOL*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::KGDADKNPPOL*>*))((::PBYTE)hIl2Cpp + PKKNEBGOION_DJNJNLBNNHB_OFFSET))(this, a1);
		}

		::System::Void MCAGMKCHILP(::System::Action_1<::KGDADKNPPOL*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::KGDADKNPPOL*>*))((::PBYTE)hIl2Cpp + PKKNEBGOION_MCAGMKCHILP_OFFSET))(this, a1);
		}

		::System::Void IDEIKKFHEHI(::System::Action_1<::KGDADKNPPOL*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::KGDADKNPPOL*>*))((::PBYTE)hIl2Cpp + PKKNEBGOION_IDEIKKFHEHI_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::KGDADKNPPOL*>* GBKEDOFMLJO()
		{
			return ((::System::Collections::Generic::List_1<::KGDADKNPPOL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_GBKEDOFMLJO_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::KGDADKNPPOL*>* MAHMAJIIJNJ()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::KGDADKNPPOL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_MAHMAJIIJNJ_OFFSET))(this);
		}

		::System::Void PDLGLLKPHGD(::System::Action_3<::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>*, ::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>*, ::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>*, ::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>*, ::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>*>*))((::PBYTE)hIl2Cpp + PKKNEBGOION_PDLGLLKPHGD_OFFSET))(this, a1);
		}

		::System::Void JNBMCPANPPD(::System::Action_3<::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>*, ::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>*, ::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>*, ::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>*, ::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>*>*))((::PBYTE)hIl2Cpp + PKKNEBGOION_JNBMCPANPPD_OFFSET))(this, a1);
		}

		::System::Void FKDKFFLFAFC(::System::Action_1<::System::Collections::Generic::IReadOnlyCollection_1<::KGDADKNPPOL*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IReadOnlyCollection_1<::KGDADKNPPOL*>*>*))((::PBYTE)hIl2Cpp + PKKNEBGOION_FKDKFFLFAFC_OFFSET))(this, a1);
		}

		::System::Void DJFHAIAAFMI(::System::Action_1<::System::Collections::Generic::IReadOnlyCollection_1<::KGDADKNPPOL*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IReadOnlyCollection_1<::KGDADKNPPOL*>*>*))((::PBYTE)hIl2Cpp + PKKNEBGOION_DJFHAIAAFMI_OFFSET))(this, a1);
		}

		::System::Void EAKFBMFJGJP(::System::Action_2<::KGDADKNPPOL*, ::KGDADKNPPOL*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::KGDADKNPPOL*, ::KGDADKNPPOL*>*))((::PBYTE)hIl2Cpp + PKKNEBGOION_EAKFBMFJGJP_OFFSET))(this, a1);
		}

		::System::Void JPADDNHGOPN(::System::Action_2<::KGDADKNPPOL*, ::KGDADKNPPOL*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::KGDADKNPPOL*, ::KGDADKNPPOL*>*))((::PBYTE)hIl2Cpp + PKKNEBGOION_JPADDNHGOPN_OFFSET))(this, a1);
		}

		::System::Void IDPPJALHPEE(::System::Action_3<::KGDADKNPPOL*, ::RPG::GameCore::StageRegionActiveState, ::RPG::GameCore::StageRegionActiveState>* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::KGDADKNPPOL*, ::RPG::GameCore::StageRegionActiveState, ::RPG::GameCore::StageRegionActiveState>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + PKKNEBGOION_IDPPJALHPEE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GDDHJLDDJJM(::System::Action_3<::KGDADKNPPOL*, ::RPG::GameCore::StageRegionActiveState, ::RPG::GameCore::StageRegionActiveState>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::KGDADKNPPOL*, ::RPG::GameCore::StageRegionActiveState, ::RPG::GameCore::StageRegionActiveState>*, ::System::Int32))((::PBYTE)hIl2Cpp + PKKNEBGOION_GDDHJLDDJJM_OFFSET))(this, a1, a2);
		}

		::System::Void ABFGJMONOLI(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Action* a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32, ::System::Action*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PKKNEBGOION_ABFGJMONOLI_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void GKMPPDDHKDI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PKKNEBGOION_GKMPPDDHKDI_OFFSET))(this, a1);
		}

		::System::Void EDALBCBHANJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PKKNEBGOION_EDALBCBHANJ_OFFSET))(this, a1);
		}

		::System::Void EDALBCBHANJ_1(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + PKKNEBGOION_EDALBCBHANJ_1_OFFSET))(this, a1);
		}

		::System::Void DCMODGGDMAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_DCMODGGDMAL_OFFSET))(this);
		}

		::System::Void NDOPCAIPAAC(::PKKNEBGOION_AKOPAHKBDJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKKNEBGOION_AKOPAHKBDJN*))((::PBYTE)hIl2Cpp + PKKNEBGOION_NDOPCAIPAAC_OFFSET))(this, a1);
		}

		::System::Void CBOOOBBKBDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_CBOOOBBKBDE_OFFSET))(this);
		}

		static ::PKKNEBGOION* GGBLHEHJBDO()
		{
			return ((::PKKNEBGOION*(*)())((::PBYTE)hIl2Cpp + PKKNEBGOION_GGBLHEHJBDO_OFFSET))();
		}

		static ::RPG::GameCore::StageRegionCollection* GDJJOAKAFPO(::System::String* a1)
		{
			return ((::RPG::GameCore::StageRegionCollection*(*)(::System::String*))((::PBYTE)hIl2Cpp + PKKNEBGOION_GDJJOAKAFPO_OFFSET))(a1);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::Stage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + PKKNEBGOION_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void NJDEOELLMOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_NJDEOELLMOL_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::APLEMBNFLAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APLEMBNFLAA*))((::PBYTE)hIl2Cpp + PKKNEBGOION_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO(::APLEMBNFLAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APLEMBNFLAA*))((::PBYTE)hIl2Cpp + PKKNEBGOION_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void CMGKACCNHNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_CMGKACCNHNL_OFFSET))(this);
		}

		::System::Void EKBNAHCBHNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_EKBNAHCBHNG_OFFSET))(this);
		}

		::System::Void ANBLOBLKAJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_ANBLOBLKAJB_OFFSET))(this);
		}

		::System::Void OHMHJFANEIF(::RPG::Client::PauseRegionManagerReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PauseRegionManagerReason))((::PBYTE)hIl2Cpp + PKKNEBGOION_OHMHJFANEIF_OFFSET))(this, a1);
		}

		::System::Void IECIAPPANHI(::RPG::Client::PauseRegionManagerReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PauseRegionManagerReason))((::PBYTE)hIl2Cpp + PKKNEBGOION_IECIAPPANHI_OFFSET))(this, a1);
		}

		::System::Boolean NPKAJGMHLGA(::System::UInt32 a1, ::KGDADKNPPOL* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::KGDADKNPPOL*))((::PBYTE)hIl2Cpp + PKKNEBGOION_NPKAJGMHLGA_OFFSET))(this, a1, a2);
		}

		::System::Void AJKFNHDAGCC(::KLEFGGIHGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*))((::PBYTE)hIl2Cpp + PKKNEBGOION_AJKFNHDAGCC_OFFSET))(this, a1);
		}

		::System::Void JPHBCDFLGHP(::System::Boolean a1, ::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>*))((::PBYTE)hIl2Cpp + PKKNEBGOION_JPHBCDFLGHP_OFFSET))(this, a1, a2);
		}

		::System::Void FJLJJCKLAIO(::APLEMBNFLAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APLEMBNFLAA*))((::PBYTE)hIl2Cpp + PKKNEBGOION_FJLJJCKLAIO_OFFSET))(this, a1);
		}

		::System::Void PJDPIPDGAMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_PJDPIPDGAMJ_OFFSET))(this);
		}

		::System::Void IPFHLAAAJJN(::APLEMBNFLAA* a1, ::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::APLEMBNFLAA*, ::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>*))((::PBYTE)hIl2Cpp + PKKNEBGOION_IPFHLAAAJJN_OFFSET))(this, a1, a2);
		}

		::System::Void IENJBPFFIIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_IENJBPFFIIG_OFFSET))(this);
		}

		::System::Void BFAPPGBDIIH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PKKNEBGOION_BFAPPGBDIIH_OFFSET))(this, a1);
		}

		::System::UInt64 GKJFHPOBBDN(::APLEMBNFLAA* a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::APLEMBNFLAA*))((::PBYTE)hIl2Cpp + PKKNEBGOION_GKJFHPOBBDN_OFFSET))(this, a1);
		}

		::System::UInt64 BKGEOMAJANM(::APLEMBNFLAA* a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::APLEMBNFLAA*))((::PBYTE)hIl2Cpp + PKKNEBGOION_BKGEOMAJANM_OFFSET))(this, a1);
		}

		::System::Boolean AEJBHEBOGEM(::APLEMBNFLAA* a1, ::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::APLEMBNFLAA*, ::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PKKNEBGOION_AEJBHEBOGEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IKEDLJJOFEG(::KGDADKNPPOL* a1, ::APLEMBNFLAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KGDADKNPPOL*, ::APLEMBNFLAA*))((::PBYTE)hIl2Cpp + PKKNEBGOION_IKEDLJJOFEG_OFFSET))(this, a1, a2);
		}

		::System::Void MKODAFDHHHP(::KGDADKNPPOL* a1, ::APLEMBNFLAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KGDADKNPPOL*, ::APLEMBNFLAA*))((::PBYTE)hIl2Cpp + PKKNEBGOION_MKODAFDHHHP_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* KEDGMHINBLG()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_KEDGMHINBLG_OFFSET))(this);
		}

		::KGDADKNPPOL* AGKGHHKNOGJ()
		{
			return ((::KGDADKNPPOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_AGKGHHKNOGJ_OFFSET))(this);
		}

		::System::Void NJHFCCEPBBB(::KGDADKNPPOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGDADKNPPOL*))((::PBYTE)hIl2Cpp + PKKNEBGOION_NJHFCCEPBBB_OFFSET))(this, a1);
		}

		::System::Boolean get_HasRegion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_GET_HASREGION_OFFSET))(this);
		}

		::System::Void set_HasRegion(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PKKNEBGOION_SET_HASREGION_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableGroupRegionStreaming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_GET_ENABLEGROUPREGIONSTREAMING_OFFSET))(this);
		}

		::System::Void set_EnableGroupRegionStreaming(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PKKNEBGOION_SET_ENABLEGROUPREGIONSTREAMING_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* FLNKDEPJMBF()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_FLNKDEPJMBF_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyCollection_1<::System::UInt32>* CMMDOKACKKJ()
		{
			return ((::System::Collections::Generic::IReadOnlyCollection_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_CMMDOKACKKJ_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_CurrentActiveAndConnectionRegionsIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_GET_CURRENTACTIVEANDCONNECTIONREGIONSIDS_OFFSET))(this);
		}

		::System::Void set_CurrentActiveAndConnectionRegionsIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + PKKNEBGOION_SET_CURRENTACTIVEANDCONNECTIONREGIONSIDS_OFFSET))(this, a1);
		}

		::System::Boolean GOFAHMJKBEH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_GOFAHMJKBEH_OFFSET))(this);
		}

		::RPG::GameCore::StageRegionCollection* PLKJJKMAOGM()
		{
			return ((::RPG::GameCore::StageRegionCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_PLKJJKMAOGM_OFFSET))(this);
		}

		::System::Boolean get_SourceDistUseRegionV1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_GET_SOURCEDISTUSEREGIONV1_OFFSET))(this);
		}

		::System::Void set_SourceDistUseRegionV1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PKKNEBGOION_SET_SOURCEDISTUSEREGIONV1_OFFSET))(this, a1);
		}

		::RPG::Client::Stage* JPEIPPDIIAJ()
		{
			return ((::RPG::Client::Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_JPEIPPDIIAJ_OFFSET))(this);
		}

	};
