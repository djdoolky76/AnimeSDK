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

#define OOCCBMLAELL_AAINJKJILMO_OFFSET UNITYSDK_OFFSET(0xC868780)
#define OOCCBMLAELL_ABFMJLDJMFF_OFFSET UNITYSDK_OFFSET(0xC86BA60)
#define OOCCBMLAELL_ACNFHKBCMKL_OFFSET UNITYSDK_OFFSET(0xC86BB20)
#define OOCCBMLAELL_ALOHNNKDJDJ_OFFSET UNITYSDK_OFFSET(0xC86C180)
#define OOCCBMLAELL_BCBMFIKDHLK_OFFSET UNITYSDK_OFFSET(0xC8651A0)
#define OOCCBMLAELL_BGMGEIHNGHC_OFFSET UNITYSDK_OFFSET(0xC86AA10)
#define OOCCBMLAELL_BINPCPEDFBK_OFFSET UNITYSDK_OFFSET(0xC866E70)
#define OOCCBMLAELL_BOCMDPBHPLB_OFFSET UNITYSDK_OFFSET(0xC86CDA0)
#define OOCCBMLAELL_BOIHLEAFHAB_OFFSET UNITYSDK_OFFSET(0xC866850)
#define OOCCBMLAELL_CGAGANHPAFB_OFFSET UNITYSDK_OFFSET(0xC86BBE0)
#define OOCCBMLAELL_CHKHAGJAACK_OFFSET UNITYSDK_OFFSET(0xC865590)
#define OOCCBMLAELL_CKJJNJNENIM_OFFSET UNITYSDK_OFFSET(0xC86D0E0)
#define OOCCBMLAELL_CMHDHNMJBIP_OFFSET UNITYSDK_OFFSET(0xC866040)
#define OOCCBMLAELL_CNOGHNIHLOA_OFFSET UNITYSDK_OFFSET(0xC86DF30)
#define OOCCBMLAELL_CTOR_OFFSET UNITYSDK_OFFSET(0xC86E130)
#define OOCCBMLAELL_DBFNHBLMPCP_OFFSET UNITYSDK_OFFSET(0xC86BD00)
#define OOCCBMLAELL_DCGPPPPJMKF_OFFSET UNITYSDK_OFFSET(0xC862E30)
#define OOCCBMLAELL_DDAFPAPCELP_OFFSET UNITYSDK_OFFSET(0xC867220)
#define OOCCBMLAELL_DDENKMKJGMC_OFFSET UNITYSDK_OFFSET(0xC867DB0)
#define OOCCBMLAELL_DDJBLLGEHBE_OFFSET UNITYSDK_OFFSET(0xC86AD10)
#define OOCCBMLAELL_DFPFOHNIBBL_OFFSET UNITYSDK_OFFSET(0xC86DEF0)
#define OOCCBMLAELL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC863EE0)
#define OOCCBMLAELL_DJJBDFKDHPA_OFFSET UNITYSDK_OFFSET(0xC8698F0)
#define OOCCBMLAELL_DJLLNNKICOP_OFFSET UNITYSDK_OFFSET(0xC8627A0)
#define OOCCBMLAELL_DKGCAIEFICL_OFFSET UNITYSDK_OFFSET(0xC869B40)
#define OOCCBMLAELL_EAHJBMIFBND_OFFSET UNITYSDK_OFFSET(0xC86B4C0)
#define OOCCBMLAELL_ECCKGKMKGEM_OFFSET UNITYSDK_OFFSET(0xC86C120)
#define OOCCBMLAELL_ECNCFPOBBDA_OFFSET UNITYSDK_OFFSET(0xC868B10)
#define OOCCBMLAELL_EFFANFJNPLB_OFFSET UNITYSDK_OFFSET(0xC868570)
#define OOCCBMLAELL_EFOLCNCINCI_OFFSET UNITYSDK_OFFSET(0xC8661C0)
#define OOCCBMLAELL_EINOCGFAGOJ_OFFSET UNITYSDK_OFFSET(0xC8685C0)
#define OOCCBMLAELL_EKHCFAHENAO_OFFSET UNITYSDK_OFFSET(0xC86DFF0)
#define OOCCBMLAELL_EOCFJEILPHN_OFFSET UNITYSDK_OFFSET(0xC8692D0)
#define OOCCBMLAELL_FFIEDNKHJEN_OFFSET UNITYSDK_OFFSET(0xC866690)
#define OOCCBMLAELL_FINDMDFBBJE_OFFSET UNITYSDK_OFFSET(0xC86A6B0)
#define OOCCBMLAELL_FMNFMLKMHHL_OFFSET UNITYSDK_OFFSET(0xC864C60)
#define OOCCBMLAELL_FNFHPBAKDFC_OFFSET UNITYSDK_OFFSET(0xC865540)
#define OOCCBMLAELL_GCEJDEPLNOK_OFFSET UNITYSDK_OFFSET(0xC8635D0)
#define OOCCBMLAELL_GDGADMIGKHJ_OFFSET UNITYSDK_OFFSET(0xC863D30)
#define OOCCBMLAELL_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0xC863E80)
#define OOCCBMLAELL_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0xC8623C0)
#define OOCCBMLAELL_GET_CURMANA_OFFSET UNITYSDK_OFFSET(0xC86DE50)
#define OOCCBMLAELL_GET_CURRENTSELECTCARD_OFFSET UNITYSDK_OFFSET(0xC86DF00)
#define OOCCBMLAELL_GET_CURRENTTURNCOUNT_OFFSET UNITYSDK_OFFSET(0xC86DD70)
#define OOCCBMLAELL_GET_HANDDRAWCOUNT_OFFSET UNITYSDK_OFFSET(0xC86DEC0)
#define OOCCBMLAELL_GET_HANDSLOTCAPACITY_OFFSET UNITYSDK_OFFSET(0xC86DE90)
#define OOCCBMLAELL_GET_HASMOREACTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xC86DDD0)
#define OOCCBMLAELL_GET_ISINONEMOREACTION_OFFSET UNITYSDK_OFFSET(0xC86DDF0)
#define OOCCBMLAELL_GET_KEYWORDHANDLERFACTORY_OFFSET UNITYSDK_OFFSET(0xC86E050)
#define OOCCBMLAELL_GET_MAXMANA_OFFSET UNITYSDK_OFFSET(0xC86DE70)
#define OOCCBMLAELL_GET_READYTOENDCURRENTACTION_OFFSET UNITYSDK_OFFSET(0xC86DDB0)
#define OOCCBMLAELL_GET_WAITORDER_OFFSET UNITYSDK_OFFSET(0xC86DD90)
#define OOCCBMLAELL_GFMGDOCKNEE_OFFSET UNITYSDK_OFFSET(0xC86B560)
#define OOCCBMLAELL_GHFDGMPABBF_OFFSET UNITYSDK_OFFSET(0xC862BA0)
#define OOCCBMLAELL_GJNHAEGLLCN_OFFSET UNITYSDK_OFFSET(0xC86DE10)
#define OOCCBMLAELL_GLCLIKLKDJH_OFFSET UNITYSDK_OFFSET(0xC86A840)
#define OOCCBMLAELL_GLGAHOOGINJ_OFFSET UNITYSDK_OFFSET(0xC8629E0)
#define OOCCBMLAELL_GNLKBCFAIMH_OFFSET UNITYSDK_OFFSET(0xC86E070)
#define OOCCBMLAELL_GPEGNLFLPJC_OFFSET UNITYSDK_OFFSET(0xC86E0D0)
#define OOCCBMLAELL_HAGGHJBFMFI_OFFSET UNITYSDK_OFFSET(0xC864240)
#define OOCCBMLAELL_HCDJFOHHCGL_OFFSET UNITYSDK_OFFSET(0xC86CB20)
#define OOCCBMLAELL_HELJBGJNEBO_OFFSET UNITYSDK_OFFSET(0xC86A970)
#define OOCCBMLAELL_HKMBILABAPE_OFFSET UNITYSDK_OFFSET(0xC86DEE0)
#define OOCCBMLAELL_HOFEFLOFGJI_OFFSET UNITYSDK_OFFSET(0xC86C1E0)
#define OOCCBMLAELL_HOGNKGHBEKD_OFFSET UNITYSDK_OFFSET(0xC867E60)
#define OOCCBMLAELL_HOIIMAIEEIO_OFFSET UNITYSDK_OFFSET(0xC865F40)
#define OOCCBMLAELL_IANOJKNMCKD_OFFSET UNITYSDK_OFFSET(0xC8686F0)
#define OOCCBMLAELL_ICLCFENJNJN_OFFSET UNITYSDK_OFFSET(0xC86D1C0)
#define OOCCBMLAELL_IGIBNDPKJOK_OFFSET UNITYSDK_OFFSET(0xC869360)
#define OOCCBMLAELL_IIIHGEKOEMD_OFFSET UNITYSDK_OFFSET(0xC86C9B0)
#define OOCCBMLAELL_IIPKMONBPAM_OFFSET UNITYSDK_OFFSET(0xC86DE30)
#define OOCCBMLAELL_IKKGNCDIAAC_OFFSET UNITYSDK_OFFSET(0xC868C80)
#define OOCCBMLAELL_IKLPFIADGLN_OFFSET UNITYSDK_OFFSET(0xC86AAF0)
#define OOCCBMLAELL_IMHHFMAJPMP_OFFSET UNITYSDK_OFFSET(0xC86DE40)
#define OOCCBMLAELL_INIBBCNDEGL_OFFSET UNITYSDK_OFFSET(0xC86DA40)
#define OOCCBMLAELL_IPPFPGAKPON_OFFSET UNITYSDK_OFFSET(0xC86CC90)
#define OOCCBMLAELL_JDAFMBJFPBB_OFFSET UNITYSDK_OFFSET(0xC86B890)
#define OOCCBMLAELL_JENFMDHLNJP_OFFSET UNITYSDK_OFFSET(0xC86DEB0)
#define OOCCBMLAELL_JFHIMHONDFP_OFFSET UNITYSDK_OFFSET(0xC869B90)
#define OOCCBMLAELL_JFIEGLCPHKJ_OFFSET UNITYSDK_OFFSET(0xC8683F0)
#define OOCCBMLAELL_JFNICFDOHGP_1_OFFSET UNITYSDK_OFFSET(0xC8677A0)
#define OOCCBMLAELL_JFNICFDOHGP_OFFSET UNITYSDK_OFFSET(0xC8671C0)
#define OOCCBMLAELL_JJEFIKNBGIA_OFFSET UNITYSDK_OFFSET(0xC8643C0)
#define OOCCBMLAELL_JKOIENJJFJO_OFFSET UNITYSDK_OFFSET(0xC863DD0)
#define OOCCBMLAELL_JMKJKCOAFLD_OFFSET UNITYSDK_OFFSET(0xC864BF0)
#define OOCCBMLAELL_JODGPLIMKMO_OFFSET UNITYSDK_OFFSET(0xC8663C0)
#define OOCCBMLAELL_KGCLCBGIDHC_OFFSET UNITYSDK_OFFSET(0xC867510)
#define OOCCBMLAELL_KGLDDONALAJ_OFFSET UNITYSDK_OFFSET(0xC86DF20)
#define OOCCBMLAELL_KGOKBELAILP_OFFSET UNITYSDK_OFFSET(0xC86B7D0)
#define OOCCBMLAELL_KLBILKEIIKJ_OFFSET UNITYSDK_OFFSET(0xC8682D0)
#define OOCCBMLAELL_KNFDJECGDOP_1_OFFSET UNITYSDK_OFFSET(0xC868230)
#define OOCCBMLAELL_KNFDJECGDOP_2_OFFSET UNITYSDK_OFFSET(0xC8693C0)
#define OOCCBMLAELL_KNFDJECGDOP_OFFSET UNITYSDK_OFFSET(0xC868E60)
#define OOCCBMLAELL_KNPEMGDLBJL_OFFSET UNITYSDK_OFFSET(0xC86B920)
#define OOCCBMLAELL_KOCLLLMBOIH_OFFSET UNITYSDK_OFFSET(0xC86B6E0)
#define OOCCBMLAELL_LABHLPOEPPE_OFFSET UNITYSDK_OFFSET(0xC8689E0)
#define OOCCBMLAELL_LBLGOJOCGAI_OFFSET UNITYSDK_OFFSET(0xC865D60)
#define OOCCBMLAELL_LGIDJNCMFJA_OFFSET UNITYSDK_OFFSET(0xC86A750)
#define OOCCBMLAELL_LHAAMHFAMEE_OFFSET UNITYSDK_OFFSET(0xC86A1C0)
#define OOCCBMLAELL_LHFCIHCENCO_OFFSET UNITYSDK_OFFSET(0xC868D70)
#define OOCCBMLAELL_LHLMHGFMLDD_OFFSET UNITYSDK_OFFSET(0xC86BFF0)
#define OOCCBMLAELL_LIHPGEGGBEL_OFFSET UNITYSDK_OFFSET(0xC8649E0)
#define OOCCBMLAELL_LJEAHNNPELO_OFFSET UNITYSDK_OFFSET(0xC86AFC0)
#define OOCCBMLAELL_LLHBOBGGMDH_OFFSET UNITYSDK_OFFSET(0xC86BDF0)
#define OOCCBMLAELL_LMBIKLPDKCE_OFFSET UNITYSDK_OFFSET(0xC868C30)
#define OOCCBMLAELL_LPGHDPDILIP_OFFSET UNITYSDK_OFFSET(0xC86B230)
#define OOCCBMLAELL_MGLCMLIDAMI_OFFSET UNITYSDK_OFFSET(0xC867C90)
#define OOCCBMLAELL_MPJKKAKMCCO_OFFSET UNITYSDK_OFFSET(0xC869840)
#define OOCCBMLAELL_NDAKFHEBOEG_OFFSET UNITYSDK_OFFSET(0xC86DD10)
#define OOCCBMLAELL_NGHONNAKLBK_1_OFFSET UNITYSDK_OFFSET(0xC867990)
#define OOCCBMLAELL_NGHONNAKLBK_OFFSET UNITYSDK_OFFSET(0xC8674A0)
#define OOCCBMLAELL_NJEEBLBHALP_OFFSET UNITYSDK_OFFSET(0xC86A5E0)
#define OOCCBMLAELL_NJFNCKMAHAE_OFFSET UNITYSDK_OFFSET(0xC862DE0)
#define OOCCBMLAELL_NNBHHBIMGHP_OFFSET UNITYSDK_OFFSET(0xC869A60)
#define OOCCBMLAELL_NOECAKGBCOI_OFFSET UNITYSDK_OFFSET(0xC86DCA0)
#define OOCCBMLAELL_NOJOCNONGMA_OFFSET UNITYSDK_OFFSET(0xC86DF90)
#define OOCCBMLAELL_OCIAFPHFMAJ_OFFSET UNITYSDK_OFFSET(0xC86A7E0)
#define OOCCBMLAELL_OEANFPNCNNC_OFFSET UNITYSDK_OFFSET(0xC867C30)
#define OOCCBMLAELL_OKJJGNBFAOD_OFFSET UNITYSDK_OFFSET(0xC866A50)
#define OOCCBMLAELL_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0xC862910)
#define OOCCBMLAELL_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xC8623D0)
#define OOCCBMLAELL_OOFAPPPJNHD_OFFSET UNITYSDK_OFFSET(0xC868B80)
#define OOCCBMLAELL_OOFHNBHCGIO_OFFSET UNITYSDK_OFFSET(0xC86A640)
#define OOCCBMLAELL_OOONFFODEHP_OFFSET UNITYSDK_OFFSET(0xC86A4D0)
#define OOCCBMLAELL_OPGJAGBNJAA_OFFSET UNITYSDK_OFFSET(0xC86DE20)
#define OOCCBMLAELL_OPNLMGDAHPO_OFFSET UNITYSDK_OFFSET(0xC86C750)
#define OOCCBMLAELL_OPOJJIJLBAK_OFFSET UNITYSDK_OFFSET(0xC86AB80)
#define OOCCBMLAELL_PBCPJCBDGGN_OFFSET UNITYSDK_OFFSET(0xC868510)
#define OOCCBMLAELL_PCCMMCHLCCO_OFFSET UNITYSDK_OFFSET(0xC863A30)
#define OOCCBMLAELL_PEPFEDOOEOC_OFFSET UNITYSDK_OFFSET(0xC867D20)
#define OOCCBMLAELL_PFJNGDPPKDG_OFFSET UNITYSDK_OFFSET(0xC86AA90)
#define OOCCBMLAELL_PFMCNANDDDD_OFFSET UNITYSDK_OFFSET(0xC863190)
#define OOCCBMLAELL_PGEJGJPLHDM_OFFSET UNITYSDK_OFFSET(0xC86AC70)
#define OOCCBMLAELL_PIMHFOAHCPI_OFFSET UNITYSDK_OFFSET(0xC863BC0)
#define OOCCBMLAELL_PMJFGOCKKKE_OFFSET UNITYSDK_OFFSET(0xC86C840)
#define OOCCBMLAELL_POBGACJGBDE_1_OFFSET UNITYSDK_OFFSET(0xC86A220)
#define OOCCBMLAELL_POBGACJGBDE_OFFSET UNITYSDK_OFFSET(0xC869D80)
#define OOCCBMLAELL_SET_CURMANA_OFFSET UNITYSDK_OFFSET(0xC86DE60)
#define OOCCBMLAELL_SET_CURRENTSELECTCARD_OFFSET UNITYSDK_OFFSET(0xC86DF10)
#define OOCCBMLAELL_SET_CURRENTTURNCOUNT_OFFSET UNITYSDK_OFFSET(0xC86DD80)
#define OOCCBMLAELL_SET_HANDDRAWCOUNT_OFFSET UNITYSDK_OFFSET(0xC86DED0)
#define OOCCBMLAELL_SET_HANDSLOTCAPACITY_OFFSET UNITYSDK_OFFSET(0xC86DEA0)
#define OOCCBMLAELL_SET_HASMOREACTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xC86DDE0)
#define OOCCBMLAELL_SET_ISINONEMOREACTION_OFFSET UNITYSDK_OFFSET(0xC86DE00)
#define OOCCBMLAELL_SET_KEYWORDHANDLERFACTORY_OFFSET UNITYSDK_OFFSET(0xC86E060)
#define OOCCBMLAELL_SET_MAXMANA_OFFSET UNITYSDK_OFFSET(0xC86DE80)
#define OOCCBMLAELL_SET_READYTOENDCURRENTACTION_OFFSET UNITYSDK_OFFSET(0xC86DDC0)
#define OOCCBMLAELL_SET_WAITORDER_OFFSET UNITYSDK_OFFSET(0xC86DDA0)
#define OOCCBMLAELL_TICK_OFFSET UNITYSDK_OFFSET(0xC8641C0)
#define OOCCBMLAELL__FINDCARDS_G___FINDCARDS_44_0_OFFSET UNITYSDK_OFFSET(0xC869630)

inline static constexpr unsigned int OOCCBMLAELL_TypeDefinitionIndex = 57195;

	class OOCCBMLAELL : public ::LHHEGNEBMLN
	{
	public:
		::JCHCMMOKOOB* MBHKLDCGHDI; // 0x48
		::System::Collections::Generic::Stack_1<::BJHMBGLPOLB*>* CPFNEMACCIC; // 0x50
		::KOIACJAJFEC* JGEACAIOLIA; // 0x58
		::System::Collections::Generic::List_1<::BJHMBGLPOLB*>* NLEBDOIGMND; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BJHMBGLPOLB*>* KODFGLNDGDG; // 0x68
		::System::String* BFGCOKGMGCH; // 0x70
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* GACEAOFPHOL; // 0x78
		::OKLEONFEGAC* PEPFBKDAHAF; // 0x80
		::System::Collections::Generic::List_1<::System::UInt32>* KHBEOADDIFM; // 0x88
		::APPLKDBLEAG* IMJOJLEGCME; // 0x90
		::System::Collections::Generic::List_1<::BJHMBGLPOLB*>* KNBJLAPEIFJ; // 0x98
		::System::String* DMKCLLAPIKO; // 0xA0
		::System::Collections::Generic::Stack_1<::RPG::PoolList_1<::BJHMBGLPOLB*>*>* NNLJJEJOMIE; // 0xA8
		::System::Collections::Generic::List_1<::BJHMBGLPOLB*>* JDDNEOCPBEJ; // 0xB0
		::System::Collections::Generic::List_1<::BJHMBGLPOLB*>* HFBHBDDAPHI; // 0xB8
		::RPG::GameCore::GameEntity* CIEGIBMLLON; // 0xC0
		::RPG::GameCore::GameEntity* MCJBKBMAIOI; // 0xC8
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0xD0
		::BJHMBGLPOLB* _CurrentSelectCard_k__BackingField; // 0xD8
		::System::Collections::Generic::List_1<::MGGDDCKLNAM>* OCCEKOIJNAJ; // 0xE0
		::System::String* PNJGNIHCNLE; // 0xE8
		::System::Collections::Generic::List_1<::OILICJACMFA>* MDOKCDBFECN; // 0xF0
		::BJHMBGLPOLB* CJENPFHAMAC; // 0xF8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::KOIACJAJFEC*>* GOCIDOFAICJ; // 0x100
		::RPG::GameCore::GameEntity* GONACHAMFKD; // 0x108
		::DDBIKAEOHKB* _KeywordHandlerFactory_k__BackingField; // 0x110
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Il2CppArray<::RPG::GameCore::FateRinActionIntentType>*>* MGHLMPAKBNB; // 0x118
		::System::Collections::Generic::List_1<::OILICJACMFA>* FBBMOLAMAGM; // 0x120
		::RPG::GameCore::GameEntity* DABEHBNAKIM; // 0x128
		::DJJJMOFDALB* BOPMNDJHAGH; // 0x130
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* AAGHKELJKCN; // 0x138
		::JLKNHPDJPMB* LJKBNIGOENI; // 0x140
		::System::UInt32 _HandDrawCount_k__BackingField; // 0x148
		::System::Int32 _CurMana_k__BackingField; // 0x14C
		::System::Boolean KIDDECCNHEH; // 0x150
		::System::Boolean _WaitOrder_k__BackingField; // 0x151
		::System::Boolean _ReadyToEndCurrentAction_k__BackingField; // 0x152
		::System::Boolean _IsInOneMoreAction_k__BackingField; // 0x153
		::System::Int32 _MaxMana_k__BackingField; // 0x154
		::System::Int32 _HasMoreActionCount_k__BackingField; // 0x158
		::System::UInt32 _CurrentTurnCount_k__BackingField; // 0x15C
		::System::UInt32 JPCAADEEEAI; // 0x160
		::System::UInt32 _HandSlotCapacity_k__BackingField; // 0x164
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
