#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBKENJDEFLF.h"
#include "unitysdk/KDFFHMDFALG_HBHDEEAKFAI.h"
#include "unitysdk/KDFFHMDFALG_RegionLoadStep.h"
#include "unitysdk/RPG/Client/DisableMapRotationVolumeInteractReason.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DEKJNPKKLDA;
class DLNCBOGAMFG;
class DOPPIFIKBKI;
class ELHDFFLAFGN;
class FBLPLPCCCNN;
class FNFAEAEOFAN;
class GIGPDDIPAPO;
class GIPELBHHIHI;
class ILAIBLNNLAO;
class NMBOAAMFBCN;
class NNDAJDLAHNC;
class NPEBLEKDAGI;
class PEBBBNOOCFO;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapRotationInfo; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Nullable; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define KDFFHMDFALG_AADEGOPCGIL_OFFSET UNITYSDK_OFFSET(0xB34E8C0)
#define KDFFHMDFALG_ACBOIIHCODH_OFFSET UNITYSDK_OFFSET(0xB356C30)
#define KDFFHMDFALG_AEFIBHDHALI_OFFSET UNITYSDK_OFFSET(0xB356650)
#define KDFFHMDFALG_AFAKMDMGAKG_OFFSET UNITYSDK_OFFSET(0xB357CB0)
#define KDFFHMDFALG_AHJOLFDGMEP_OFFSET UNITYSDK_OFFSET(0xB34EFE0)
#define KDFFHMDFALG_AJFLKBOPKGN_OFFSET UNITYSDK_OFFSET(0xB34FCE0)
#define KDFFHMDFALG_AKADEEGPNGA_OFFSET UNITYSDK_OFFSET(0xB35BD80)
#define KDFFHMDFALG_AMNPHFLAAHL_OFFSET UNITYSDK_OFFSET(0xB3586B0)
#define KDFFHMDFALG_AOMLFIENEAE_OFFSET UNITYSDK_OFFSET(0xB3509B0)
#define KDFFHMDFALG_BBGMPLMNOEA_OFFSET UNITYSDK_OFFSET(0xB356180)
#define KDFFHMDFALG_BEEFEKPELLK_OFFSET UNITYSDK_OFFSET(0xB35A910)
#define KDFFHMDFALG_BHMOCIOLNLH_OFFSET UNITYSDK_OFFSET(0xB353690)
#define KDFFHMDFALG_BKDHEODKODF_OFFSET UNITYSDK_OFFSET(0xB35A880)
#define KDFFHMDFALG_BLDMLFEAAAL_OFFSET UNITYSDK_OFFSET(0xB35C180)
#define KDFFHMDFALG_CBOJOALADHH_OFFSET UNITYSDK_OFFSET(0xB358100)
#define KDFFHMDFALG_CCTOR_OFFSET UNITYSDK_OFFSET(0xB35C540)
#define KDFFHMDFALG_CEIKNGGDEAO_OFFSET UNITYSDK_OFFSET(0xB34F6F0)
#define KDFFHMDFALG_CJAJDEPGNME_OFFSET UNITYSDK_OFFSET(0xB34FD50)
#define KDFFHMDFALG_CJHAMCNENFE_OFFSET UNITYSDK_OFFSET(0xB3540C0)
#define KDFFHMDFALG_CJMHJFKPMGE_OFFSET UNITYSDK_OFFSET(0xB3587F0)
#define KDFFHMDFALG_CKAJDHBKNKL_OFFSET UNITYSDK_OFFSET(0xB35C140)
#define KDFFHMDFALG_CPCDIIACIDM_OFFSET UNITYSDK_OFFSET(0xB359D10)
#define KDFFHMDFALG_CTOR_OFFSET UNITYSDK_OFFSET(0xB34FE80)
#define KDFFHMDFALG_DABFEGHFGCM_OFFSET UNITYSDK_OFFSET(0xB3568A0)
#define KDFFHMDFALG_DGJBDLJIBLI_OFFSET UNITYSDK_OFFSET(0xB34F930)
#define KDFFHMDFALG_DGLNLIPJJPC_OFFSET UNITYSDK_OFFSET(0xB35B870)
#define KDFFHMDFALG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB352930)
#define KDFFHMDFALG_EBDCJIFBAAI_OFFSET UNITYSDK_OFFSET(0xB354BC0)
#define KDFFHMDFALG_EEINDIPCJBP_OFFSET UNITYSDK_OFFSET(0xB350B60)
#define KDFFHMDFALG_EGDMENEEIIN_OFFSET UNITYSDK_OFFSET(0xB35BF80)
#define KDFFHMDFALG_EKAFAGJEGAF_OFFSET UNITYSDK_OFFSET(0xB3550E0)
#define KDFFHMDFALG_EMDBDCAAMIA_OFFSET UNITYSDK_OFFSET(0xB355DB0)
#define KDFFHMDFALG_ENKPHKGECEJ_OFFSET UNITYSDK_OFFSET(0xB353910)
#define KDFFHMDFALG_EOHCENEAPMD_OFFSET UNITYSDK_OFFSET(0xB356120)
#define KDFFHMDFALG_FCHFEJKJJLB_OFFSET UNITYSDK_OFFSET(0xB359FE0)
#define KDFFHMDFALG_FDFJJABKFNM_OFFSET UNITYSDK_OFFSET(0xB35BF00)
#define KDFFHMDFALG_FGNFAAMCAFO_OFFSET UNITYSDK_OFFSET(0xB34ED00)
#define KDFFHMDFALG_FIBHBEDDFNE_OFFSET UNITYSDK_OFFSET(0xB35B8F0)
#define KDFFHMDFALG_FJBKBLPBPFK_OFFSET UNITYSDK_OFFSET(0xB356830)
#define KDFFHMDFALG_FPAJDFBBOJB_OFFSET UNITYSDK_OFFSET(0xB35A2E0)
#define KDFFHMDFALG_GET_ANCHORPLUGIN_OFFSET UNITYSDK_OFFSET(0xB35BFE0)
#define KDFFHMDFALG_GET_AREAIDAIRLOCK_OFFSET UNITYSDK_OFFSET(0xB35C290)
#define KDFFHMDFALG_GET_CURRENTAIRLOCK_OFFSET UNITYSDK_OFFSET(0xB35C2B0)
#define KDFFHMDFALG_GET_CURRENTPREPARINGROTATABLEREGION_OFFSET UNITYSDK_OFFSET(0xB35C0F0)
#define KDFFHMDFALG_GET_CURRENTSTEPONPOSESWITCHER_OFFSET UNITYSDK_OFFSET(0xB35C270)
#define KDFFHMDFALG_GET_DELAYUNLOADGROUPS_OFFSET UNITYSDK_OFFSET(0xB35C110)
#define KDFFHMDFALG_GET_ENTERONCEPREPAREREADY_OFFSET UNITYSDK_OFFSET(0xB35C120)
#define KDFFHMDFALG_GET_LITTLEGAMEPLUGIN_OFFSET UNITYSDK_OFFSET(0xB35C080)
#define KDFFHMDFALG_GET_NPCPLUGIN_OFFSET UNITYSDK_OFFSET(0xB35BFC0)
#define KDFFHMDFALG_GET_PLAYERPLUGIN_OFFSET UNITYSDK_OFFSET(0xB35C060)
#define KDFFHMDFALG_GET_POSESWITCHERPLUGIN_OFFSET UNITYSDK_OFFSET(0xB35BFA0)
#define KDFFHMDFALG_GET_POSETOLOAD_OFFSET UNITYSDK_OFFSET(0xB35C160)
#define KDFFHMDFALG_GET_PROPPLUGIN_OFFSET UNITYSDK_OFFSET(0xB35C020)
#define KDFFHMDFALG_GET_STAGEPLUGIN_OFFSET UNITYSDK_OFFSET(0xB35C040)
#define KDFFHMDFALG_GET_VOLUMEPLUGIN_OFFSET UNITYSDK_OFFSET(0xB35C000)
#define KDFFHMDFALG_GET_WILLBEDISPOSE_OFFSET UNITYSDK_OFFSET(0xB35C2D0)
#define KDFFHMDFALG_GFDLBPKGCMH_OFFSET UNITYSDK_OFFSET(0xB3571E0)
#define KDFFHMDFALG_GIODPFEBCDP_OFFSET UNITYSDK_OFFSET(0xB34F6C0)
#define KDFFHMDFALG_GLIPCDENCAN_OFFSET UNITYSDK_OFFSET(0xB35C0D0)
#define KDFFHMDFALG_GLKIAJKGHIK_OFFSET UNITYSDK_OFFSET(0xB359EF0)
#define KDFFHMDFALG_GLPGCELHAMD_OFFSET UNITYSDK_OFFSET(0xB34F630)
#define KDFFHMDFALG_GMMJBJIFIMN_OFFSET UNITYSDK_OFFSET(0xB3555A0)
#define KDFFHMDFALG_HBKEBLGCMFB_OFFSET UNITYSDK_OFFSET(0xB352E50)
#define KDFFHMDFALG_HEOJFKJIPHD_OFFSET UNITYSDK_OFFSET(0xB358660)
#define KDFFHMDFALG_HFGDHFKPKAB_OFFSET UNITYSDK_OFFSET(0xB34EE00)
#define KDFFHMDFALG_HHKFNLMCJFJ_OFFSET UNITYSDK_OFFSET(0xB35C0A0)
#define KDFFHMDFALG_HMBGHNBPIIH_OFFSET UNITYSDK_OFFSET(0xB359730)
#define KDFFHMDFALG_HOIOFOIGHCC_OFFSET UNITYSDK_OFFSET(0xB35B7B0)
#define KDFFHMDFALG_HOJEDGBJFEK_OFFSET UNITYSDK_OFFSET(0xB358520)
#define KDFFHMDFALG_IDMACDCKPAM_OFFSET UNITYSDK_OFFSET(0xB350E00)
#define KDFFHMDFALG_IHFBDJPHCHE_OFFSET UNITYSDK_OFFSET(0xB354390)
#define KDFFHMDFALG_IIOAHAMBMFC_OFFSET UNITYSDK_OFFSET(0xB35BE60)
#define KDFFHMDFALG_IKGGBHFGIJO_OFFSET UNITYSDK_OFFSET(0xB35BF90)
#define KDFFHMDFALG_ILAIOIMEBHE_OFFSET UNITYSDK_OFFSET(0xB3541A0)
#define KDFFHMDFALG_IOAANJIOILP_OFFSET UNITYSDK_OFFSET(0xB359A40)
#define KDFFHMDFALG_IOLGPPJEJJG_OFFSET UNITYSDK_OFFSET(0xB352C90)
#define KDFFHMDFALG_IOOCDHJBJDD_OFFSET UNITYSDK_OFFSET(0xB3569B0)
#define KDFFHMDFALG_IPPOKLJJCOJ_OFFSET UNITYSDK_OFFSET(0xB35C220)
#define KDFFHMDFALG_JBHIAMEKECC_OFFSET UNITYSDK_OFFSET(0xB3565F0)
#define KDFFHMDFALG_JGGKDGFCDJM_OFFSET UNITYSDK_OFFSET(0xB354FA0)
#define KDFFHMDFALG_JHEMECLGKCJ_OFFSET UNITYSDK_OFFSET(0xB34F220)
#define KDFFHMDFALG_JIGKEMLLIMP_OFFSET UNITYSDK_OFFSET(0xB358920)
#define KDFFHMDFALG_JJGJKIPIKLD_OFFSET UNITYSDK_OFFSET(0xB35B510)
#define KDFFHMDFALG_JJNPOGHBJHL_OFFSET UNITYSDK_OFFSET(0xB356560)
#define KDFFHMDFALG_KBMIPCLDGMB_OFFSET UNITYSDK_OFFSET(0xB350710)
#define KDFFHMDFALG_KBNOBPOIPDC_OFFSET UNITYSDK_OFFSET(0xB3562F0)
#define KDFFHMDFALG_KHIHMOHLKDB_OFFSET UNITYSDK_OFFSET(0xB34ED50)
#define KDFFHMDFALG_KJBDLIGHEMP_OFFSET UNITYSDK_OFFSET(0xB352EB0)
#define KDFFHMDFALG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB352410)
#define KDFFHMDFALG_KPMGMEPKOPL_OFFSET UNITYSDK_OFFSET(0xB34F610)
#define KDFFHMDFALG_LAOBIENEHJA_OFFSET UNITYSDK_OFFSET(0xB35B850)
#define KDFFHMDFALG_LEBFEIMNINI_OFFSET UNITYSDK_OFFSET(0xB35B4C0)
#define KDFFHMDFALG_LGDDHIBMJAC_OFFSET UNITYSDK_OFFSET(0xB35BF50)
#define KDFFHMDFALG_LGPHAMKOPMH_OFFSET UNITYSDK_OFFSET(0xB34E840)
#define KDFFHMDFALG_LJOBDKIHNFO_OFFSET UNITYSDK_OFFSET(0xB358570)
#define KDFFHMDFALG_LKKGJFCNFFB_OFFSET UNITYSDK_OFFSET(0xB35BB50)
#define KDFFHMDFALG_LMENGBAJEPN_OFFSET UNITYSDK_OFFSET(0xB353940)
#define KDFFHMDFALG_LOAPAPKNBLN_OFFSET UNITYSDK_OFFSET(0xB355200)
#define KDFFHMDFALG_LOPAIIPCKBH_OFFSET UNITYSDK_OFFSET(0xB3525D0)
#define KDFFHMDFALG_LPADDPPKIBI_OFFSET UNITYSDK_OFFSET(0xB353900)
#define KDFFHMDFALG_MDGFMCDIIAJ_OFFSET UNITYSDK_OFFSET(0xB35BA70)
#define KDFFHMDFALG_MDKKNDBDNNH_OFFSET UNITYSDK_OFFSET(0xB355080)
#define KDFFHMDFALG_MPKHDMMPBLN_OFFSET UNITYSDK_OFFSET(0xB353BB0)
#define KDFFHMDFALG_NBNPJCKDLMA_OFFSET UNITYSDK_OFFSET(0xB35C1D0)
#define KDFFHMDFALG_NIEJHHFFNPA_OFFSET UNITYSDK_OFFSET(0xB359180)
#define KDFFHMDFALG_NKGCICPPKIC_OFFSET UNITYSDK_OFFSET(0xB357240)
#define KDFFHMDFALG_ODOCAAIBOHP_OFFSET UNITYSDK_OFFSET(0xB35B800)
#define KDFFHMDFALG_OFHDOABJCLH_OFFSET UNITYSDK_OFFSET(0xB358330)
#define KDFFHMDFALG_OHDMFALPKDD_OFFSET UNITYSDK_OFFSET(0xB351C00)
#define KDFFHMDFALG_OHKKNAPILAN_OFFSET UNITYSDK_OFFSET(0xB34F9C0)
#define KDFFHMDFALG_OHPEPEBDLDO_OFFSET UNITYSDK_OFFSET(0xB3568F0)
#define KDFFHMDFALG_ONIKBKCFAMH_OFFSET UNITYSDK_OFFSET(0xB354D80)
#define KDFFHMDFALG_ONJGPHPDFEC_OFFSET UNITYSDK_OFFSET(0xB3566A0)
#define KDFFHMDFALG_OOFGAPAMMJJ_OFFSET UNITYSDK_OFFSET(0xB359460)
#define KDFFHMDFALG_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB3531F0)
#define KDFFHMDFALG_PBHCOGMEFJK_OFFSET UNITYSDK_OFFSET(0xB34F770)
#define KDFFHMDFALG_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB358610)
#define KDFFHMDFALG_PMMJGGKOFLI_OFFSET UNITYSDK_OFFSET(0xB358460)
#define KDFFHMDFALG_PNBCCHFNDAG_OFFSET UNITYSDK_OFFSET(0xB34F890)
#define KDFFHMDFALG_PPOOHINJMAA_OFFSET UNITYSDK_OFFSET(0xB35C2F0)
#define KDFFHMDFALG_SET_ANCHORPLUGIN_OFFSET UNITYSDK_OFFSET(0xB35BFF0)
#define KDFFHMDFALG_SET_AREAIDAIRLOCK_OFFSET UNITYSDK_OFFSET(0xB35C2A0)
#define KDFFHMDFALG_SET_CURRENTAIRLOCK_OFFSET UNITYSDK_OFFSET(0xB35C2C0)
#define KDFFHMDFALG_SET_CURRENTPREPARINGROTATABLEREGION_OFFSET UNITYSDK_OFFSET(0xB35C100)
#define KDFFHMDFALG_SET_CURRENTSTEPONPOSESWITCHER_OFFSET UNITYSDK_OFFSET(0xB35C280)
#define KDFFHMDFALG_SET_ENTERONCEPREPAREREADY_OFFSET UNITYSDK_OFFSET(0xB35C130)
#define KDFFHMDFALG_SET_LITTLEGAMEPLUGIN_OFFSET UNITYSDK_OFFSET(0xB35C090)
#define KDFFHMDFALG_SET_NPCPLUGIN_OFFSET UNITYSDK_OFFSET(0xB35BFD0)
#define KDFFHMDFALG_SET_PLAYERPLUGIN_OFFSET UNITYSDK_OFFSET(0xB35C070)
#define KDFFHMDFALG_SET_POSESWITCHERPLUGIN_OFFSET UNITYSDK_OFFSET(0xB35BFB0)
#define KDFFHMDFALG_SET_POSETOLOAD_OFFSET UNITYSDK_OFFSET(0xB35C170)
#define KDFFHMDFALG_SET_PROPPLUGIN_OFFSET UNITYSDK_OFFSET(0xB35C030)
#define KDFFHMDFALG_SET_STAGEPLUGIN_OFFSET UNITYSDK_OFFSET(0xB35C050)
#define KDFFHMDFALG_SET_VOLUMEPLUGIN_OFFSET UNITYSDK_OFFSET(0xB35C010)
#define KDFFHMDFALG_SET_WILLBEDISPOSE_OFFSET UNITYSDK_OFFSET(0xB35C2E0)

	class KDFFHMDFALG : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* EBKAJCCJFHK; // 0x10
		::ILAIBLNNLAO* _StagePlugin_k__BackingField; // 0x18
		::RPG::Client::AdventurePhase* DEIEJIOELMO; // 0x20
		::PEBBBNOOCFO* _NPCPlugin_k__BackingField; // 0x28
		::DLNCBOGAMFG* BAMECAHHEKC; // 0x30
		::DOPPIFIKBKI* _PropPlugin_k__BackingField; // 0x38
		::GIGPDDIPAPO* PPNEIMDNODI; // 0x40
		::GIPELBHHIHI* _VolumePlugin_k__BackingField; // 0x48
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* KMEGKLIBPGF; // 0x50
		::System::Collections::Generic::HashSet_1<::System::UInt32>* LLMNNJHPKHL; // 0x58
		::System::Collections::Generic::List_1<::System::UInt32>* _DelayUnloadGroups_k__BackingField; // 0x60
		::FBLPLPCCCNN* _AnchorPlugin_k__BackingField; // 0x68
		::DEKJNPKKLDA* _PoseSwitcherPlugin_k__BackingField; // 0x70
		::System::Collections::Generic::HashSet_1<::System::ValueTuple>* PMJJJIMJOGF; // 0x78
		::NMBOAAMFBCN* _LittleGamePlugin_k__BackingField; // 0x80
		::UnityEngine::GameObject* LMLAJIIPKNF; // 0x88
		::FNFAEAEOFAN* _PlayerPlugin_k__BackingField; // 0x90
		::RPG::Client::MapDef* KKKADHHBMLD; // 0x98
		::ELHDFFLAFGN* _CurrentStepOnPoseSwitcher_k__BackingField; // 0xA0
		::System::Collections::Generic::HashSet_1<::System::UInt32>* PEPJJHLAIAP; // 0xA8
		::RPG::Client::MapRotationInfo* OCDIENNPEDA; // 0xB0
		::KDFFHMDFALG_HBHDEEAKFAI PJBGJLFGBHN; // 0xB8
		::System::Collections::Generic::List_1<::NPEBLEKDAGI*>* LBOBLINPCFP; // 0x108
		::System::Nullable* _AreaIDAirlock_k__BackingField; // 0x110
		::UnityEngine::Bounds PJLCFCDFKOO; // 0x118
		::KDFFHMDFALG_RegionLoadStep PLCJBBFEFDL; // 0x130
		::UnityEngine::Vector3 JOJCNCAFKLD; // 0x134
		::RPG::Client::ReasonBool_1<::RPG::Client::DisableMapRotationVolumeInteractReason> OMCOFNDOKIM; // 0x140
		::System::Nullable* _CurrentAirlock_k__BackingField; // 0x148
		::System::Int32 _CurrentPreparingRotatableRegion_k__BackingField; // 0x150
		::System::Boolean _EnterOncePrepareReady_k__BackingField; // 0x154
		::System::Boolean GLBLGALGEDJ; // 0x155
		::System::Boolean IHHEEHEGNHJ; // 0x156
		::System::Boolean MIHPCPLPCIC; // 0x157
		::System::Nullable* FHNDMPFDHBJ; // 0x158
		::System::Byte _padding0[0x44];
		::System::UInt32 _PoseToLoad_k__BackingField; // 0x1A4
		::System::Int32 DHNLJDCCBGA; // 0x1A8
		::UnityEngine::Quaternion PACGNNNBPEI; // 0x1AC
		::UnityEngine::Matrix4x4 NLPCOLNIDCA; // 0x1BC
		::System::Int32 OLIFDKAFIIA; // 0x1FC
		::System::UInt32 MKMGAFCDNLG; // 0x200
		::System::Boolean EDCMADJOJDG; // 0x204
		::System::Boolean DOFJLCMOJML; // 0x205
		::System::Boolean _WillBeDispose_k__BackingField; // 0x206
		::System::Byte _padding1[0x1];
		::UnityEngine::Vector3 CNDNLEJMFAI; // 0x208
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_HNOKJEBJAOB()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)UnitySDK::FromName("", "KDFFHMDFALG")->GetStaticField(0x3AEC0);
		}

		// static const ::System::String* IGACHPMMIHH; // 0x0
		// static const ::System::Object DDOEFFBPIGA; // 0x0
		::System::Void _ctor(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + KDFFHMDFALG_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDFFHMDFALG_CCTOR_OFFSET))();
		}

		::System::Void LGPHAMKOPMH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KDFFHMDFALG_LGPHAMKOPMH_OFFSET))(this, a1);
		}

		::System::Void AADEGOPCGIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_AADEGOPCGIL_OFFSET))(this);
		}

		::System::Void AHJOLFDGMEP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDFFHMDFALG_AHJOLFDGMEP_OFFSET))(this, a1);
		}

		::System::Void JHEMECLGKCJ(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + KDFFHMDFALG_JHEMECLGKCJ_OFFSET))(this, a1);
		}

		::System::Boolean GLPGCELHAMD(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDFFHMDFALG_GLPGCELHAMD_OFFSET))(this, a1);
		}

		::System::Boolean AJFLKBOPKGN(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDFFHMDFALG_AJFLKBOPKGN_OFFSET))(this, a1);
		}

		::System::Boolean CJAJDEPGNME()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_CJAJDEPGNME_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_DISPOSE_OFFSET))(this);
		}

		::System::Void HBKEBLGCMFB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KDFFHMDFALG_HBKEBLGCMFB_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KDFFHMDFALG_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::RPG::GameCore::AnchorInfo* MDKKNDBDNNH(::System::String* a1)
		{
			return ((::RPG::GameCore::AnchorInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KDFFHMDFALG_MDKKNDBDNNH_OFFSET))(this, a1);
		}

		::System::Void PBHCOGMEFJK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDFFHMDFALG_PBHCOGMEFJK_OFFSET))(this, a1);
		}

		::System::Void OHKKNAPILAN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDFFHMDFALG_OHKKNAPILAN_OFFSET))(this, a1);
		}

		::System::Void EMDBDCAAMIA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDFFHMDFALG_EMDBDCAAMIA_OFFSET))(this, a1);
		}

		::System::Boolean PNBCCHFNDAG(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDFFHMDFALG_PNBCCHFNDAG_OFFSET))(this, a1);
		}

		::System::Void KBNOBPOIPDC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDFFHMDFALG_KBNOBPOIPDC_OFFSET))(this, a1);
		}

		::System::Void DGJBDLJIBLI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDFFHMDFALG_DGJBDLJIBLI_OFFSET))(this, a1);
		}

		::System::Boolean JBHIAMEKECC(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KDFFHMDFALG_JBHIAMEKECC_OFFSET))(this, a1);
		}

		::System::Boolean AEFIBHDHALI(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KDFFHMDFALG_AEFIBHDHALI_OFFSET))(this, a1);
		}

		::System::Void ONJGPHPDFEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_ONJGPHPDFEC_OFFSET))(this);
		}

		::System::Void DABFEGHFGCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_DABFEGHFGCM_OFFSET))(this);
		}

		::System::Void OHPEPEBDLDO(::System::Boolean a1, ::RPG::Client::DisableMapRotationVolumeInteractReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::DisableMapRotationVolumeInteractReason))((::PBYTE)hIl2Cpp + KDFFHMDFALG_OHPEPEBDLDO_OFFSET))(this, a1, a2);
		}

		::System::Void IOOCDHJBJDD(::System::Int32 a1, ::System::UInt32 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Quaternion a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + KDFFHMDFALG_IOOCDHJBJDD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void ACBOIIHCODH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_ACBOIIHCODH_OFFSET))(this);
		}

		::System::Void OFHDOABJCLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_OFHDOABJCLH_OFFSET))(this);
		}

		::System::Void PMMJGGKOFLI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_PMMJGGKOFLI_OFFSET))(this);
		}

		::System::Void HOJEDGBJFEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_HOJEDGBJFEK_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void FJBKBLPBPFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_FJBKBLPBPFK_OFFSET))(this);
		}

		::System::Void LOAPAPKNBLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_LOAPAPKNBLN_OFFSET))(this);
		}

		::System::Void HEOJFKJIPHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_HEOJFKJIPHD_OFFSET))(this);
		}

		::System::Boolean AMNPHFLAAHL(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + KDFFHMDFALG_AMNPHFLAAHL_OFFSET))(this, a1, a2);
		}

		::System::Boolean CJMHJFKPMGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_CJMHJFKPMGE_OFFSET))(this);
		}

		::System::Void NKGCICPPKIC(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + KDFFHMDFALG_NKGCICPPKIC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JIGKEMLLIMP(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::System::Nullable* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::System::Nullable*))((::PBYTE)hIl2Cpp + KDFFHMDFALG_JIGKEMLLIMP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OOFGAPAMMJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_OOFGAPAMMJJ_OFFSET))(this);
		}

		::System::Void HMBGHNBPIIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_HMBGHNBPIIH_OFFSET))(this);
		}

		::System::Void IOAANJIOILP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_IOAANJIOILP_OFFSET))(this);
		}

		::System::Void CPCDIIACIDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_CPCDIIACIDM_OFFSET))(this);
		}

		::System::Void IHFBDJPHCHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_IHFBDJPHCHE_OFFSET))(this);
		}

		::System::Void AFAKMDMGAKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_AFAKMDMGAKG_OFFSET))(this);
		}

		::System::Void CBOJOALADHH(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KDFFHMDFALG_CBOJOALADHH_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean FCHFEJKJJLB(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + KDFFHMDFALG_FCHFEJKJJLB_OFFSET))(a1, a2, a3);
		}

		static ::System::Single NIEJHHFFNPA(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Single(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + KDFFHMDFALG_NIEJHHFFNPA_OFFSET))(a1, a2, a3);
		}

		::UnityEngine::Quaternion GLKIAJKGHIK()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_GLKIAJKGHIK_OFFSET))(this);
		}

		::UnityEngine::Vector3 HFGDHFKPKAB()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_HFGDHFKPKAB_OFFSET))(this);
		}

		::ELHDFFLAFGN* FPAJDFBBOJB(::UnityEngine::Vector3 a1)
		{
			return ((::ELHDFFLAFGN*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KDFFHMDFALG_FPAJDFBBOJB_OFFSET))(this, a1);
		}

		::System::Boolean LMENGBAJEPN(::ELHDFFLAFGN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ELHDFFLAFGN*))((::PBYTE)hIl2Cpp + KDFFHMDFALG_LMENGBAJEPN_OFFSET))(this, a1);
		}

		::System::Void MPKHDMMPBLN(::UnityEngine::Vector3 a1, ::System::UInt32 a2, ::System::Boolean a3, ::ELHDFFLAFGN* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::UInt32, ::System::Boolean, ::ELHDFFLAFGN*))((::PBYTE)hIl2Cpp + KDFFHMDFALG_MPKHDMMPBLN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CJHAMCNENFE(::UnityEngine::Vector3 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::UInt32))((::PBYTE)hIl2Cpp + KDFFHMDFALG_CJHAMCNENFE_OFFSET))(this, a1, a2);
		}

		::System::Void ILAIOIMEBHE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KDFFHMDFALG_ILAIOIMEBHE_OFFSET))(this, a1);
		}

		::System::Void EKAFAGJEGAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_EKAFAGJEGAF_OFFSET))(this);
		}

		::System::Void JGGKDGFCDJM(::ELHDFFLAFGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELHDFFLAFGN*))((::PBYTE)hIl2Cpp + KDFFHMDFALG_JGGKDGFCDJM_OFFSET))(this, a1);
		}

		::System::Void GFDLBPKGCMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_GFDLBPKGCMH_OFFSET))(this);
		}

		::System::Void EEINDIPCJBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_EEINDIPCJBP_OFFSET))(this);
		}

		::System::Void IOLGPPJEJJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_IOLGPPJEJJG_OFFSET))(this);
		}

		::System::Void BEEFEKPELLK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KDFFHMDFALG_BEEFEKPELLK_OFFSET))(this, a1);
		}

		::System::Void LEBFEIMNINI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KDFFHMDFALG_LEBFEIMNINI_OFFSET))(this, a1);
		}

		::System::Void JJGJKIPIKLD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KDFFHMDFALG_JJGJKIPIKLD_OFFSET))(this, a1);
		}

		::System::Void BHMOCIOLNLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_BHMOCIOLNLH_OFFSET))(this);
		}

		::System::Void IDMACDCKPAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_IDMACDCKPAM_OFFSET))(this);
		}

		::System::Void BBGMPLMNOEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_BBGMPLMNOEA_OFFSET))(this);
		}

		::System::Void LJOBDKIHNFO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KDFFHMDFALG_LJOBDKIHNFO_OFFSET))(this, a1);
		}

		::System::Void JJNPOGHBJHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_JJNPOGHBJHL_OFFSET))(this);
		}

		::System::Void OHDMFALPKDD(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + KDFFHMDFALG_OHDMFALPKDD_OFFSET))(this, a1, a2);
		}

		::System::Void LOPAIIPCKBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_LOPAIIPCKBH_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>* DGLNLIPJJPC()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_DGLNLIPJJPC_OFFSET))(this);
		}

		::System::Void KJBDLIGHEMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_KJBDLIGHEMP_OFFSET))(this);
		}

		::System::Void MDGFMCDIIAJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KDFFHMDFALG_MDGFMCDIIAJ_OFFSET))(this, a1);
		}

		::System::Void AOMLFIENEAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_AOMLFIENEAE_OFFSET))(this);
		}

		::System::Void EBDCJIFBAAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_EBDCJIFBAAI_OFFSET))(this);
		}

		::System::Void GMMJBJIFIMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_GMMJBJIFIMN_OFFSET))(this);
		}

		::System::Void KBMIPCLDGMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_KBMIPCLDGMB_OFFSET))(this);
		}

		::System::Void FIBHBEDDFNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_FIBHBEDDFNE_OFFSET))(this);
		}

		::System::Void ONIKBKCFAMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_ONIKBKCFAMH_OFFSET))(this);
		}

		::System::Void AKADEEGPNGA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KDFFHMDFALG_AKADEEGPNGA_OFFSET))(this, a1);
		}

		::System::Void IIOAHAMBMFC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KDFFHMDFALG_IIOAHAMBMFC_OFFSET))(this, a1);
		}

		::System::Void FDFJJABKFNM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KDFFHMDFALG_FDFJJABKFNM_OFFSET))(this, a1);
		}

		::System::Void LKKGJFCNFFB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KDFFHMDFALG_LKKGJFCNFFB_OFFSET))(this, a1);
		}

		::UnityEngine::Matrix4x4 LGDDHIBMJAC()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_LGDDHIBMJAC_OFFSET))(this);
		}

		::RPG::Client::MapRotationInfo* EGDMENEEIIN()
		{
			return ((::RPG::Client::MapRotationInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_EGDMENEEIIN_OFFSET))(this);
		}

		::RPG::Client::MapDef* IKGGBHFGIJO()
		{
			return ((::RPG::Client::MapDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_IKGGBHFGIJO_OFFSET))(this);
		}

		::DEKJNPKKLDA* get_PoseSwitcherPlugin()
		{
			return ((::DEKJNPKKLDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_GET_POSESWITCHERPLUGIN_OFFSET))(this);
		}

		::System::Void set_PoseSwitcherPlugin(::DEKJNPKKLDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEKJNPKKLDA*))((::PBYTE)hIl2Cpp + KDFFHMDFALG_SET_POSESWITCHERPLUGIN_OFFSET))(this, a1);
		}

		::PEBBBNOOCFO* get_NPCPlugin()
		{
			return ((::PEBBBNOOCFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_GET_NPCPLUGIN_OFFSET))(this);
		}

		::System::Void set_NPCPlugin(::PEBBBNOOCFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEBBBNOOCFO*))((::PBYTE)hIl2Cpp + KDFFHMDFALG_SET_NPCPLUGIN_OFFSET))(this, a1);
		}

		::FBLPLPCCCNN* get_AnchorPlugin()
		{
			return ((::FBLPLPCCCNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_GET_ANCHORPLUGIN_OFFSET))(this);
		}

		::System::Void set_AnchorPlugin(::FBLPLPCCCNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBLPLPCCCNN*))((::PBYTE)hIl2Cpp + KDFFHMDFALG_SET_ANCHORPLUGIN_OFFSET))(this, a1);
		}

		::GIPELBHHIHI* get_VolumePlugin()
		{
			return ((::GIPELBHHIHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_GET_VOLUMEPLUGIN_OFFSET))(this);
		}

		::System::Void set_VolumePlugin(::GIPELBHHIHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIPELBHHIHI*))((::PBYTE)hIl2Cpp + KDFFHMDFALG_SET_VOLUMEPLUGIN_OFFSET))(this, a1);
		}

		::DOPPIFIKBKI* get_PropPlugin()
		{
			return ((::DOPPIFIKBKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_GET_PROPPLUGIN_OFFSET))(this);
		}

		::System::Void set_PropPlugin(::DOPPIFIKBKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOPPIFIKBKI*))((::PBYTE)hIl2Cpp + KDFFHMDFALG_SET_PROPPLUGIN_OFFSET))(this, a1);
		}

		::ILAIBLNNLAO* get_StagePlugin()
		{
			return ((::ILAIBLNNLAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_GET_STAGEPLUGIN_OFFSET))(this);
		}

		::System::Void set_StagePlugin(::ILAIBLNNLAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILAIBLNNLAO*))((::PBYTE)hIl2Cpp + KDFFHMDFALG_SET_STAGEPLUGIN_OFFSET))(this, a1);
		}

		::FNFAEAEOFAN* get_PlayerPlugin()
		{
			return ((::FNFAEAEOFAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_GET_PLAYERPLUGIN_OFFSET))(this);
		}

		::System::Void set_PlayerPlugin(::FNFAEAEOFAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNFAEAEOFAN*))((::PBYTE)hIl2Cpp + KDFFHMDFALG_SET_PLAYERPLUGIN_OFFSET))(this, a1);
		}

		::NMBOAAMFBCN* get_LittleGamePlugin()
		{
			return ((::NMBOAAMFBCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_GET_LITTLEGAMEPLUGIN_OFFSET))(this);
		}

		::System::Void set_LittleGamePlugin(::NMBOAAMFBCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMBOAAMFBCN*))((::PBYTE)hIl2Cpp + KDFFHMDFALG_SET_LITTLEGAMEPLUGIN_OFFSET))(this, a1);
		}

		::System::Boolean ENKPHKGECEJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_ENKPHKGECEJ_OFFSET))(this);
		}

		::System::Boolean GIODPFEBCDP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_GIODPFEBCDP_OFFSET))(this);
		}

		::System::UInt32 HHKFNLMCJFJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_HHKFNLMCJFJ_OFFSET))(this);
		}

		::System::Boolean LAOBIENEHJA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_LAOBIENEHJA_OFFSET))(this);
		}

		::UnityEngine::Vector3 GLIPCDENCAN()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_GLIPCDENCAN_OFFSET))(this);
		}

		::System::Int32 KPMGMEPKOPL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_KPMGMEPKOPL_OFFSET))(this);
		}

		::System::Int32 get_CurrentPreparingRotatableRegion()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_GET_CURRENTPREPARINGROTATABLEREGION_OFFSET))(this);
		}

		::System::Void set_CurrentPreparingRotatableRegion(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDFFHMDFALG_SET_CURRENTPREPARINGROTATABLEREGION_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_DelayUnloadGroups()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_GET_DELAYUNLOADGROUPS_OFFSET))(this);
		}

		::System::Boolean get_EnterOncePrepareReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_GET_ENTERONCEPREPAREREADY_OFFSET))(this);
		}

		::System::Void set_EnterOncePrepareReady(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KDFFHMDFALG_SET_ENTERONCEPREPAREREADY_OFFSET))(this, a1);
		}

		::System::Boolean LPADDPPKIBI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_LPADDPPKIBI_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* CKAJDHBKNKL()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_CKAJDHBKNKL_OFFSET))(this);
		}

		::System::Boolean HOIOFOIGHCC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_HOIOFOIGHCC_OFFSET))(this);
		}

		::System::Boolean CEIKNGGDEAO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_CEIKNGGDEAO_OFFSET))(this);
		}

		::System::Boolean KHIHMOHLKDB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_KHIHMOHLKDB_OFFSET))(this);
		}

		::System::UInt32 get_PoseToLoad()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_GET_POSETOLOAD_OFFSET))(this);
		}

		::System::Void set_PoseToLoad(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KDFFHMDFALG_SET_POSETOLOAD_OFFSET))(this, a1);
		}

		::System::Single BLDMLFEAAAL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_BLDMLFEAAAL_OFFSET))(this);
		}

		::System::UInt32 NBNPJCKDLMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_NBNPJCKDLMA_OFFSET))(this);
		}

		::System::UInt32 IPPOKLJJCOJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_IPPOKLJJCOJ_OFFSET))(this);
		}

		::ELHDFFLAFGN* get_CurrentStepOnPoseSwitcher()
		{
			return ((::ELHDFFLAFGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_GET_CURRENTSTEPONPOSESWITCHER_OFFSET))(this);
		}

		::System::Void set_CurrentStepOnPoseSwitcher(::ELHDFFLAFGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELHDFFLAFGN*))((::PBYTE)hIl2Cpp + KDFFHMDFALG_SET_CURRENTSTEPONPOSESWITCHER_OFFSET))(this, a1);
		}

		::System::Boolean ODOCAAIBOHP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_ODOCAAIBOHP_OFFSET))(this);
		}

		::System::Nullable* get_AreaIDAirlock()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_GET_AREAIDAIRLOCK_OFFSET))(this);
		}

		::System::Void set_AreaIDAirlock(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + KDFFHMDFALG_SET_AREAIDAIRLOCK_OFFSET))(this, a1);
		}

		::System::Nullable* get_CurrentAirlock()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_GET_CURRENTAIRLOCK_OFFSET))(this);
		}

		::System::Void set_CurrentAirlock(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + KDFFHMDFALG_SET_CURRENTAIRLOCK_OFFSET))(this, a1);
		}

		::System::Boolean get_WillBeDispose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_GET_WILLBEDISPOSE_OFFSET))(this);
		}

		::System::Void set_WillBeDispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KDFFHMDFALG_SET_WILLBEDISPOSE_OFFSET))(this, a1);
		}

		::System::Boolean FGNFAAMCAFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_FGNFAAMCAFO_OFFSET))(this);
		}

		::System::Boolean EOHCENEAPMD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_EOHCENEAPMD_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 PPOOHINJMAA()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_PPOOHINJMAA_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* BKDHEODKODF()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG_BKDHEODKODF_OFFSET))(this);
		}

	};
