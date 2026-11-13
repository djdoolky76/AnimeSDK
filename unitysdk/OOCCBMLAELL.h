#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BGCNCMGEBBC.h"
#include "unitysdk/LHHEGNEBMLN.h"
#include "unitysdk/MGGDDCKLNAM.h"
#include "unitysdk/OILICJACMFA.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/FateRinActionIntentType.h"
#include "unitysdk/RPG/GameCore/FateRinCardCasterSource.h"
#include "unitysdk/RPG/GameCore/FateRinCardPileType.h"
#include "unitysdk/RPG/GameCore/FateRinKeywordEventType.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
#include "unitysdk/ICHIALIFCIJ.h"
#include "unitysdk/RPG/GameCore/AbilityDynamicFloatInjection.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class APPLKDBLEAG;
class BJHMBGLPOLB;
class DDBIKAEOHKB;
class DEEJKBIMHAA;
class DIAHGNIILIK;
class DJJJMOFDALB;
class EKFMIDBJDIA;
class JCHCMMOKOOB;
class JLKNHPDJPMB;
class JMPLMDKPNDA;
class KOIACJAJFEC;
class NCJILFFNINI;
class OKLEONFEGAC;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class AbilityAnyHPChange; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class LevelAfterAddModifier; }
namespace RPG::GameCore { class LevelCharacterCreate; }
namespace RPG::GameCore { class LevelCharacterDie; }
namespace RPG::GameCore { class LevelCharacterEndAttack; }
namespace RPG::GameCore { class LevelEntityShieldChange; }
namespace RPG::GameCore { class LevelInsertAbilityFinish; }
namespace RPG::GameCore { class LevelRemoveModifier; }
namespace RPG::GameCore { class LevelTurnBegin; }
namespace RPG::GameCore { class LevelTurnEndExit; }
namespace RPG::GameCore { class LevelTurnInsertAbilityAfterUltraSkillBegin; }
namespace RPG::GameCore { class LevelTurnWaitActionOrder; }
namespace RPG::GameCore { class LevelWaveMonsterBegin; }
namespace RPG::GameCore { class PVEGameStatistics; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define OOCCBMLAELL_AAINJKJILMO_OFFSET UNITYSDK_OFFSET(0x196878D0)
#define OOCCBMLAELL_ABFMJLDJMFF_OFFSET UNITYSDK_OFFSET(0x1968ABB0)
#define OOCCBMLAELL_ACNFHKBCMKL_OFFSET UNITYSDK_OFFSET(0x1968AC70)
#define OOCCBMLAELL_ALOHNNKDJDJ_OFFSET UNITYSDK_OFFSET(0x1968B2E0)
#define OOCCBMLAELL_BCBMFIKDHLK_OFFSET UNITYSDK_OFFSET(0x19684320)
#define OOCCBMLAELL_BGMGEIHNGHC_OFFSET UNITYSDK_OFFSET(0x19689B60)
#define OOCCBMLAELL_BINPCPEDFBK_OFFSET UNITYSDK_OFFSET(0x19685FD0)
#define OOCCBMLAELL_BOCMDPBHPLB_OFFSET UNITYSDK_OFFSET(0x1968BF10)
#define OOCCBMLAELL_BOIHLEAFHAB_OFFSET UNITYSDK_OFFSET(0x196859B0)
#define OOCCBMLAELL_CGAGANHPAFB_OFFSET UNITYSDK_OFFSET(0x1968AD30)
#define OOCCBMLAELL_CHKHAGJAACK_OFFSET UNITYSDK_OFFSET(0x19684710)
#define OOCCBMLAELL_CKJJNJNENIM_OFFSET UNITYSDK_OFFSET(0x1968C250)
#define OOCCBMLAELL_CMHDHNMJBIP_OFFSET UNITYSDK_OFFSET(0x196851B0)
#define OOCCBMLAELL_CNOGHNIHLOA_OFFSET UNITYSDK_OFFSET(0x1968D0A0)
#define OOCCBMLAELL_CTOR_OFFSET UNITYSDK_OFFSET(0x1968D2A0)
#define OOCCBMLAELL_DBFNHBLMPCP_OFFSET UNITYSDK_OFFSET(0x1968AE50)
#define OOCCBMLAELL_DCGPPPPJMKF_OFFSET UNITYSDK_OFFSET(0x19681FB0)
#define OOCCBMLAELL_DDAFPAPCELP_OFFSET UNITYSDK_OFFSET(0x19686380)
#define OOCCBMLAELL_DDENKMKJGMC_OFFSET UNITYSDK_OFFSET(0x19686F00)
#define OOCCBMLAELL_DDJBLLGEHBE_OFFSET UNITYSDK_OFFSET(0x19689E60)
#define OOCCBMLAELL_DFPFOHNIBBL_OFFSET UNITYSDK_OFFSET(0x1968D060)
#define OOCCBMLAELL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19683060)
#define OOCCBMLAELL_DJJBDFKDHPA_OFFSET UNITYSDK_OFFSET(0x19688A30)
#define OOCCBMLAELL_DJLLNNKICOP_OFFSET UNITYSDK_OFFSET(0x19681930)
#define OOCCBMLAELL_DKGCAIEFICL_OFFSET UNITYSDK_OFFSET(0x19688C80)
#define OOCCBMLAELL_EAHJBMIFBND_OFFSET UNITYSDK_OFFSET(0x1968A610)
#define OOCCBMLAELL_ECCKGKMKGEM_OFFSET UNITYSDK_OFFSET(0x1968B280)
#define OOCCBMLAELL_ECNCFPOBBDA_OFFSET UNITYSDK_OFFSET(0x19687C60)
#define OOCCBMLAELL_EFFANFJNPLB_OFFSET UNITYSDK_OFFSET(0x196876C0)
#define OOCCBMLAELL_EFOLCNCINCI_OFFSET UNITYSDK_OFFSET(0x19685320)
#define OOCCBMLAELL_EINOCGFAGOJ_OFFSET UNITYSDK_OFFSET(0x19687710)
#define OOCCBMLAELL_EKHCFAHENAO_OFFSET UNITYSDK_OFFSET(0x1968D160)
#define OOCCBMLAELL_EOCFJEILPHN_OFFSET UNITYSDK_OFFSET(0x19688410)
#define OOCCBMLAELL_FFIEDNKHJEN_OFFSET UNITYSDK_OFFSET(0x196857F0)
#define OOCCBMLAELL_FINDMDFBBJE_OFFSET UNITYSDK_OFFSET(0x196897F0)
#define OOCCBMLAELL_FMNFMLKMHHL_OFFSET UNITYSDK_OFFSET(0x19683DD0)
#define OOCCBMLAELL_FNFHPBAKDFC_OFFSET UNITYSDK_OFFSET(0x196846C0)
#define OOCCBMLAELL_GCEJDEPLNOK_OFFSET UNITYSDK_OFFSET(0x19682750)
#define OOCCBMLAELL_GDGADMIGKHJ_OFFSET UNITYSDK_OFFSET(0x19682EB0)
#define OOCCBMLAELL_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0x19683000)
#define OOCCBMLAELL_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0x19681550)
#define OOCCBMLAELL_GET_CURMANA_OFFSET UNITYSDK_OFFSET(0x1968CFC0)
#define OOCCBMLAELL_GET_CURRENTSELECTCARD_OFFSET UNITYSDK_OFFSET(0x1968D070)
#define OOCCBMLAELL_GET_CURRENTTURNCOUNT_OFFSET UNITYSDK_OFFSET(0x1968CEE0)
#define OOCCBMLAELL_GET_HANDDRAWCOUNT_OFFSET UNITYSDK_OFFSET(0x1968D030)
#define OOCCBMLAELL_GET_HANDSLOTCAPACITY_OFFSET UNITYSDK_OFFSET(0x1968D000)
#define OOCCBMLAELL_GET_HASMOREACTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1968CF40)
#define OOCCBMLAELL_GET_ISINONEMOREACTION_OFFSET UNITYSDK_OFFSET(0x1968CF60)
#define OOCCBMLAELL_GET_KEYWORDHANDLERFACTORY_OFFSET UNITYSDK_OFFSET(0x1968D1C0)
#define OOCCBMLAELL_GET_MAXMANA_OFFSET UNITYSDK_OFFSET(0x1968CFE0)
#define OOCCBMLAELL_GET_READYTOENDCURRENTACTION_OFFSET UNITYSDK_OFFSET(0x1968CF20)
#define OOCCBMLAELL_GET_WAITORDER_OFFSET UNITYSDK_OFFSET(0x1968CF00)
#define OOCCBMLAELL_GFMGDOCKNEE_OFFSET UNITYSDK_OFFSET(0x1968A6B0)
#define OOCCBMLAELL_GHFDGMPABBF_OFFSET UNITYSDK_OFFSET(0x19681D20)
#define OOCCBMLAELL_GJNHAEGLLCN_OFFSET UNITYSDK_OFFSET(0x1968CF80)
#define OOCCBMLAELL_GLCLIKLKDJH_OFFSET UNITYSDK_OFFSET(0x19689990)
#define OOCCBMLAELL_GLGAHOOGINJ_OFFSET UNITYSDK_OFFSET(0x19681B60)
#define OOCCBMLAELL_GNLKBCFAIMH_OFFSET UNITYSDK_OFFSET(0x1968D1E0)
#define OOCCBMLAELL_GPEGNLFLPJC_OFFSET UNITYSDK_OFFSET(0x1968D240)
#define OOCCBMLAELL_HAGGHJBFMFI_OFFSET UNITYSDK_OFFSET(0x196833C0)
#define OOCCBMLAELL_HCDJFOHHCGL_OFFSET UNITYSDK_OFFSET(0x1968BC90)
#define OOCCBMLAELL_HELJBGJNEBO_OFFSET UNITYSDK_OFFSET(0x19689AC0)
#define OOCCBMLAELL_HKMBILABAPE_OFFSET UNITYSDK_OFFSET(0x1968D050)
#define OOCCBMLAELL_HOFEFLOFGJI_OFFSET UNITYSDK_OFFSET(0x1968B340)
#define OOCCBMLAELL_HOGNKGHBEKD_OFFSET UNITYSDK_OFFSET(0x19686FB0)
#define OOCCBMLAELL_HOIIMAIEEIO_OFFSET UNITYSDK_OFFSET(0x196850C0)
#define OOCCBMLAELL_IANOJKNMCKD_OFFSET UNITYSDK_OFFSET(0x19687840)
#define OOCCBMLAELL_ICLCFENJNJN_OFFSET UNITYSDK_OFFSET(0x1968C330)
#define OOCCBMLAELL_IGIBNDPKJOK_OFFSET UNITYSDK_OFFSET(0x196884A0)
#define OOCCBMLAELL_IIIHGEKOEMD_OFFSET UNITYSDK_OFFSET(0x1968BB20)
#define OOCCBMLAELL_IIPKMONBPAM_OFFSET UNITYSDK_OFFSET(0x1968CFA0)
#define OOCCBMLAELL_IKKGNCDIAAC_OFFSET UNITYSDK_OFFSET(0x19687DD0)
#define OOCCBMLAELL_IKLPFIADGLN_OFFSET UNITYSDK_OFFSET(0x19689C40)
#define OOCCBMLAELL_IMHHFMAJPMP_OFFSET UNITYSDK_OFFSET(0x1968CFB0)
#define OOCCBMLAELL_INIBBCNDEGL_OFFSET UNITYSDK_OFFSET(0x1968CBB0)
#define OOCCBMLAELL_IPPFPGAKPON_OFFSET UNITYSDK_OFFSET(0x1968BE00)
#define OOCCBMLAELL_JDAFMBJFPBB_OFFSET UNITYSDK_OFFSET(0x1968A9E0)
#define OOCCBMLAELL_JENFMDHLNJP_OFFSET UNITYSDK_OFFSET(0x1968D020)
#define OOCCBMLAELL_JFHIMHONDFP_OFFSET UNITYSDK_OFFSET(0x19688CD0)
#define OOCCBMLAELL_JFIEGLCPHKJ_OFFSET UNITYSDK_OFFSET(0x19687540)
#define OOCCBMLAELL_JFNICFDOHGP_1_OFFSET UNITYSDK_OFFSET(0x196868F0)
#define OOCCBMLAELL_JFNICFDOHGP_OFFSET UNITYSDK_OFFSET(0x19686320)
#define OOCCBMLAELL_JJEFIKNBGIA_OFFSET UNITYSDK_OFFSET(0x19683530)
#define OOCCBMLAELL_JKOIENJJFJO_OFFSET UNITYSDK_OFFSET(0x19682F50)
#define OOCCBMLAELL_JMKJKCOAFLD_OFFSET UNITYSDK_OFFSET(0x19683D60)
#define OOCCBMLAELL_JODGPLIMKMO_OFFSET UNITYSDK_OFFSET(0x19685520)
#define OOCCBMLAELL_KGCLCBGIDHC_OFFSET UNITYSDK_OFFSET(0x19686660)
#define OOCCBMLAELL_KGLDDONALAJ_OFFSET UNITYSDK_OFFSET(0x1968D090)
#define OOCCBMLAELL_KGOKBELAILP_OFFSET UNITYSDK_OFFSET(0x1968A920)
#define OOCCBMLAELL_KLBILKEIIKJ_OFFSET UNITYSDK_OFFSET(0x19687420)
#define OOCCBMLAELL_KNFDJECGDOP_1_OFFSET UNITYSDK_OFFSET(0x19687380)
#define OOCCBMLAELL_KNFDJECGDOP_2_OFFSET UNITYSDK_OFFSET(0x19688500)
#define OOCCBMLAELL_KNFDJECGDOP_OFFSET UNITYSDK_OFFSET(0x19687FB0)
#define OOCCBMLAELL_KNPEMGDLBJL_OFFSET UNITYSDK_OFFSET(0x1968AA70)
#define OOCCBMLAELL_KOCLLLMBOIH_OFFSET UNITYSDK_OFFSET(0x1968A830)
#define OOCCBMLAELL_LABHLPOEPPE_OFFSET UNITYSDK_OFFSET(0x19687B30)
#define OOCCBMLAELL_LBLGOJOCGAI_OFFSET UNITYSDK_OFFSET(0x19684EE0)
#define OOCCBMLAELL_LGIDJNCMFJA_OFFSET UNITYSDK_OFFSET(0x19689890)
#define OOCCBMLAELL_LHAAMHFAMEE_OFFSET UNITYSDK_OFFSET(0x19689300)
#define OOCCBMLAELL_LHFCIHCENCO_OFFSET UNITYSDK_OFFSET(0x19687EC0)
#define OOCCBMLAELL_LHLMHGFMLDD_OFFSET UNITYSDK_OFFSET(0x1968B140)
#define OOCCBMLAELL_LIHPGEGGBEL_OFFSET UNITYSDK_OFFSET(0x19683B40)
#define OOCCBMLAELL_LJEAHNNPELO_OFFSET UNITYSDK_OFFSET(0x1968A110)
#define OOCCBMLAELL_LLHBOBGGMDH_OFFSET UNITYSDK_OFFSET(0x1968AF40)
#define OOCCBMLAELL_LMBIKLPDKCE_OFFSET UNITYSDK_OFFSET(0x19687D80)
#define OOCCBMLAELL_LPGHDPDILIP_OFFSET UNITYSDK_OFFSET(0x1968A380)
#define OOCCBMLAELL_MGLCMLIDAMI_OFFSET UNITYSDK_OFFSET(0x19686DE0)
#define OOCCBMLAELL_MPJKKAKMCCO_OFFSET UNITYSDK_OFFSET(0x19688980)
#define OOCCBMLAELL_NDAKFHEBOEG_OFFSET UNITYSDK_OFFSET(0x1968CE80)
#define OOCCBMLAELL_NGHONNAKLBK_1_OFFSET UNITYSDK_OFFSET(0x19686AE0)
#define OOCCBMLAELL_NGHONNAKLBK_OFFSET UNITYSDK_OFFSET(0x196865F0)
#define OOCCBMLAELL_NJEEBLBHALP_OFFSET UNITYSDK_OFFSET(0x19689720)
#define OOCCBMLAELL_NJFNCKMAHAE_OFFSET UNITYSDK_OFFSET(0x19681F60)
#define OOCCBMLAELL_NNBHHBIMGHP_OFFSET UNITYSDK_OFFSET(0x19688BA0)
#define OOCCBMLAELL_NOECAKGBCOI_OFFSET UNITYSDK_OFFSET(0x1968CE10)
#define OOCCBMLAELL_NOJOCNONGMA_OFFSET UNITYSDK_OFFSET(0x1968D100)
#define OOCCBMLAELL_OCIAFPHFMAJ_OFFSET UNITYSDK_OFFSET(0x19689930)
#define OOCCBMLAELL_OEANFPNCNNC_OFFSET UNITYSDK_OFFSET(0x19686D80)
#define OOCCBMLAELL_OKJJGNBFAOD_OFFSET UNITYSDK_OFFSET(0x19685BB0)
#define OOCCBMLAELL_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0x19681A90)
#define OOCCBMLAELL_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0x19681560)
#define OOCCBMLAELL_OOFAPPPJNHD_OFFSET UNITYSDK_OFFSET(0x19687CD0)
#define OOCCBMLAELL_OOFHNBHCGIO_OFFSET UNITYSDK_OFFSET(0x19689780)
#define OOCCBMLAELL_OOONFFODEHP_OFFSET UNITYSDK_OFFSET(0x19689610)
#define OOCCBMLAELL_OPGJAGBNJAA_OFFSET UNITYSDK_OFFSET(0x1968CF90)
#define OOCCBMLAELL_OPNLMGDAHPO_OFFSET UNITYSDK_OFFSET(0x1968B8C0)
#define OOCCBMLAELL_OPOJJIJLBAK_OFFSET UNITYSDK_OFFSET(0x19689CD0)
#define OOCCBMLAELL_PBCPJCBDGGN_OFFSET UNITYSDK_OFFSET(0x19687660)
#define OOCCBMLAELL_PCCMMCHLCCO_OFFSET UNITYSDK_OFFSET(0x19682BB0)
#define OOCCBMLAELL_PEPFEDOOEOC_OFFSET UNITYSDK_OFFSET(0x19686E70)
#define OOCCBMLAELL_PFJNGDPPKDG_OFFSET UNITYSDK_OFFSET(0x19689BE0)
#define OOCCBMLAELL_PFMCNANDDDD_OFFSET UNITYSDK_OFFSET(0x19682310)
#define OOCCBMLAELL_PGEJGJPLHDM_OFFSET UNITYSDK_OFFSET(0x19689DC0)
#define OOCCBMLAELL_PIMHFOAHCPI_OFFSET UNITYSDK_OFFSET(0x19682D40)
#define OOCCBMLAELL_PMJFGOCKKKE_OFFSET UNITYSDK_OFFSET(0x1968B9B0)
#define OOCCBMLAELL_POBGACJGBDE_1_OFFSET UNITYSDK_OFFSET(0x19689360)
#define OOCCBMLAELL_POBGACJGBDE_OFFSET UNITYSDK_OFFSET(0x19688EC0)
#define OOCCBMLAELL_SET_CURMANA_OFFSET UNITYSDK_OFFSET(0x1968CFD0)
#define OOCCBMLAELL_SET_CURRENTSELECTCARD_OFFSET UNITYSDK_OFFSET(0x1968D080)
#define OOCCBMLAELL_SET_CURRENTTURNCOUNT_OFFSET UNITYSDK_OFFSET(0x1968CEF0)
#define OOCCBMLAELL_SET_HANDDRAWCOUNT_OFFSET UNITYSDK_OFFSET(0x1968D040)
#define OOCCBMLAELL_SET_HANDSLOTCAPACITY_OFFSET UNITYSDK_OFFSET(0x1968D010)
#define OOCCBMLAELL_SET_HASMOREACTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1968CF50)
#define OOCCBMLAELL_SET_ISINONEMOREACTION_OFFSET UNITYSDK_OFFSET(0x1968CF70)
#define OOCCBMLAELL_SET_KEYWORDHANDLERFACTORY_OFFSET UNITYSDK_OFFSET(0x1968D1D0)
#define OOCCBMLAELL_SET_MAXMANA_OFFSET UNITYSDK_OFFSET(0x1968CFF0)
#define OOCCBMLAELL_SET_READYTOENDCURRENTACTION_OFFSET UNITYSDK_OFFSET(0x1968CF30)
#define OOCCBMLAELL_SET_WAITORDER_OFFSET UNITYSDK_OFFSET(0x1968CF10)
#define OOCCBMLAELL_TICK_OFFSET UNITYSDK_OFFSET(0x19683340)
#define OOCCBMLAELL__FINDCARDS_G___FINDCARDS_44_0_OFFSET UNITYSDK_OFFSET(0x19688770)

inline static constexpr unsigned int OOCCBMLAELL_TypeDefinitionIndex = 57195;

	class OOCCBMLAELL : public ::LHHEGNEBMLN
	{
	public:
		::JLKNHPDJPMB* LJKBNIGOENI; // 0x48
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* GACEAOFPHOL; // 0x50
		::System::Collections::Generic::List_1<::BJHMBGLPOLB*>* NLEBDOIGMND; // 0x58
		::RPG::GameCore::GameEntity* MCJBKBMAIOI; // 0x60
		::System::Collections::Generic::List_1<::BJHMBGLPOLB*>* JDDNEOCPBEJ; // 0x68
		::JCHCMMOKOOB* MBHKLDCGHDI; // 0x70
		::BJHMBGLPOLB* CJENPFHAMAC; // 0x78
		::System::String* DMKCLLAPIKO; // 0x80
		::System::String* BFGCOKGMGCH; // 0x88
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x90
		::RPG::GameCore::GameEntity* DABEHBNAKIM; // 0x98
		::System::Collections::Generic::Stack_1<::RPG::PoolList_1<::BJHMBGLPOLB*>*>* NNLJJEJOMIE; // 0xA0
		::System::Collections::Generic::List_1<::OILICJACMFA>* FBBMOLAMAGM; // 0xA8
		::System::String* PNJGNIHCNLE; // 0xB0
		::System::Collections::Generic::Stack_1<::BJHMBGLPOLB*>* CPFNEMACCIC; // 0xB8
		::System::Collections::Generic::List_1<::BJHMBGLPOLB*>* KNBJLAPEIFJ; // 0xC0
		::APPLKDBLEAG* IMJOJLEGCME; // 0xC8
		::DDBIKAEOHKB* _KeywordHandlerFactory_k__BackingField; // 0xD0
		::KOIACJAJFEC* JGEACAIOLIA; // 0xD8
		::BJHMBGLPOLB* _CurrentSelectCard_k__BackingField; // 0xE0
		::System::Collections::Generic::List_1<::MGGDDCKLNAM>* OCCEKOIJNAJ; // 0xE8
		::System::Collections::Generic::List_1<::System::UInt32>* KHBEOADDIFM; // 0xF0
		::OKLEONFEGAC* PEPFBKDAHAF; // 0xF8
		::System::Collections::Generic::List_1<::BJHMBGLPOLB*>* HFBHBDDAPHI; // 0x100
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Il2CppArray<::RPG::GameCore::FateRinActionIntentType>*>* MGHLMPAKBNB; // 0x108
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BJHMBGLPOLB*>* KODFGLNDGDG; // 0x110
		::RPG::GameCore::GameEntity* CIEGIBMLLON; // 0x118
		::System::Collections::Generic::List_1<::OILICJACMFA>* MDOKCDBFECN; // 0x120
		::DJJJMOFDALB* BOPMNDJHAGH; // 0x128
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* AAGHKELJKCN; // 0x130
		::RPG::GameCore::GameEntity* GONACHAMFKD; // 0x138
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::KOIACJAJFEC*>* GOCIDOFAICJ; // 0x140
		::System::Boolean KIDDECCNHEH; // 0x148
		::System::Boolean _ReadyToEndCurrentAction_k__BackingField; // 0x149
		::System::Boolean _IsInOneMoreAction_k__BackingField; // 0x14A
		::System::Boolean _WaitOrder_k__BackingField; // 0x14B
		::System::UInt32 _HandSlotCapacity_k__BackingField; // 0x14C
		::System::Int32 _MaxMana_k__BackingField; // 0x150
		::System::Int32 _HasMoreActionCount_k__BackingField; // 0x154
		::System::UInt32 _HandDrawCount_k__BackingField; // 0x158
		::System::UInt32 JPCAADEEEAI; // 0x15C
		::System::UInt32 _CurrentTurnCount_k__BackingField; // 0x160
		::System::Int32 _CurMana_k__BackingField; // 0x164
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
		{
			return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
		}

		::System::Void OnInitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_ONINITIALIZE_OFFSET))(this);
		}

		::System::Void OnBattleInstanceCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_ONBATTLEINSTANCECREATED_OFFSET))(this);
		}

		::System::Void NJFNCKMAHAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_NJFNCKMAHAE_OFFSET))(this);
		}

		::System::Void GCEJDEPLNOK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_GCEJDEPLNOK_OFFSET))(this, a1);
		}

		::System::Void PCCMMCHLCCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_PCCMMCHLCCO_OFFSET))(this);
		}

		::System::Void PIMHFOAHCPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_PIMHFOAHCPI_OFFSET))(this);
		}

		::System::Void JKOIENJJFJO(::RPG::GameCore::TaskContext* a1, ::NCJILFFNINI* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NCJILFFNINI*, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCCBMLAELL_JKOIENJJFJO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_GENSTATISTICS_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OOCCBMLAELL_TICK_OFFSET))(this, a1);
		}

		::System::Void HAGGHJBFMFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_HAGGHJBFMFI_OFFSET))(this);
		}

		::System::Void LIHPGEGGBEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_LIHPGEGGBEL_OFFSET))(this);
		}

		::System::Void FMNFMLKMHHL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCCBMLAELL_FMNFMLKMHHL_OFFSET))(this, a1);
		}

		::System::Void FNFHPBAKDFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_FNFHPBAKDFC_OFFSET))(this);
		}

		::System::Void CHKHAGJAACK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_CHKHAGJAACK_OFFSET))(this, a1);
		}

		::KOIACJAJFEC* LBLGOJOCGAI(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::KOIACJAJFEC*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCCBMLAELL_LBLGOJOCGAI_OFFSET))(this, a1, a2);
		}

		::BJHMBGLPOLB* EFOLCNCINCI(::System::UInt32 a1, ::RPG::GameCore::FateRinCardPileType a2, ::System::Boolean a3, ::RPG::GameCore::TaskContext* a4)
		{
			return ((::BJHMBGLPOLB*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FateRinCardPileType, ::System::Boolean, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_EFOLCNCINCI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OKJJGNBFAOD(::BJHMBGLPOLB* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BJHMBGLPOLB*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_OKJJGNBFAOD_OFFSET))(this, a1, a2);
		}

		::System::Boolean BINPCPEDFBK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_BINPCPEDFBK_OFFSET))(this);
		}

		static ::RPG::GameCore::GameEntity* JFNICFDOHGP(::BJHMBGLPOLB* a1, ::System::Boolean a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::BJHMBGLPOLB*, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCCBMLAELL_JFNICFDOHGP_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::GameEntity* JFNICFDOHGP_1(::KOIACJAJFEC* a1, ::System::Boolean a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::KOIACJAJFEC*, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCCBMLAELL_JFNICFDOHGP_1_OFFSET))(a1, a2);
		}

		::System::Void NGHONNAKLBK(::BJHMBGLPOLB* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BJHMBGLPOLB*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_NGHONNAKLBK_OFFSET))(this, a1, a2);
		}

		::System::Void NGHONNAKLBK_1(::BJHMBGLPOLB* a1, ::KOIACJAJFEC* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BJHMBGLPOLB*, ::KOIACJAJFEC*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_NGHONNAKLBK_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DDENKMKJGMC(::BJHMBGLPOLB* a1, ::RPG::GameCore::FateRinCardPileType a2, ::RPG::GameCore::FateRinCardPileType a3, ::System::Boolean a4, ::RPG::GameCore::TaskContext* a5)
		{
			return ((::System::Void(*)(::PVOID, ::BJHMBGLPOLB*, ::RPG::GameCore::FateRinCardPileType, ::RPG::GameCore::FateRinCardPileType, ::System::Boolean, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_DDENKMKJGMC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean JODGPLIMKMO(::BJHMBGLPOLB* a1, ::RPG::GameCore::FateRinCardPileType a2, ::RPG::GameCore::FateRinCardPileType a3, ::System::Boolean a4, ::RPG::GameCore::TaskContext* a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::BJHMBGLPOLB*, ::RPG::GameCore::FateRinCardPileType, ::RPG::GameCore::FateRinCardPileType, ::System::Boolean, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_JODGPLIMKMO_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean KLBILKEIIKJ(::System::Object* a1, ::BJHMBGLPOLB* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::BJHMBGLPOLB*, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCCBMLAELL_KLBILKEIIKJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BOIHLEAFHAB(::BJHMBGLPOLB* a1, ::RPG::GameCore::FateRinCardPileType a2, ::RPG::GameCore::FateRinCardPileType a3, ::System::Boolean a4, ::RPG::GameCore::TaskContext* a5)
		{
			return ((::System::Void(*)(::PVOID, ::BJHMBGLPOLB*, ::RPG::GameCore::FateRinCardPileType, ::RPG::GameCore::FateRinCardPileType, ::System::Boolean, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_BOIHLEAFHAB_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void JFIEGLCPHKJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OOCCBMLAELL_JFIEGLCPHKJ_OFFSET))(this, a1);
		}

		::System::Void PBCPJCBDGGN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OOCCBMLAELL_PBCPJCBDGGN_OFFSET))(this, a1);
		}

		::System::Void EFFANFJNPLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OOCCBMLAELL_EFFANFJNPLB_OFFSET))(this, a1);
		}

		::System::Void EINOCGFAGOJ(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OOCCBMLAELL_EINOCGFAGOJ_OFFSET))(this, a1, a2);
		}

		::BJHMBGLPOLB* IANOJKNMCKD()
		{
			return ((::BJHMBGLPOLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_IANOJKNMCKD_OFFSET))(this);
		}

		::RPG::PoolList_1<::MGGDDCKLNAM>* AAINJKJILMO()
		{
			return ((::RPG::PoolList_1<::MGGDDCKLNAM>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_AAINJKJILMO_OFFSET))(this);
		}

		::System::Boolean LABHLPOEPPE(::BJHMBGLPOLB* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::BJHMBGLPOLB*, ::System::Int32))((::PBYTE)hIl2Cpp + OOCCBMLAELL_LABHLPOEPPE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint OEANFPNCNNC()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_OEANFPNCNNC_OFFSET))(this);
		}

		::System::Void ECNCFPOBBDA(::RPG::GameCore::StringHash a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OOCCBMLAELL_ECNCFPOBBDA_OFFSET))(this, a1, a2);
		}

		::System::Boolean OOFAPPPJNHD(::RPG::GameCore::StringHash a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + OOCCBMLAELL_OOFAPPPJNHD_OFFSET))(this, a1);
		}

		::System::Void LMBIKLPDKCE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OOCCBMLAELL_LMBIKLPDKCE_OFFSET))(this, a1);
		}

		::System::Void IKKGNCDIAAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_IKKGNCDIAAC_OFFSET))(this);
		}

		::RPG::PoolList_1<::BJHMBGLPOLB*>* KNFDJECGDOP(::RPG::GameCore::FateRinCardPileType a1)
		{
			return ((::RPG::PoolList_1<::BJHMBGLPOLB*>*(*)(::PVOID, ::RPG::GameCore::FateRinCardPileType))((::PBYTE)hIl2Cpp + OOCCBMLAELL_KNFDJECGDOP_OFFSET))(this, a1);
		}

		::RPG::PoolList_1<::BJHMBGLPOLB*>* KNFDJECGDOP_1(::System::UInt32 a1, ::RPG::GameCore::FateRinCardPileType a2)
		{
			return ((::RPG::PoolList_1<::BJHMBGLPOLB*>*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FateRinCardPileType))((::PBYTE)hIl2Cpp + OOCCBMLAELL_KNFDJECGDOP_1_OFFSET))(this, a1, a2);
		}

		::System::Void KNFDJECGDOP_2(::System::UInt32 a1, ::RPG::GameCore::FateRinCardPileType a2, ::System::Collections::Generic::List_1<::BJHMBGLPOLB*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FateRinCardPileType, ::System::Collections::Generic::List_1<::BJHMBGLPOLB*>*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_KNFDJECGDOP_2_OFFSET))(this, a1, a2, a3);
		}

		::BJHMBGLPOLB* MPJKKAKMCCO(::System::UInt32 a1)
		{
			return ((::BJHMBGLPOLB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OOCCBMLAELL_MPJKKAKMCCO_OFFSET))(this, a1);
		}

		::System::Void DJJBDFKDHPA(::RPG::GameCore::GameEntity* a1, ::Il2CppArray<::RPG::GameCore::FateRinActionIntentType>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Il2CppArray<::RPG::GameCore::FateRinActionIntentType>*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_DJJBDFKDHPA_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::RPG::GameCore::FateRinActionIntentType>* NNBHHBIMGHP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::FateRinActionIntentType>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_NNBHHBIMGHP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Il2CppArray<::RPG::GameCore::FateRinActionIntentType>*>* DKGCAIEFICL()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Il2CppArray<::RPG::GameCore::FateRinActionIntentType>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_DKGCAIEFICL_OFFSET))(this);
		}

		::System::Boolean JFHIMHONDFP(::BJHMBGLPOLB* a1, ::RPG::GameCore::FateRinCardPileType a2, ::RPG::GameCore::FateRinCardPileType a3, ::RPG::GameCore::TaskContext* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::BJHMBGLPOLB*, ::RPG::GameCore::FateRinCardPileType, ::RPG::GameCore::FateRinCardPileType, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_JFHIMHONDFP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 POBGACJGBDE(::System::UInt32 a1, ::RPG::GameCore::FateRinCardPileType a2, ::RPG::GameCore::FateRinCardPileType a3, ::System::Int32 a4, ::RPG::GameCore::TaskContext* a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FateRinCardPileType, ::RPG::GameCore::FateRinCardPileType, ::System::Int32, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_POBGACJGBDE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 POBGACJGBDE_1(::System::Collections::Generic::List_1<::BJHMBGLPOLB*>* a1, ::RPG::GameCore::FateRinCardPileType a2, ::RPG::GameCore::FateRinCardPileType a3, ::RPG::GameCore::TaskContext* a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::BJHMBGLPOLB*>*, ::RPG::GameCore::FateRinCardPileType, ::RPG::GameCore::FateRinCardPileType, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_POBGACJGBDE_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OOONFFODEHP(::BJHMBGLPOLB* a1, ::RPG::GameCore::FateRinCardPileType a2, ::RPG::GameCore::TaskContext* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BJHMBGLPOLB*, ::RPG::GameCore::FateRinCardPileType, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_OOONFFODEHP_OFFSET))(this, a1, a2, a3);
		}

		::BJHMBGLPOLB* NJEEBLBHALP()
		{
			return ((::BJHMBGLPOLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_NJEEBLBHALP_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* OOFHNBHCGIO(::RPG::GameCore::FateRinCardCasterSource a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::FateRinCardCasterSource))((::PBYTE)hIl2Cpp + OOCCBMLAELL_OOFHNBHCGIO_OFFSET))(this, a1);
		}

		::System::Void OCIAFPHFMAJ(::System::Collections::Generic::List_1<::OILICJACMFA>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::OILICJACMFA>*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_OCIAFPHFMAJ_OFFSET))(this, a1);
		}

		::System::Boolean GLCLIKLKDJH(::OILICJACMFA a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OILICJACMFA))((::PBYTE)hIl2Cpp + OOCCBMLAELL_GLCLIKLKDJH_OFFSET))(this, a1);
		}

		::System::Boolean HELJBGJNEBO(::OILICJACMFA a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OILICJACMFA))((::PBYTE)hIl2Cpp + OOCCBMLAELL_HELJBGJNEBO_OFFSET))(this, a1);
		}

		::System::Void BGMGEIHNGHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_BGMGEIHNGHC_OFFSET))(this);
		}

		::System::Boolean PFJNGDPPKDG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_PFJNGDPPKDG_OFFSET))(this);
		}

		::System::Void MGLCMLIDAMI(::BJHMBGLPOLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJHMBGLPOLB*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_MGLCMLIDAMI_OFFSET))(this, a1);
		}

		::BJHMBGLPOLB* PEPFEDOOEOC()
		{
			return ((::BJHMBGLPOLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_PEPFEDOOEOC_OFFSET))(this);
		}

		::BJHMBGLPOLB* IKLPFIADGLN()
		{
			return ((::BJHMBGLPOLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_IKLPFIADGLN_OFFSET))(this);
		}

		::System::Void OPOJJIJLBAK(::System::Collections::Generic::IList_1<::BJHMBGLPOLB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::BJHMBGLPOLB*>*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_OPOJJIJLBAK_OFFSET))(this, a1);
		}

		::System::Boolean PGEJGJPLHDM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_PGEJGJPLHDM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::BJHMBGLPOLB*>* EOCFJEILPHN()
		{
			return ((::System::Collections::Generic::List_1<::BJHMBGLPOLB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_EOCFJEILPHN_OFFSET))(this);
		}

		::System::Void DDJBLLGEHBE(::BJHMBGLPOLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJHMBGLPOLB*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_DDJBLLGEHBE_OFFSET))(this, a1);
		}

		::System::Void LPGHDPDILIP(::BJHMBGLPOLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJHMBGLPOLB*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_LPGHDPDILIP_OFFSET))(this, a1);
		}

		::System::Void EAHJBMIFBND(::BJHMBGLPOLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJHMBGLPOLB*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_EAHJBMIFBND_OFFSET))(this, a1);
		}

		::System::Void GFMGDOCKNEE(::RPG::GameCore::GameEntity* a1, ::ICHIALIFCIJ a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::ICHIALIFCIJ))((::PBYTE)hIl2Cpp + OOCCBMLAELL_GFMGDOCKNEE_OFFSET))(this, a1, a2);
		}

		::System::Void JMKJKCOAFLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_JMKJKCOAFLD_OFFSET))(this);
		}

		::System::Void LJEAHNNPELO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_LJEAHNNPELO_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint KGOKBELAILP(::BGCNCMGEBBC a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::BGCNCMGEBBC))((::PBYTE)hIl2Cpp + OOCCBMLAELL_KGOKBELAILP_OFFSET))(this, a1);
		}

		::System::Boolean JDAFMBJFPBB(::BJHMBGLPOLB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BJHMBGLPOLB*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_JDAFMBJFPBB_OFFSET))(this, a1);
		}

		::System::Boolean KNPEMGDLBJL(::BJHMBGLPOLB* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::BJHMBGLPOLB*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_KNPEMGDLBJL_OFFSET))(this, a1, a2);
		}

		::JMPLMDKPNDA* ABFMJLDJMFF(::System::UInt32 a1)
		{
			return ((::JMPLMDKPNDA*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OOCCBMLAELL_ABFMJLDJMFF_OFFSET))(this, a1);
		}

		::System::Void ACNFHKBCMKL(::RPG::GameCore::LevelTurnBegin* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnBegin*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_ACNFHKBCMKL_OFFSET))(this, a1);
		}

		::System::Void CGAGANHPAFB(::RPG::GameCore::LevelTurnEndExit* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnEndExit*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_CGAGANHPAFB_OFFSET))(this, a1);
		}

		::System::Void DBFNHBLMPCP(::RPG::GameCore::LevelTurnInsertAbilityAfterUltraSkillBegin* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnInsertAbilityAfterUltraSkillBegin*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_DBFNHBLMPCP_OFFSET))(this, a1);
		}

		::System::Void LLHBOBGGMDH(::RPG::GameCore::LevelTurnWaitActionOrder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnWaitActionOrder*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_LLHBOBGGMDH_OFFSET))(this, a1);
		}

		::System::Void LHLMHGFMLDD(::RPG::GameCore::LevelWaveMonsterBegin* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelWaveMonsterBegin*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_LHLMHGFMLDD_OFFSET))(this, a1);
		}

		::System::Void ECCKGKMKGEM(::RPG::GameCore::LevelCharacterEndAttack* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterEndAttack*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_ECCKGKMKGEM_OFFSET))(this, a1);
		}

		::System::Void ALOHNNKDJDJ(::RPG::GameCore::LevelInsertAbilityFinish* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelInsertAbilityFinish*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_ALOHNNKDJDJ_OFFSET))(this, a1);
		}

		::System::Void HOFEFLOFGJI(::RPG::GameCore::LevelCharacterCreate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterCreate*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_HOFEFLOFGJI_OFFSET))(this, a1);
		}

		::System::Void OPNLMGDAHPO(::RPG::GameCore::LevelCharacterDie* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterDie*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_OPNLMGDAHPO_OFFSET))(this, a1);
		}

		::System::Void PMJFGOCKKKE(::RPG::GameCore::LevelAfterAddModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelAfterAddModifier*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_PMJFGOCKKKE_OFFSET))(this, a1);
		}

		::System::Void IIIHGEKOEMD(::RPG::GameCore::LevelRemoveModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelRemoveModifier*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_IIIHGEKOEMD_OFFSET))(this, a1);
		}

		::System::Void HCDJFOHHCGL(::RPG::GameCore::AbilityAnyHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityAnyHPChange*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_HCDJFOHHCGL_OFFSET))(this, a1);
		}

		::System::Void IPPFPGAKPON(::RPG::GameCore::LevelEntityShieldChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityShieldChange*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_IPPFPGAKPON_OFFSET))(this, a1);
		}

		::System::Void BOCMDPBHPLB(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_BOCMDPBHPLB_OFFSET))(this, a1);
		}

		::System::Void DDAFPAPCELP(::BJHMBGLPOLB* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BJHMBGLPOLB*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_DDAFPAPCELP_OFFSET))(this, a1, a2);
		}

		::System::Void KGCLCBGIDHC(::BJHMBGLPOLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJHMBGLPOLB*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_KGCLCBGIDHC_OFFSET))(this, a1);
		}

		::System::Void GLGAHOOGINJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_GLGAHOOGINJ_OFFSET))(this);
		}

		::System::Void DJLLNNKICOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_DJLLNNKICOP_OFFSET))(this);
		}

		::System::Void GHFDGMPABBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_GHFDGMPABBF_OFFSET))(this);
		}

		::System::Void DCGPPPPJMKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_DCGPPPPJMKF_OFFSET))(this);
		}

		::System::Void PFMCNANDDDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_PFMCNANDDDD_OFFSET))(this);
		}

		::System::Void CKJJNJNENIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_CKJJNJNENIM_OFFSET))(this);
		}

		::System::Void HOIIMAIEEIO(::KOIACJAJFEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOIACJAJFEC*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_HOIIMAIEEIO_OFFSET))(this, a1);
		}

		::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>* ICLCFENJNJN(::KOIACJAJFEC* a1)
		{
			return ((::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>*(*)(::PVOID, ::KOIACJAJFEC*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_ICLCFENJNJN_OFFSET))(this, a1);
		}

		::System::Void CMHDHNMJBIP(::KOIACJAJFEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOIACJAJFEC*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_CMHDHNMJBIP_OFFSET))(this, a1);
		}

		::System::Void LHFCIHCENCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_LHFCIHCENCO_OFFSET))(this);
		}

		::System::Void JJEFIKNBGIA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OOCCBMLAELL_JJEFIKNBGIA_OFFSET))(this, a1);
		}

		::System::Void BCBMFIKDHLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_BCBMFIKDHLK_OFFSET))(this);
		}

		::System::Void INIBBCNDEGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_INIBBCNDEGL_OFFSET))(this);
		}

		::System::Int32 HOGNKGHBEKD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_HOGNKGHBEKD_OFFSET))(this);
		}

		::System::Void NOECAKGBCOI(::BJHMBGLPOLB* a1, ::RPG::GameCore::FateRinKeywordEventType a2)
		{
			return ((::System::Void(*)(::PVOID, ::BJHMBGLPOLB*, ::RPG::GameCore::FateRinKeywordEventType))((::PBYTE)hIl2Cpp + OOCCBMLAELL_NOECAKGBCOI_OFFSET))(this, a1, a2);
		}

		::System::Void FFIEDNKHJEN(::BJHMBGLPOLB* a1, ::RPG::GameCore::TurnBasedModifierEvent a2)
		{
			return ((::System::Void(*)(::PVOID, ::BJHMBGLPOLB*, ::RPG::GameCore::TurnBasedModifierEvent))((::PBYTE)hIl2Cpp + OOCCBMLAELL_FFIEDNKHJEN_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameWorld* NDAKFHEBOEG()
		{
			return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_NDAKFHEBOEG_OFFSET))(this);
		}

		::System::UInt32 get_CurrentTurnCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_GET_CURRENTTURNCOUNT_OFFSET))(this);
		}

		::System::Void set_CurrentTurnCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OOCCBMLAELL_SET_CURRENTTURNCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_WaitOrder()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_GET_WAITORDER_OFFSET))(this);
		}

		::System::Void set_WaitOrder(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCCBMLAELL_SET_WAITORDER_OFFSET))(this, a1);
		}

		::System::Boolean get_ReadyToEndCurrentAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_GET_READYTOENDCURRENTACTION_OFFSET))(this);
		}

		::System::Void set_ReadyToEndCurrentAction(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCCBMLAELL_SET_READYTOENDCURRENTACTION_OFFSET))(this, a1);
		}

		::System::Int32 get_HasMoreActionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_GET_HASMOREACTIONCOUNT_OFFSET))(this);
		}

		::System::Void set_HasMoreActionCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OOCCBMLAELL_SET_HASMOREACTIONCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInOneMoreAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_GET_ISINONEMOREACTION_OFFSET))(this);
		}

		::System::Void set_IsInOneMoreAction(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCCBMLAELL_SET_ISINONEMOREACTION_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::BJHMBGLPOLB*>* GJNHAEGLLCN()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::BJHMBGLPOLB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_GJNHAEGLLCN_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::BJHMBGLPOLB*>* OPGJAGBNJAA()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::BJHMBGLPOLB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_OPGJAGBNJAA_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::BJHMBGLPOLB*>* IIPKMONBPAM()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::BJHMBGLPOLB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_IIPKMONBPAM_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::BJHMBGLPOLB*>* IMHHFMAJPMP()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::BJHMBGLPOLB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_IMHHFMAJPMP_OFFSET))(this);
		}

		::System::Int32 get_CurMana()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_GET_CURMANA_OFFSET))(this);
		}

		::System::Void set_CurMana(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OOCCBMLAELL_SET_CURMANA_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxMana()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_GET_MAXMANA_OFFSET))(this);
		}

		::System::Void set_MaxMana(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OOCCBMLAELL_SET_MAXMANA_OFFSET))(this, a1);
		}

		::System::UInt32 get_HandSlotCapacity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_GET_HANDSLOTCAPACITY_OFFSET))(this);
		}

		::System::Void set_HandSlotCapacity(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OOCCBMLAELL_SET_HANDSLOTCAPACITY_OFFSET))(this, a1);
		}

		::System::Int32 JENFMDHLNJP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_JENFMDHLNJP_OFFSET))(this);
		}

		::System::UInt32 get_HandDrawCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_GET_HANDDRAWCOUNT_OFFSET))(this);
		}

		::System::Void set_HandDrawCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OOCCBMLAELL_SET_HANDDRAWCOUNT_OFFSET))(this, a1);
		}

		::BJHMBGLPOLB* HKMBILABAPE()
		{
			return ((::BJHMBGLPOLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_HKMBILABAPE_OFFSET))(this);
		}

		::KOIACJAJFEC* DFPFOHNIBBL()
		{
			return ((::KOIACJAJFEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_DFPFOHNIBBL_OFFSET))(this);
		}

		::BJHMBGLPOLB* get_CurrentSelectCard()
		{
			return ((::BJHMBGLPOLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_GET_CURRENTSELECTCARD_OFFSET))(this);
		}

		::System::Void set_CurrentSelectCard(::BJHMBGLPOLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJHMBGLPOLB*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_SET_CURRENTSELECTCARD_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* KGLDDONALAJ()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_KGLDDONALAJ_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* CNOGHNIHLOA()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_CNOGHNIHLOA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* NOJOCNONGMA()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_NOJOCNONGMA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* EKHCFAHENAO()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_EKHCFAHENAO_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GDGADMIGKHJ()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_GDGADMIGKHJ_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* KOCLLLMBOIH()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_KOCLLLMBOIH_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* FINDMDFBBJE()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_FINDMDFBBJE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* LGIDJNCMFJA()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_LGIDJNCMFJA_OFFSET))(this);
		}

		::DDBIKAEOHKB* get_KeywordHandlerFactory()
		{
			return ((::DDBIKAEOHKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_GET_KEYWORDHANDLERFACTORY_OFFSET))(this);
		}

		::System::Void set_KeywordHandlerFactory(::DDBIKAEOHKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDBIKAEOHKB*))((::PBYTE)hIl2Cpp + OOCCBMLAELL_SET_KEYWORDHANDLERFACTORY_OFFSET))(this, a1);
		}

		::System::Single GNLKBCFAIMH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_GNLKBCFAIMH_OFFSET))(this);
		}

		::System::Single GPEGNLFLPJC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_GPEGNLFLPJC_OFFSET))(this);
		}

		::DEEJKBIMHAA* LHAAMHFAMEE()
		{
			return ((::DEEJKBIMHAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_LHAAMHFAMEE_OFFSET))(this);
		}

		::DIAHGNIILIK* IGIBNDPKJOK()
		{
			return ((::DIAHGNIILIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCCBMLAELL_IGIBNDPKJOK_OFFSET))(this);
		}

		static ::System::Void _FindCards_g___FindCards_44_0(::System::Object* a1, ::System::Object* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::UInt32))((::PBYTE)hIl2Cpp + OOCCBMLAELL__FINDCARDS_G___FINDCARDS_44_0_OFFSET))(a1, a2, a3);
		}

	};
