#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AEKIOONKCIB.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/BossSkillViewType.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/TeamTowersBrickSpecialViewType.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/TeamTowersCoreGameState.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/TeamTowersCorePlayerDrawReason.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/TeamTowersStatType.h"
#include "unitysdk/RPG/GameCore/TeamTowersPlayerModifierType.h"
#include "unitysdk/RPG/GameCore/TeamTowersStatisticType.h"
#include "unitysdk/OEOFKECAJEB.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Nullable_1.h"
class AHELAPHJAHJ;
class ALFCGCNDMIA;
class BGGGFKNDEMJ;
class BGIMDEOHDHK;
class DJLLENLBFAD;
class ENAHFCIJKPK;
class FKIAHEEJGKH;
class GHADLBDBHNA;
class GKJPOPDBJCG;
class HNLKNLJBHDD;
class IAANKDNLKHL;
class JFAIGANLDBK;
class JPGJGHMCCJP;
class KIPOJIOCDKF;
class MDJMFENLDJL;
class MOGEAODEJOD;
class OCCHJLMKMFL;
class PCCLCFGOFEE;
namespace RPG::GameCore { class TeamTowersBossConfig; }
namespace RPG::GameCore { class TeamTowersSkillConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BDPDNAECJII_ABIEMACLLAE_OFFSET UNITYSDK_OFFSET(0x1C5B5660)
#define BDPDNAECJII_ABJJCMEPIDE_OFFSET UNITYSDK_OFFSET(0x1C5AFD60)
#define BDPDNAECJII_ADD_ONBRICKSPAWNED_OFFSET UNITYSDK_OFFSET(0x1C5A3DA0)
#define BDPDNAECJII_ADD_ONPLAYERBRICKMODIFIERTRIGGERED_OFFSET UNITYSDK_OFFSET(0x1C5A4140)
#define BDPDNAECJII_ADD_ONPLAYERPLACEDBRICK_OFFSET UNITYSDK_OFFSET(0x1C5A3CC0)
#define BDPDNAECJII_ADD_ONPLAYERREACHHEIGHTLINE_OFFSET UNITYSDK_OFFSET(0x1C5A3EA0)
#define BDPDNAECJII_ADD_ONPLAYERREVIVE_OFFSET UNITYSDK_OFFSET(0x1C5A3F80)
#define BDPDNAECJII_ADD_ONPLAYERSWITCHBOSSPERFORMANCEFINISHED_OFFSET UNITYSDK_OFFSET(0x1C5A4060)
#define BDPDNAECJII_ADFCONPNKDJ_OFFSET UNITYSDK_OFFSET(0x1C5B3B90)
#define BDPDNAECJII_ADHFOJPBLKE_OFFSET UNITYSDK_OFFSET(0x1C5A60A0)
#define BDPDNAECJII_ADPOCFKBKPC_OFFSET UNITYSDK_OFFSET(0x1C5AC770)
#define BDPDNAECJII_AHHPLKCCKBB_OFFSET UNITYSDK_OFFSET(0x1C5B5D20)
#define BDPDNAECJII_AKEMNGIEHLG_OFFSET UNITYSDK_OFFSET(0x1C5A4C40)
#define BDPDNAECJII_AMEGAEKKIJA_OFFSET UNITYSDK_OFFSET(0x1C5B33E0)
#define BDPDNAECJII_ANDAAIEFJIC_OFFSET UNITYSDK_OFFSET(0x1C5A5440)
#define BDPDNAECJII_APPFECHNOMI_OFFSET UNITYSDK_OFFSET(0x1C5AF3A0)
#define BDPDNAECJII_BADJCIBELAP_OFFSET UNITYSDK_OFFSET(0x1C5A5880)
#define BDPDNAECJII_BBBCJHMBLLE_OFFSET UNITYSDK_OFFSET(0x1C5A67E0)
#define BDPDNAECJII_BBFOHBEDELG_OFFSET UNITYSDK_OFFSET(0x1C5A6710)
#define BDPDNAECJII_BDMLCHCJFHG_OFFSET UNITYSDK_OFFSET(0x1C5B5470)
#define BDPDNAECJII_BFIJJDKOJOH_OFFSET UNITYSDK_OFFSET(0x1C5A7CF0)
#define BDPDNAECJII_BGGBCGDCJLL_OFFSET UNITYSDK_OFFSET(0x1C5A81B0)
#define BDPDNAECJII_BNOOHFBKJFC_OFFSET UNITYSDK_OFFSET(0x1C5B3B20)
#define BDPDNAECJII_BPAKAMFMBGB_OFFSET UNITYSDK_OFFSET(0x1C5A63D0)
#define BDPDNAECJII_BPPKJBLFPNM_OFFSET UNITYSDK_OFFSET(0x1C5B2410)
#define BDPDNAECJII_CBCHIHEJGEN_OFFSET UNITYSDK_OFFSET(0x1C5B6500)
#define BDPDNAECJII_CGIFAKIIDID_OFFSET UNITYSDK_OFFSET(0x1C5A6670)
#define BDPDNAECJII_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5B3D20)
#define BDPDNAECJII_DAIPJJKMLCK_OFFSET UNITYSDK_OFFSET(0x1C5A6CF0)
#define BDPDNAECJII_DFBKINNEKJO_OFFSET UNITYSDK_OFFSET(0x1C5A5D30)
#define BDPDNAECJII_DGGNLFFCANO_OFFSET UNITYSDK_OFFSET(0x1C5A6AB0)
#define BDPDNAECJII_DJJBFNDDMNM_OFFSET UNITYSDK_OFFSET(0x1C5B6340)
#define BDPDNAECJII_DKCCAEDJCFC_OFFSET UNITYSDK_OFFSET(0x1C5ACB10)
#define BDPDNAECJII_DMBOPKAIEAI_OFFSET UNITYSDK_OFFSET(0x1C5A54C0)
#define BDPDNAECJII_DOAPMPMBLGO_OFFSET UNITYSDK_OFFSET(0x1C5AAA60)
#define BDPDNAECJII_EBKAKPCHOFC_OFFSET UNITYSDK_OFFSET(0x1C5A5460)
#define BDPDNAECJII_ECLJLADGIEN_OFFSET UNITYSDK_OFFSET(0x1C5A4220)
#define BDPDNAECJII_EGBBOLHPCOE_OFFSET UNITYSDK_OFFSET(0x1C5AA6C0)
#define BDPDNAECJII_EGBPHAIAIDN_OFFSET UNITYSDK_OFFSET(0x1C5A5380)
#define BDPDNAECJII_EGCBPLECJMC_OFFSET UNITYSDK_OFFSET(0x1C5AA530)
#define BDPDNAECJII_EHIPFLAJKKO_OFFSET UNITYSDK_OFFSET(0x1C5B00B0)
#define BDPDNAECJII_EHNIBALCKFG_OFFSET UNITYSDK_OFFSET(0x1C5AE6E0)
#define BDPDNAECJII_EJAHEDDMHCF_OFFSET UNITYSDK_OFFSET(0x1C5B40F0)
#define BDPDNAECJII_EKGIJDIDFFD_OFFSET UNITYSDK_OFFSET(0x1C5B5570)
#define BDPDNAECJII_FDMDGJAKCGE_OFFSET UNITYSDK_OFFSET(0x1C5B6280)
#define BDPDNAECJII_FELOGPCJEPJ_OFFSET UNITYSDK_OFFSET(0x1C5B52F0)
#define BDPDNAECJII_FENHKNANOFA_OFFSET UNITYSDK_OFFSET(0x1C5A6ED0)
#define BDPDNAECJII_FGBNDALJCKP_OFFSET UNITYSDK_OFFSET(0x1C5B0BD0)
#define BDPDNAECJII_FHICJKDMIMJ_OFFSET UNITYSDK_OFFSET(0x1C5AFBC0)
#define BDPDNAECJII_FINHDFBPLPJ_OFFSET UNITYSDK_OFFSET(0x1C5AD210)
#define BDPDNAECJII_FJKFLJCMEAB_OFFSET UNITYSDK_OFFSET(0x1C5B64B0)
#define BDPDNAECJII_FKJEPBFJCGK_OFFSET UNITYSDK_OFFSET(0x1C5B45F0)
#define BDPDNAECJII_FLGDIHPNFBJ_OFFSET UNITYSDK_OFFSET(0x1C5B5790)
#define BDPDNAECJII_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0x1C5B4910)
#define BDPDNAECJII_GBFOCPBCPDA_OFFSET UNITYSDK_OFFSET(0x1C5B48A0)
#define BDPDNAECJII_GET_AUTOTESTMODE_OFFSET UNITYSDK_OFFSET(0x1C5B0A60)
#define BDPDNAECJII_GFIECJOEEEI_OFFSET UNITYSDK_OFFSET(0x1C5AB6F0)
#define BDPDNAECJII_GHPMAFAJPDH_OFFSET UNITYSDK_OFFSET(0x1C5B54F0)
#define BDPDNAECJII_GJJCKPBHGMO_OFFSET UNITYSDK_OFFSET(0x1C5B5730)
#define BDPDNAECJII_GKLJEEMGKOA_OFFSET UNITYSDK_OFFSET(0x1C5B1390)
#define BDPDNAECJII_GLLBIEJDPFG_OFFSET UNITYSDK_OFFSET(0x1C5B0E30)
#define BDPDNAECJII_GLOKCFDHAGC_OFFSET UNITYSDK_OFFSET(0x1C5ACBF0)
#define BDPDNAECJII_GNHDBDEKKJK_OFFSET UNITYSDK_OFFSET(0x1C5A5450)
#define BDPDNAECJII_GNNNEFCBMJN_OFFSET UNITYSDK_OFFSET(0x1C5B5960)
#define BDPDNAECJII_GPEMNJGGNPN_OFFSET UNITYSDK_OFFSET(0x1C5A6F20)
#define BDPDNAECJII_HDHGINJAGGI_OFFSET UNITYSDK_OFFSET(0x1C5B4B60)
#define BDPDNAECJII_HFOCNAGNFOD_OFFSET UNITYSDK_OFFSET(0x1C5B5F10)
#define BDPDNAECJII_HIBIPOKIDID_OFFSET UNITYSDK_OFFSET(0x1C5B2EA0)
#define BDPDNAECJII_HLPKKGKFIKB_OFFSET UNITYSDK_OFFSET(0x1C5AF280)
#define BDPDNAECJII_HMLLFDKMLPM_OFFSET UNITYSDK_OFFSET(0x1C5B1D40)
#define BDPDNAECJII_IBDMAKEGHLK_OFFSET UNITYSDK_OFFSET(0x1C5B0D60)
#define BDPDNAECJII_IELHOEAKDPB_OFFSET UNITYSDK_OFFSET(0x1C5A7550)
#define BDPDNAECJII_IFMAHFKODAE_OFFSET UNITYSDK_OFFSET(0x1C5AD7D0)
#define BDPDNAECJII_IGADFALLLEO_OFFSET UNITYSDK_OFFSET(0x1C5A5FD0)
#define BDPDNAECJII_IHAHNLANJIP_OFFSET UNITYSDK_OFFSET(0x1C5B14B0)
#define BDPDNAECJII_ILFOFHEDOHC_OFFSET UNITYSDK_OFFSET(0x1C5AAEB0)
#define BDPDNAECJII_IOEJBHHLMCE_OFFSET UNITYSDK_OFFSET(0x1C5B6010)
#define BDPDNAECJII_JENFOBGJNMG_OFFSET UNITYSDK_OFFSET(0x1C5A5280)
#define BDPDNAECJII_JICCIGGDNKB_OFFSET UNITYSDK_OFFSET(0x1C5B0470)
#define BDPDNAECJII_JILMGOOCIGN_OFFSET UNITYSDK_OFFSET(0x1C5B5380)
#define BDPDNAECJII_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C5B42F0)
#define BDPDNAECJII_JMMDCFDPHCI_OFFSET UNITYSDK_OFFSET(0x1C5A53D0)
#define BDPDNAECJII_KKLKAOCLEHA_OFFSET UNITYSDK_OFFSET(0x1C5AD750)
#define BDPDNAECJII_KLDAKHKGIMF_OFFSET UNITYSDK_OFFSET(0x1C5A6020)
#define BDPDNAECJII_KMEOKNCKKCD_OFFSET UNITYSDK_OFFSET(0x1C5AD590)
#define BDPDNAECJII_KOLALIMAOCM_OFFSET UNITYSDK_OFFSET(0x1C5AE980)
#define BDPDNAECJII_LCMJIKOKEKH_OFFSET UNITYSDK_OFFSET(0x1C5A4FB0)
#define BDPDNAECJII_LEACKBOEKHN_OFFSET UNITYSDK_OFFSET(0x1C5AB000)
#define BDPDNAECJII_LFABFFFCAII_OFFSET UNITYSDK_OFFSET(0x1C5A6780)
#define BDPDNAECJII_LHFOOJOHMHK_OFFSET UNITYSDK_OFFSET(0x1C5B6460)
#define BDPDNAECJII_LKBJLFDINBL_OFFSET UNITYSDK_OFFSET(0x1C5ABA80)
#define BDPDNAECJII_LNMJLGHLGBD_OFFSET UNITYSDK_OFFSET(0x1C5AADA0)
#define BDPDNAECJII_LPHPBIJDAAC_OFFSET UNITYSDK_OFFSET(0x1C5B2BA0)
#define BDPDNAECJII_MDELKGAPFFF_OFFSET UNITYSDK_OFFSET(0x1C5AEE10)
#define BDPDNAECJII_MDOPNMNMIIG_OFFSET UNITYSDK_OFFSET(0x1C5AF460)
#define BDPDNAECJII_MEHPLGILJLF_OFFSET UNITYSDK_OFFSET(0x1C5B5230)
#define BDPDNAECJII_MGIIPCABONF_OFFSET UNITYSDK_OFFSET(0x1C5AD8E0)
#define BDPDNAECJII_MLAFLGNKIAH_OFFSET UNITYSDK_OFFSET(0x1C5A6B10)
#define BDPDNAECJII_MMFPOOMOECG_OFFSET UNITYSDK_OFFSET(0x1C5A65A0)
#define BDPDNAECJII_NAFJICONCNI_OFFSET UNITYSDK_OFFSET(0x1C5A5330)
#define BDPDNAECJII_NAFPKLGNDPD_OFFSET UNITYSDK_OFFSET(0x1C5A9BE0)
#define BDPDNAECJII_NCPHNMDPOHN_OFFSET UNITYSDK_OFFSET(0x1C5B5D90)
#define BDPDNAECJII_NEFKOHAJNIK_OFFSET UNITYSDK_OFFSET(0x1C5A68A0)
#define BDPDNAECJII_NHBMGENFMNI_OFFSET UNITYSDK_OFFSET(0x1C5A57F0)
#define BDPDNAECJII_NNHGPJILKAE_OFFSET UNITYSDK_OFFSET(0x1C5A9A50)
#define BDPDNAECJII_NPDMEMDEGDK_OFFSET UNITYSDK_OFFSET(0x1C5AF5D0)
#define BDPDNAECJII_OCLBMMNNMFC_OFFSET UNITYSDK_OFFSET(0x1C5A49F0)
#define BDPDNAECJII_OCOACGHIKDM_OFFSET UNITYSDK_OFFSET(0x1C5B4FC0)
#define BDPDNAECJII_OFJAOIBMJEB_OFFSET UNITYSDK_OFFSET(0x1C5A69A0)
#define BDPDNAECJII_OGGOOBHDLAP_OFFSET UNITYSDK_OFFSET(0x1C5AA290)
#define BDPDNAECJII_OGPKKFDLCJJ_OFFSET UNITYSDK_OFFSET(0x1C5AB590)
#define BDPDNAECJII_OILMMENDPAI_OFFSET UNITYSDK_OFFSET(0x1C5B0A80)
#define BDPDNAECJII_OKEEBJMDJCD_OFFSET UNITYSDK_OFFSET(0x1C5AB8F0)
#define BDPDNAECJII_ONEGCHBEDBE_OFFSET UNITYSDK_OFFSET(0x1C5B1F20)
#define BDPDNAECJII_OPMKGNEAAKB_OFFSET UNITYSDK_OFFSET(0x1C5AF720)
#define BDPDNAECJII_PAFKJAHJMCE_OFFSET UNITYSDK_OFFSET(0x1C5B56C0)
#define BDPDNAECJII_PCGKOPOPNMB_OFFSET UNITYSDK_OFFSET(0x1C5A9F50)
#define BDPDNAECJII_PEBFFIGDDOP_OFFSET UNITYSDK_OFFSET(0x1C5B2280)
#define BDPDNAECJII_PFPDPNAKNJE_OFFSET UNITYSDK_OFFSET(0x1C5ABCC0)
#define BDPDNAECJII_PIPJICIPLJJ_OFFSET UNITYSDK_OFFSET(0x1C5AF110)
#define BDPDNAECJII_PLNBAIIENDH_OFFSET UNITYSDK_OFFSET(0x1C5A4A60)
#define BDPDNAECJII_PPAONBLGDJC_OFFSET UNITYSDK_OFFSET(0x1C5B0F00)
#define BDPDNAECJII_REMOVE_ONBRICKSPAWNED_OFFSET UNITYSDK_OFFSET(0x1C5A3E20)
#define BDPDNAECJII_REMOVE_ONPLAYERBRICKMODIFIERTRIGGERED_OFFSET UNITYSDK_OFFSET(0x1C5A41B0)
#define BDPDNAECJII_REMOVE_ONPLAYERPLACEDBRICK_OFFSET UNITYSDK_OFFSET(0x1C5A3D30)
#define BDPDNAECJII_REMOVE_ONPLAYERREACHHEIGHTLINE_OFFSET UNITYSDK_OFFSET(0x1C5A3F10)
#define BDPDNAECJII_REMOVE_ONPLAYERREVIVE_OFFSET UNITYSDK_OFFSET(0x1C5A3FF0)
#define BDPDNAECJII_REMOVE_ONPLAYERSWITCHBOSSPERFORMANCEFINISHED_OFFSET UNITYSDK_OFFSET(0x1C5A40D0)
#define BDPDNAECJII_SET_AUTOTESTMODE_OFFSET UNITYSDK_OFFSET(0x1C5B0A70)
#define BDPDNAECJII___ONENTERGAMESTATE_B__71_0_OFFSET UNITYSDK_OFFSET(0x1C5B6520)
#define BDPDNAECJII___ONENTERGAMESTATE_B__71_1_OFFSET UNITYSDK_OFFSET(0x1C5B69F0)
#define BDPDNAECJII___ONENTERGAMESTATE_B__71_2_OFFSET UNITYSDK_OFFSET(0x1C5B6E50)
#define BDPDNAECJII___ONENTERGAMESTATE_B__71_3_OFFSET UNITYSDK_OFFSET(0x1C5B6E60)
#define BDPDNAECJII___REGISTERSTATCHANGECALLBACK_B__49_0_OFFSET UNITYSDK_OFFSET(0x1C5B6510)

inline static constexpr unsigned int BDPDNAECJII_TypeDefinitionIndex = 37159;

	class BDPDNAECJII : public ::AEKIOONKCIB
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::JPGJGHMCCJP*>* BLLBMMGDDKB; // 0xD0
		::OCCHJLMKMFL* BAIOHPEIIHI; // 0xD8
		::BGIMDEOHDHK* BCEAONDPAPJ; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* KIHCNABFGKL; // 0xE8
		::BGIMDEOHDHK* MGELILGOGFH; // 0xF0
		::System::Collections::Generic::HashSet_1<::System::UInt32>* AJDBLAEFBKK; // 0xF8
		::System::Action_1<::System::UInt32>* OnPlayerBrickModifierTriggered; // 0x100
		::RPG::GameCore::TeamTowersBossConfig* DCOOJLFHONK; // 0x108
		::AHELAPHJAHJ* GICHGNGMBGD; // 0x110
		::HNLKNLJBHDD* NKIKPPOODKK; // 0x118
		::System::Collections::Generic::HashSet_1<::System::UInt32>* GIMKNOBOPJK; // 0x120
		::System::Action_1<::System::UInt32>* OnPlayerReachHeightLine; // 0x128
		::KIPOJIOCDKF* KDKDEGIECIF; // 0x130
		::System::Collections::Generic::List_1<::System::UInt32>* HHIBFCCBLGB; // 0x138
		::ENAHFCIJKPK* DNEJHIDCEAH; // 0x140
		::JFAIGANLDBK* KEPDPIDPEHL; // 0x148
		::System::Action_1<::System::UInt32>* OnPlayerPlacedBrick; // 0x150
		::MOGEAODEJOD* BKIFMPHBIAK; // 0x158
		::ALFCGCNDMIA* JBMDOCDAKMH; // 0x160
		::GKJPOPDBJCG* EPBBJGMOMGI; // 0x168
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::IAANKDNLKHL*>* IGIDDDJEOFB; // 0x170
		::System::Action_1<::System::UInt32>* OnPlayerRevive; // 0x178
		::PCCLCFGOFEE* KOIDLDFAKEP; // 0x180
		::System::Action_1<::HNLKNLJBHDD*>* OnBrickSpawned; // 0x188
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::HNLKNLJBHDD*>* LHKFJMJONMN; // 0x190
		::System::Action_1<::System::UInt32>* OnPlayerSwitchBossPerformanceFinished; // 0x198
		::HNLKNLJBHDD* CPFJKLOMIKF; // 0x1A0
		::System::UInt32 EFDMEFMJMGG; // 0x1A8
		::System::UInt32 ONJLDCPDKFD; // 0x1AC
		::System::Double LHBMJBOIJPO; // 0x1B0
		::System::UInt32 IFPPHFKOCNN; // 0x1B8
		::System::Boolean GOFKAELMOPB; // 0x1BC
		::System::Boolean IHNLADKLNOP; // 0x1BD
		::System::Boolean _AutoTestMode_k__BackingField; // 0x1BE
		::System::Boolean COJGHGJDOOO; // 0x1BF
		::System::Boolean EDCADJEOJMM; // 0x1C0
		// static const ::System::Object OHCFNLGDHIC; // 0x0
		// static const ::System::Object LBDKPCJDCJN; // 0x0
		// static const ::System::Object MONAPHMNAGP; // 0x0
		::System::Void _ctor(::KIPOJIOCDKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIPOJIOCDKF*))((::PBYTE)hIl2Cpp + BDPDNAECJII_CTOR_OFFSET))(this, a1);
		}

		::System::Void add_OnPlayerPlacedBrick(::System::Action_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + BDPDNAECJII_ADD_ONPLAYERPLACEDBRICK_OFFSET))(this, a1);
		}

		::System::Void remove_OnPlayerPlacedBrick(::System::Action_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + BDPDNAECJII_REMOVE_ONPLAYERPLACEDBRICK_OFFSET))(this, a1);
		}

		::System::Void add_OnBrickSpawned(::System::Action_1<::HNLKNLJBHDD*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::HNLKNLJBHDD*>*))((::PBYTE)hIl2Cpp + BDPDNAECJII_ADD_ONBRICKSPAWNED_OFFSET))(this, a1);
		}

		::System::Void remove_OnBrickSpawned(::System::Action_1<::HNLKNLJBHDD*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::HNLKNLJBHDD*>*))((::PBYTE)hIl2Cpp + BDPDNAECJII_REMOVE_ONBRICKSPAWNED_OFFSET))(this, a1);
		}

		::System::Void add_OnPlayerReachHeightLine(::System::Action_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + BDPDNAECJII_ADD_ONPLAYERREACHHEIGHTLINE_OFFSET))(this, a1);
		}

		::System::Void remove_OnPlayerReachHeightLine(::System::Action_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + BDPDNAECJII_REMOVE_ONPLAYERREACHHEIGHTLINE_OFFSET))(this, a1);
		}

		::System::Void add_OnPlayerRevive(::System::Action_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + BDPDNAECJII_ADD_ONPLAYERREVIVE_OFFSET))(this, a1);
		}

		::System::Void remove_OnPlayerRevive(::System::Action_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + BDPDNAECJII_REMOVE_ONPLAYERREVIVE_OFFSET))(this, a1);
		}

		::System::Void add_OnPlayerSwitchBossPerformanceFinished(::System::Action_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + BDPDNAECJII_ADD_ONPLAYERSWITCHBOSSPERFORMANCEFINISHED_OFFSET))(this, a1);
		}

		::System::Void remove_OnPlayerSwitchBossPerformanceFinished(::System::Action_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + BDPDNAECJII_REMOVE_ONPLAYERSWITCHBOSSPERFORMANCEFINISHED_OFFSET))(this, a1);
		}

		::System::Void add_OnPlayerBrickModifierTriggered(::System::Action_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + BDPDNAECJII_ADD_ONPLAYERBRICKMODIFIERTRIGGERED_OFFSET))(this, a1);
		}

		::System::Void remove_OnPlayerBrickModifierTriggered(::System::Action_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + BDPDNAECJII_REMOVE_ONPLAYERBRICKMODIFIERTRIGGERED_OFFSET))(this, a1);
		}

		::System::Void ECLJLADGIEN(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + BDPDNAECJII_ECLJLADGIEN_OFFSET))(this, a1, a2);
		}

		::HNLKNLJBHDD* JENFOBGJNMG(::System::UInt32 a1)
		{
			return ((::HNLKNLJBHDD*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPDNAECJII_JENFOBGJNMG_OFFSET))(this, a1);
		}

		::KIPOJIOCDKF* NAFJICONCNI()
		{
			return ((::KIPOJIOCDKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_NAFJICONCNI_OFFSET))(this);
		}

		::PCCLCFGOFEE* EGBPHAIAIDN()
		{
			return ((::PCCLCFGOFEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_EGBPHAIAIDN_OFFSET))(this);
		}

		::System::Void JMMDCFDPHCI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPDNAECJII_JMMDCFDPHCI_OFFSET))(this, a1);
		}

		::GKJPOPDBJCG* ANDAAIEFJIC()
		{
			return ((::GKJPOPDBJCG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_ANDAAIEFJIC_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::HNLKNLJBHDD*>* GNHDBDEKKJK()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::HNLKNLJBHDD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_GNHDBDEKKJK_OFFSET))(this);
		}

		::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersCoreGameState EBKAKPCHOFC()
		{
			return ((::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersCoreGameState(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_EBKAKPCHOFC_OFFSET))(this);
		}

		::System::Boolean DMBOPKAIEAI(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPDNAECJII_DMBOPKAIEAI_OFFSET))(this, a1);
		}

		::System::Boolean DFBKINNEKJO(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPDNAECJII_DFBKINNEKJO_OFFSET))(this, a1);
		}

		::HNLKNLJBHDD* IGADFALLLEO()
		{
			return ((::HNLKNLJBHDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_IGADFALLLEO_OFFSET))(this);
		}

		::System::Void LCMJIKOKEKH(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + BDPDNAECJII_LCMJIKOKEKH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ADHFOJPBLKE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPDNAECJII_ADHFOJPBLKE_OFFSET))(this, a1);
		}

		::System::Void BPAKAMFMBGB(::System::UInt32 a1, ::RPG::GameCore::TeamTowersPlayerModifierType a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::TeamTowersPlayerModifierType, ::System::Boolean))((::PBYTE)hIl2Cpp + BDPDNAECJII_BPAKAMFMBGB_OFFSET))(this, a1, a2, a3);
		}

		::IAANKDNLKHL* MMFPOOMOECG(::System::UInt32 a1)
		{
			return ((::IAANKDNLKHL*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPDNAECJII_MMFPOOMOECG_OFFSET))(this, a1);
		}

		::System::UInt32 CGIFAKIIDID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPDNAECJII_CGIFAKIIDID_OFFSET))(this, a1);
		}

		::System::Boolean OCLBMMNNMFC(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPDNAECJII_OCLBMMNNMFC_OFFSET))(this, a1);
		}

		::System::Boolean BBFOHBEDELG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_BBFOHBEDELG_OFFSET))(this);
		}

		::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType LFABFFFCAII(::RPG::GameCore::TeamTowersStatisticType a1)
		{
			return ((::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType(*)(::PVOID, ::RPG::GameCore::TeamTowersStatisticType))((::PBYTE)hIl2Cpp + BDPDNAECJII_LFABFFFCAII_OFFSET))(this, a1);
		}

		::System::Void BBBCJHMBLLE(::System::Single a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + BDPDNAECJII_BBBCJHMBLLE_OFFSET))(this, a1, a2);
		}

		::System::Void NEFKOHAJNIK(::MDJMFENLDJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDJMFENLDJL*))((::PBYTE)hIl2Cpp + BDPDNAECJII_NEFKOHAJNIK_OFFSET))(this, a1);
		}

		::System::Void OFJAOIBMJEB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPDNAECJII_OFJAOIBMJEB_OFFSET))(this, a1);
		}

		::System::Void DGGNLFFCANO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BDPDNAECJII_DGGNLFFCANO_OFFSET))(this, a1);
		}

		::ENAHFCIJKPK* FENHKNANOFA()
		{
			return ((::ENAHFCIJKPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_FENHKNANOFA_OFFSET))(this);
		}

		::System::Void GPEMNJGGNPN(::System::UInt32 a1, ::RPG::GameCore::TeamTowersBossConfig* a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::TeamTowersBossConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BDPDNAECJII_GPEMNJGGNPN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void IELHOEAKDPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_IELHOEAKDPB_OFFSET))(this);
		}

		::System::Void BGGBCGDCJLL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPDNAECJII_BGGBCGDCJLL_OFFSET))(this, a1);
		}

		::System::Void OGGOOBHDLAP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPDNAECJII_OGGOOBHDLAP_OFFSET))(this, a1);
		}

		::System::Void DOAPMPMBLGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_DOAPMPMBLGO_OFFSET))(this);
		}

		::System::Void EGBBOLHPCOE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPDNAECJII_EGBBOLHPCOE_OFFSET))(this, a1);
		}

		::System::Void ILFOFHEDOHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_ILFOFHEDOHC_OFFSET))(this);
		}

		::System::Boolean LNMJLGHLGBD(::BGGGFKNDEMJ* a1, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType a2, ::Il2CppArray<::System::UInt32>* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::BGGGFKNDEMJ*, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + BDPDNAECJII_LNMJLGHLGBD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PCGKOPOPNMB(::HNLKNLJBHDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + BDPDNAECJII_PCGKOPOPNMB_OFFSET))(this, a1);
		}

		::System::Void AKEMNGIEHLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_AKEMNGIEHLG_OFFSET))(this);
		}

		::System::Void MLAFLGNKIAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_MLAFLGNKIAH_OFFSET))(this);
		}

		::System::Void DAIPJJKMLCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_DAIPJJKMLCK_OFFSET))(this);
		}

		::JFAIGANLDBK* OGPKKFDLCJJ()
		{
			return ((::JFAIGANLDBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_OGPKKFDLCJJ_OFFSET))(this);
		}

		::System::Void BADJCIBELAP(::HNLKNLJBHDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + BDPDNAECJII_BADJCIBELAP_OFFSET))(this, a1);
		}

		::System::Void LKBJLFDINBL(::System::UInt32 a1, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersCorePlayerDrawReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersCorePlayerDrawReason))((::PBYTE)hIl2Cpp + BDPDNAECJII_LKBJLFDINBL_OFFSET))(this, a1, a2);
		}

		::System::Void ADPOCFKBKPC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPDNAECJII_ADPOCFKBKPC_OFFSET))(this, a1);
		}

		::System::Void PFPDPNAKNJE(::System::UInt32 a1, ::JPGJGHMCCJP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::JPGJGHMCCJP*))((::PBYTE)hIl2Cpp + BDPDNAECJII_PFPDPNAKNJE_OFFSET))(this, a1, a2);
		}

		::System::Boolean OKEEBJMDJCD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_OKEEBJMDJCD_OFFSET))(this);
		}

		::System::Boolean DKCCAEDJCFC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_DKCCAEDJCFC_OFFSET))(this);
		}

		::System::Boolean PLNBAIIENDH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_PLNBAIIENDH_OFFSET))(this);
		}

		::System::Void GLOKCFDHAGC(::HNLKNLJBHDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + BDPDNAECJII_GLOKCFDHAGC_OFFSET))(this, a1);
		}

		::System::Void KMEOKNCKKCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_KMEOKNCKKCD_OFFSET))(this);
		}

		::System::Void IFMAHFKODAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_IFMAHFKODAE_OFFSET))(this);
		}

		::System::Void MGIIPCABONF(::System::UInt32 a1, ::FKIAHEEJGKH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::FKIAHEEJGKH*))((::PBYTE)hIl2Cpp + BDPDNAECJII_MGIIPCABONF_OFFSET))(this, a1, a2);
		}

		::System::Void LEACKBOEKHN(::JFAIGANLDBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFAIGANLDBK*))((::PBYTE)hIl2Cpp + BDPDNAECJII_LEACKBOEKHN_OFFSET))(this, a1);
		}

		::System::Void EHNIBALCKFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_EHNIBALCKFG_OFFSET))(this);
		}

		::System::Void BFIJJDKOJOH(::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersCoreGameState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersCoreGameState))((::PBYTE)hIl2Cpp + BDPDNAECJII_BFIJJDKOJOH_OFFSET))(this, a1);
		}

		::System::Void KKLKAOCLEHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_KKLKAOCLEHA_OFFSET))(this);
		}

		::System::Void MDELKGAPFFF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPDNAECJII_MDELKGAPFFF_OFFSET))(this, a1);
		}

		::System::Void HLPKKGKFIKB(::HNLKNLJBHDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + BDPDNAECJII_HLPKKGKFIKB_OFFSET))(this, a1);
		}

		::System::Void APPFECHNOMI(::HNLKNLJBHDD* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HNLKNLJBHDD*, ::System::Boolean))((::PBYTE)hIl2Cpp + BDPDNAECJII_APPFECHNOMI_OFFSET))(this, a1, a2);
		}

		::System::Boolean FINHDFBPLPJ(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPDNAECJII_FINHDFBPLPJ_OFFSET))(this, a1);
		}

		::System::Void MDOPNMNMIIG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPDNAECJII_MDOPNMNMIIG_OFFSET))(this, a1);
		}

		::HNLKNLJBHDD* NPDMEMDEGDK(::System::UInt32 a1)
		{
			return ((::HNLKNLJBHDD*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPDNAECJII_NPDMEMDEGDK_OFFSET))(this, a1);
		}

		::System::Void OPMKGNEAAKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_OPMKGNEAAKB_OFFSET))(this);
		}

		::System::UInt32 KOLALIMAOCM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_KOLALIMAOCM_OFFSET))(this);
		}

		::DJLLENLBFAD* NNHGPJILKAE(::System::UInt32 a1)
		{
			return ((::DJLLENLBFAD*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPDNAECJII_NNHGPJILKAE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::OEOFKECAJEB>* NAFPKLGNDPD(::System::Collections::Generic::List_1<::OEOFKECAJEB>* a1)
		{
			return ((::System::Collections::Generic::List_1<::OEOFKECAJEB>*(*)(::PVOID, ::System::Collections::Generic::List_1<::OEOFKECAJEB>*))((::PBYTE)hIl2Cpp + BDPDNAECJII_NAFPKLGNDPD_OFFSET))(this, a1);
		}

		::System::Void FHICJKDMIMJ(::System::UInt32 a1, ::HNLKNLJBHDD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + BDPDNAECJII_FHICJKDMIMJ_OFFSET))(this, a1, a2);
		}

		::System::Void GFIECJOEEEI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPDNAECJII_GFIECJOEEEI_OFFSET))(this, a1);
		}

		::System::Void ABJJCMEPIDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_ABJJCMEPIDE_OFFSET))(this);
		}

		::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillViewType PIPJICIPLJJ(::RPG::GameCore::TeamTowersSkillConfig* a1)
		{
			return ((::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillViewType(*)(::PVOID, ::RPG::GameCore::TeamTowersSkillConfig*))((::PBYTE)hIl2Cpp + BDPDNAECJII_PIPJICIPLJJ_OFFSET))(this, a1);
		}

		::System::Void EHIPFLAJKKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_EHIPFLAJKKO_OFFSET))(this);
		}

		::System::Boolean EGCBPLECJMC(::HNLKNLJBHDD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + BDPDNAECJII_EGCBPLECJMC_OFFSET))(this, a1);
		}

		::System::Void KLDAKHKGIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_KLDAKHKGIMF_OFFSET))(this);
		}

		::System::Void JICCIGGDNKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_JICCIGGDNKB_OFFSET))(this);
		}

		::System::Boolean get_AutoTestMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_GET_AUTOTESTMODE_OFFSET))(this);
		}

		::System::Void set_AutoTestMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BDPDNAECJII_SET_AUTOTESTMODE_OFFSET))(this, a1);
		}

		::System::Void OILMMENDPAI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPDNAECJII_OILMMENDPAI_OFFSET))(this, a1);
		}

		::System::Void FGBNDALJCKP(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersBrickSpecialViewType))((::PBYTE)hIl2Cpp + BDPDNAECJII_FGBNDALJCKP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PPAONBLGDJC(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + BDPDNAECJII_PPAONBLGDJC_OFFSET))(this, a1, a2);
		}

		::System::Void GKLJEEMGKOA(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + BDPDNAECJII_GKLJEEMGKOA_OFFSET))(this, a1, a2);
		}

		::System::Void IHAHNLANJIP(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + BDPDNAECJII_IHAHNLANJIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ONEGCHBEDBE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPDNAECJII_ONEGCHBEDBE_OFFSET))(this, a1);
		}

		::System::Void PEBFFIGDDOP(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::TeamTowersPlayerModifierType a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::TeamTowersPlayerModifierType, ::System::Boolean))((::PBYTE)hIl2Cpp + BDPDNAECJII_PEBFFIGDDOP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BPPKJBLFPNM(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::UInt32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + BDPDNAECJII_BPPKJBLFPNM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void HIBIPOKIDID(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::MVector2 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::MVector2))((::PBYTE)hIl2Cpp + BDPDNAECJII_HIBIPOKIDID_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AMEGAEKKIJA(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::Collections::Generic::List_1<::System::Int32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + BDPDNAECJII_AMEGAEKKIJA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BNOOHFBKJFC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPDNAECJII_BNOOHFBKJFC_OFFSET))(this, a1);
		}

		::System::Void ADFCONPNKDJ(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + BDPDNAECJII_ADFCONPNKDJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IBDMAKEGHLK(::System::UInt32 a1, ::HNLKNLJBHDD* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + BDPDNAECJII_IBDMAKEGHLK_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GLLBIEJDPFG(::HNLKNLJBHDD* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + BDPDNAECJII_GLLBIEJDPFG_OFFSET))(this, a1);
		}

		::System::Nullable_1<::OEOFKECAJEB> HMLLFDKMLPM(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Nullable_1<::OEOFKECAJEB>(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + BDPDNAECJII_HMLLFDKMLPM_OFFSET))(this, a1, a2);
		}

		::System::Void LPHPBIJDAAC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPDNAECJII_LPHPBIJDAAC_OFFSET))(this, a1);
		}

		::System::Void EJAHEDDMHCF(::GHADLBDBHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHADLBDBHNA*))((::PBYTE)hIl2Cpp + BDPDNAECJII_EJAHEDDMHCF_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BDPDNAECJII_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void GBFOCPBCPDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_GBFOCPBCPDA_OFFSET))(this);
		}

		::System::Void FNACALDOOIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_FNACALDOOIF_OFFSET))(this);
		}

		::System::Void HDHGINJAGGI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPDNAECJII_HDHGINJAGGI_OFFSET))(this, a1);
		}

		::System::Void OCOACGHIKDM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPDNAECJII_OCOACGHIKDM_OFFSET))(this, a1);
		}

		::System::Void FELOGPCJEPJ(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + BDPDNAECJII_FELOGPCJEPJ_OFFSET))(this, a1);
		}

		::System::Int32 JILMGOOCIGN(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BDPDNAECJII_JILMGOOCIGN_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::UInt32>* BDMLCHCJFHG()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_BDMLCHCJFHG_OFFSET))(this);
		}

		::System::UInt32 MEHPLGILJLF(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPDNAECJII_MEHPLGILJLF_OFFSET))(this, a1);
		}

		::System::Void GHPMAFAJPDH(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + BDPDNAECJII_GHPMAFAJPDH_OFFSET))(this, a1);
		}

		::System::Boolean FKJEPBFJCGK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_FKJEPBFJCGK_OFFSET))(this);
		}

		::System::Void EKGIJDIDFFD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPDNAECJII_EKGIJDIDFFD_OFFSET))(this, a1);
		}

		::System::UInt64 ABIEMACLLAE()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_ABIEMACLLAE_OFFSET))(this);
		}

		::System::String* PAFKJAHJMCE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_PAFKJAHJMCE_OFFSET))(this);
		}

		::System::Void GJJCKPBHGMO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPDNAECJII_GJJCKPBHGMO_OFFSET))(this, a1);
		}

		::System::Void FLGDIHPNFBJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BDPDNAECJII_FLGDIHPNFBJ_OFFSET))(this, a1);
		}

		::System::Void GNNNEFCBMJN(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPDNAECJII_GNNNEFCBMJN_OFFSET))(this, a1, a2);
		}

		::System::Void AHHPLKCCKBB(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPDNAECJII_AHHPLKCCKBB_OFFSET))(this, a1, a2);
		}

		::System::Void NCPHNMDPOHN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BDPDNAECJII_NCPHNMDPOHN_OFFSET))(this, a1);
		}

		::System::Void HFOCNAGNFOD(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPDNAECJII_HFOCNAGNFOD_OFFSET))(this, a1, a2);
		}

		::System::Void IOEJBHHLMCE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPDNAECJII_IOEJBHHLMCE_OFFSET))(this, a1);
		}

		::System::Void FDMDGJAKCGE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPDNAECJII_FDMDGJAKCGE_OFFSET))(this, a1);
		}

		::System::Void DJJBFNDDMNM(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPDNAECJII_DJJBFNDDMNM_OFFSET))(this, a1, a2);
		}

		::System::Void LHFOOJOHMHK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BDPDNAECJII_LHFOOJOHMHK_OFFSET))(this, a1);
		}

		::System::Void FJKFLJCMEAB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BDPDNAECJII_FJKFLJCMEAB_OFFSET))(this, a1);
		}

		::System::UInt32 NHBMGENFMNI(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDPDNAECJII_NHBMGENFMNI_OFFSET))(this, a1);
		}

		::System::Boolean CBCHIHEJGEN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII_CBCHIHEJGEN_OFFSET))(this);
		}

		::System::Void __RegisterStatChangeCallback_b__49_0(::System::UInt32 a1, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType))((::PBYTE)hIl2Cpp + BDPDNAECJII___REGISTERSTATCHANGECALLBACK_B__49_0_OFFSET))(this, a1, a2);
		}

		::System::Void __OnEnterGameState_b__71_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII___ONENTERGAMESTATE_B__71_0_OFFSET))(this);
		}

		::System::Void __OnEnterGameState_b__71_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII___ONENTERGAMESTATE_B__71_1_OFFSET))(this);
		}

		::System::Void __OnEnterGameState_b__71_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII___ONENTERGAMESTATE_B__71_2_OFFSET))(this);
		}

		::System::Void __OnEnterGameState_b__71_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII___ONENTERGAMESTATE_B__71_3_OFFSET))(this);
		}

	};
