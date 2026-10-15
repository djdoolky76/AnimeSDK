#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PMMIGNNAIJB.h"
#include "unitysdk/RPG/GameCore/DiceCombatDirectDamageStyle.h"
#include "unitysdk/RPG/GameCore/DiceCombatModifierFlag.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/DiceCombatModifierEvent.h"
#include "unitysdk/ONGJCEFKLAC.h"
class AIMNKMEFBKE;
class GGGFJIPDCKA;
class GHNMNFHDCME;
class GKIENEOOMBC;
class GLPPDCIBMIH;
class HAFCMNPMFGO;
class IBPGDJEBPFN;
class IJFIHJJPHNA;
class PDPMIHGIFDP;
class PINGIDJDIMH;
class PLAJONHLDJN;
namespace RPG::GameCore { class DiceCombatInsertAbilityConfig; }
namespace RPG::GameCore { class DiceCombatModifierConfig; }
namespace RPG::GameCore { class DiceCombatTaskConfig_SetConfirmDiceCountToModifierMap; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AONBKHCHAHK_AAAOBADAPCL_OFFSET UNITYSDK_OFFSET(0x1C571ED0)
#define AONBKHCHAHK_ACBOGGKFHFI_OFFSET UNITYSDK_OFFSET(0x1C56A5E0)
#define AONBKHCHAHK_ACEKLBKFCKO_OFFSET UNITYSDK_OFFSET(0x1C56F9F0)
#define AONBKHCHAHK_AGNAMJIPMOL_OFFSET UNITYSDK_OFFSET(0x1C56BE10)
#define AONBKHCHAHK_AHACLKEKLJD_OFFSET UNITYSDK_OFFSET(0x1C567FC0)
#define AONBKHCHAHK_AIEAIPBGPJP_OFFSET UNITYSDK_OFFSET(0x1C573640)
#define AONBKHCHAHK_AIENLKNLLFE_OFFSET UNITYSDK_OFFSET(0x1C571200)
#define AONBKHCHAHK_AJHOAKPBMAK_OFFSET UNITYSDK_OFFSET(0x1C56CA60)
#define AONBKHCHAHK_ANJLIBBNKDM_OFFSET UNITYSDK_OFFSET(0x1C56BC60)
#define AONBKHCHAHK_BBMAFGEFKIB_OFFSET UNITYSDK_OFFSET(0x1C568260)
#define AONBKHCHAHK_BICHDPFEKBH_OFFSET UNITYSDK_OFFSET(0x1C56BC00)
#define AONBKHCHAHK_BKCBOIBCDJM_OFFSET UNITYSDK_OFFSET(0x1C567DA0)
#define AONBKHCHAHK_BKEOEMFFLGN_OFFSET UNITYSDK_OFFSET(0x1C56D030)
#define AONBKHCHAHK_BNABBJIKKMN_OFFSET UNITYSDK_OFFSET(0x1C56B380)
#define AONBKHCHAHK_BOOFFDAFCCL_OFFSET UNITYSDK_OFFSET(0x1C56F510)
#define AONBKHCHAHK_CEFFNGMHNND_OFFSET UNITYSDK_OFFSET(0x1C56DD50)
#define AONBKHCHAHK_CHOAAANPNBC_OFFSET UNITYSDK_OFFSET(0x1C5724C0)
#define AONBKHCHAHK_CLDFEEHMDHN_OFFSET UNITYSDK_OFFSET(0x1C5662C0)
#define AONBKHCHAHK_COFGMIFAOME_OFFSET UNITYSDK_OFFSET(0x1C5700E0)
#define AONBKHCHAHK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C56F570)
#define AONBKHCHAHK_DCFPLGCAHNB_OFFSET UNITYSDK_OFFSET(0x1C56A1B0)
#define AONBKHCHAHK_DDKNEEEGMMF_OFFSET UNITYSDK_OFFSET(0x1C56C230)
#define AONBKHCHAHK_DMFEKHGLBBE_OFFSET UNITYSDK_OFFSET(0x1C56D7E0)
#define AONBKHCHAHK_DPFDIMBAKIF_OFFSET UNITYSDK_OFFSET(0x1C56D410)
#define AONBKHCHAHK_EAELFFIADPL_OFFSET UNITYSDK_OFFSET(0x1C56DFB0)
#define AONBKHCHAHK_EAJDONEAKAO_OFFSET UNITYSDK_OFFSET(0x1C572530)
#define AONBKHCHAHK_ECLJADMLDCP_OFFSET UNITYSDK_OFFSET(0x1C5712E0)
#define AONBKHCHAHK_EHPKDMMFBGC_OFFSET UNITYSDK_OFFSET(0x1C5676A0)
#define AONBKHCHAHK_EJBDOEFFNBC_OFFSET UNITYSDK_OFFSET(0x1C5737A0)
#define AONBKHCHAHK_EKNGKGHIKNF_OFFSET UNITYSDK_OFFSET(0x1C568750)
#define AONBKHCHAHK_ELFKGCHOHEK_OFFSET UNITYSDK_OFFSET(0x1C5700A0)
#define AONBKHCHAHK_ELLJIHNKNNF_OFFSET UNITYSDK_OFFSET(0x1C5695D0)
#define AONBKHCHAHK_EMPEMIIDFOG_OFFSET UNITYSDK_OFFSET(0x1C570850)
#define AONBKHCHAHK_EPAPDEMOEFP_OFFSET UNITYSDK_OFFSET(0x1C56EDD0)
#define AONBKHCHAHK_FBDPOJABCJF_OFFSET UNITYSDK_OFFSET(0x1C567370)
#define AONBKHCHAHK_FGKCLINNMND_OFFSET UNITYSDK_OFFSET(0x1C572D80)
#define AONBKHCHAHK_FJAKIKADFOF_OFFSET UNITYSDK_OFFSET(0x1C573CE0)
#define AONBKHCHAHK_FPHDIBAMDKC_OFFSET UNITYSDK_OFFSET(0x1C56C700)
#define AONBKHCHAHK_GAFNGDANOMD_OFFSET UNITYSDK_OFFSET(0x1C568880)
#define AONBKHCHAHK_GBCCDFACEMA_OFFSET UNITYSDK_OFFSET(0x1C5677A0)
#define AONBKHCHAHK_GDCFIBJBBID_OFFSET UNITYSDK_OFFSET(0x1C566420)
#define AONBKHCHAHK_GELHGKELOCL_OFFSET UNITYSDK_OFFSET(0x1C56FFF0)
#define AONBKHCHAHK_GLFIKMJDMFE_OFFSET UNITYSDK_OFFSET(0x1C56A030)
#define AONBKHCHAHK_GNKKEIHIJJD_OFFSET UNITYSDK_OFFSET(0x1C571190)
#define AONBKHCHAHK_GOGCCPGHAII_OFFSET UNITYSDK_OFFSET(0x1C56D230)
#define AONBKHCHAHK_HAJOEJOPGOC_OFFSET UNITYSDK_OFFSET(0x1C56E7C0)
#define AONBKHCHAHK_HEFFDFPLCJL_OFFSET UNITYSDK_OFFSET(0x1C573910)
#define AONBKHCHAHK_HEJBBBJEDOI_OFFSET UNITYSDK_OFFSET(0x1C56B8D0)
#define AONBKHCHAHK_HFDHHNKFDAB_OFFSET UNITYSDK_OFFSET(0x1C56E640)
#define AONBKHCHAHK_HHGANAJFHNK_OFFSET UNITYSDK_OFFSET(0x1C56BAA0)
#define AONBKHCHAHK_HNKJCCAKLOB_OFFSET UNITYSDK_OFFSET(0x1C56DBA0)
#define AONBKHCHAHK_HPLHMIIHAIJ_OFFSET UNITYSDK_OFFSET(0x1C56E170)
#define AONBKHCHAHK_IIGODPGHKBO_OFFSET UNITYSDK_OFFSET(0x1C5731F0)
#define AONBKHCHAHK_IIMIFFIHBHA_OFFSET UNITYSDK_OFFSET(0x1C566EC0)
#define AONBKHCHAHK_IJKLPLIPMJA_OFFSET UNITYSDK_OFFSET(0x1C570060)
#define AONBKHCHAHK_IJMKFBKAALN_OFFSET UNITYSDK_OFFSET(0x1C567950)
#define AONBKHCHAHK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C56F650)
#define AONBKHCHAHK_INPFKEJBHLN_OFFSET UNITYSDK_OFFSET(0x1C567AB0)
#define AONBKHCHAHK_IOCMNEJDDKN_OFFSET UNITYSDK_OFFSET(0x1C572F50)
#define AONBKHCHAHK_IPHNBFMAMEJ_OFFSET UNITYSDK_OFFSET(0x1C572D00)
#define AONBKHCHAHK_JGHKLMBJLMG_OFFSET UNITYSDK_OFFSET(0x1C56D9C0)
#define AONBKHCHAHK_JKPBOGAEKKM_OFFSET UNITYSDK_OFFSET(0x1C568F40)
#define AONBKHCHAHK_JMIKJDJIBBB_OFFSET UNITYSDK_OFFSET(0x1C56DE50)
#define AONBKHCHAHK_KBMGHHBLDKP_OFFSET UNITYSDK_OFFSET(0x1C56A490)
#define AONBKHCHAHK_KFKOCPJJMDA_OFFSET UNITYSDK_OFFSET(0x1C567010)
#define AONBKHCHAHK_KHPEFBEKHMI_OFFSET UNITYSDK_OFFSET(0x1C56F800)
#define AONBKHCHAHK_KIPAHCHJFOB_OFFSET UNITYSDK_OFFSET(0x1C56C3E0)
#define AONBKHCHAHK_KLFJHOEMOAP_OFFSET UNITYSDK_OFFSET(0x1C56B700)
#define AONBKHCHAHK_LBCANEOCAMH_OFFSET UNITYSDK_OFFSET(0x1C56D5C0)
#define AONBKHCHAHK_LHDLOINPNEF_OFFSET UNITYSDK_OFFSET(0x1C5704C0)
#define AONBKHCHAHK_LHNKOLIGFAL_OFFSET UNITYSDK_OFFSET(0x1C56EAA0)
#define AONBKHCHAHK_LIPLJKALFNB_OFFSET UNITYSDK_OFFSET(0x1C56E350)
#define AONBKHCHAHK_LJBMLBNKBKG_OFFSET UNITYSDK_OFFSET(0x1C56FE10)
#define AONBKHCHAHK_LJNAICJOBGC_OFFSET UNITYSDK_OFFSET(0x1C5679A0)
#define AONBKHCHAHK_LKKPJMIHPGL_OFFSET UNITYSDK_OFFSET(0x1C56E4D0)
#define AONBKHCHAHK_LLJHIDAJJOA_OFFSET UNITYSDK_OFFSET(0x1C56F690)
#define AONBKHCHAHK_LMJMMIDKBMC_OFFSET UNITYSDK_OFFSET(0x1C572640)
#define AONBKHCHAHK_MDNDFJDDJOD_OFFSET UNITYSDK_OFFSET(0x1C56C8B0)
#define AONBKHCHAHK_MELDGHJPNPA_OFFSET UNITYSDK_OFFSET(0x1C56E930)
#define AONBKHCHAHK_MIGLAHFCGLE_OFFSET UNITYSDK_OFFSET(0x1C5725C0)
#define AONBKHCHAHK_MLHICBBFKDE_OFFSET UNITYSDK_OFFSET(0x1C571120)
#define AONBKHCHAHK_NFONBLHEGGO_OFFSET UNITYSDK_OFFSET(0x1C571270)
#define AONBKHCHAHK_NHHBJIMKHOH_OFFSET UNITYSDK_OFFSET(0x1C566CA0)
#define AONBKHCHAHK_NHIHCEHKNAO_OFFSET UNITYSDK_OFFSET(0x1C56CDF0)
#define AONBKHCHAHK_NJBFBHGGAAH_OFFSET UNITYSDK_OFFSET(0x1C566790)
#define AONBKHCHAHK_NKAPDEOOCHJ_OFFSET UNITYSDK_OFFSET(0x1C571D90)
#define AONBKHCHAHK_NLFICOHGLND_OFFSET UNITYSDK_OFFSET(0x1C566640)
#define AONBKHCHAHK_NPCFDLNKBGH_OFFSET UNITYSDK_OFFSET(0x1C56B1F0)
#define AONBKHCHAHK_OCHNDAOBEEG_OFFSET UNITYSDK_OFFSET(0x1C5673D0)
#define AONBKHCHAHK_ODFMKBDJCCD_OFFSET UNITYSDK_OFFSET(0x1C573360)
#define AONBKHCHAHK_OFKGANFOKLP_OFFSET UNITYSDK_OFFSET(0x1C569E40)
#define AONBKHCHAHK_OGJCBAHOCND_OFFSET UNITYSDK_OFFSET(0x1C571460)
#define AONBKHCHAHK_OJBNKPGOFIG_OFFSET UNITYSDK_OFFSET(0x1C571350)
#define AONBKHCHAHK_OKJDEIBFMMC_OFFSET UNITYSDK_OFFSET(0x1C56A2D0)
#define AONBKHCHAHK_OKNCPGBPEMG_OFFSET UNITYSDK_OFFSET(0x1C56CC10)
#define AONBKHCHAHK_OLMNHJFAGBJ_OFFSET UNITYSDK_OFFSET(0x1C572130)
#define AONBKHCHAHK_PAKPGDMIJBM_OFFSET UNITYSDK_OFFSET(0x1C56BFE0)
#define AONBKHCHAHK_PBFFBCHGKPH_OFFSET UNITYSDK_OFFSET(0x1C5693E0)
#define AONBKHCHAHK_PDENAPNFPPF_OFFSET UNITYSDK_OFFSET(0x1C56C540)
#define AONBKHCHAHK_PIFPIHDHJGM_OFFSET UNITYSDK_OFFSET(0x1C5734D0)
#define AONBKHCHAHK_PMPLLODEPJN_OFFSET UNITYSDK_OFFSET(0x1C56AE90)
#define AONBKHCHAHK_PPFEKENKLDP_OFFSET UNITYSDK_OFFSET(0x1C567430)

inline static constexpr unsigned int AONBKHCHAHK_TypeDefinitionIndex = 36429;

	class AONBKHCHAHK : public ::PMMIGNNAIJB
	{
	public:
		::System::Collections::Generic::List_1<::GKIENEOOMBC*>* CLFPCADHMKJ; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::DiceCombatTaskConfig_SetConfirmDiceCountToModifierMap*>* CFFMLBIBGHP; // 0x20
		::AIMNKMEFBKE* EEFMDEHLLFI; // 0x28
		::PLAJONHLDJN* IBGLIGGOIEK; // 0x30
		::IJFIHJJPHNA* MMGJEEAHPAA; // 0x38
		::IBPGDJEBPFN* LEHDPKMCCOM; // 0x40
		::IJFIHJJPHNA* CCAEOJEOMKC; // 0x48
		::System::Single ACCIABCONNP; // 0x50
		::System::UInt32 COMIKEOMOFK; // 0x54
		::System::UInt32 EHENOOAJDGB; // 0x58
		::System::UInt32 HGIFFLOLONB; // 0x5C
		// static const ::System::Object KEJAFJKNLIO; // 0x0
		// static const ::System::Object ONLDMCMIAOO; // 0x0
		::System::Void _ctor(::PLAJONHLDJN* a1, ::AIMNKMEFBKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PLAJONHLDJN*, ::AIMNKMEFBKE*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_CTOR_OFFSET))(this, a1, a2);
		}

		::GKIENEOOMBC* CLDFEEHMDHN(::GGGFJIPDCKA* a1)
		{
			return ((::GKIENEOOMBC*(*)(::PVOID, ::GGGFJIPDCKA*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_CLDFEEHMDHN_OFFSET))(this, a1);
		}

		::System::Boolean GDCFIBJBBID(::GKIENEOOMBC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKIENEOOMBC*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_GDCFIBJBBID_OFFSET))(this, a1);
		}

		::System::Void NLFICOHGLND(::GKIENEOOMBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKIENEOOMBC*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_NLFICOHGLND_OFFSET))(this, a1);
		}

		::RPG::GameCore::DiceCombatInsertAbilityConfig* NJBFBHGGAAH(::IJFIHJJPHNA* a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::DiceCombatInsertAbilityConfig*(*)(::PVOID, ::IJFIHJJPHNA*, ::System::String*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_NJBFBHGGAAH_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::DiceCombatInsertAbilityConfig* NHHBJIMKHOH(::IJFIHJJPHNA* a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::DiceCombatInsertAbilityConfig*(*)(::PVOID, ::IJFIHJJPHNA*, ::System::String*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_NHHBJIMKHOH_OFFSET))(this, a1, a2);
		}

		::System::Void KFKOCPJJMDA(::GGGFJIPDCKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGGFJIPDCKA*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_KFKOCPJJMDA_OFFSET))(this, a1);
		}

		::System::Boolean FBDPOJABCJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AONBKHCHAHK_FBDPOJABCJF_OFFSET))(this);
		}

		::System::Boolean OCHNDAOBEEG(::GKIENEOOMBC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKIENEOOMBC*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_OCHNDAOBEEG_OFFSET))(this, a1);
		}

		::System::Void PPFEKENKLDP(::GKIENEOOMBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKIENEOOMBC*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_PPFEKENKLDP_OFFSET))(this, a1);
		}

		::GKIENEOOMBC* EHPKDMMFBGC()
		{
			return ((::GKIENEOOMBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + AONBKHCHAHK_EHPKDMMFBGC_OFFSET))(this);
		}

		::System::Void GBCCDFACEMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONBKHCHAHK_GBCCDFACEMA_OFFSET))(this);
		}

		::System::UInt32 IJMKFBKAALN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AONBKHCHAHK_IJMKFBKAALN_OFFSET))(this);
		}

		::System::Void LJNAICJOBGC(::IJFIHJJPHNA* a1, ::RPG::GameCore::DiceCombatTaskConfig_SetConfirmDiceCountToModifierMap* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::RPG::GameCore::DiceCombatTaskConfig_SetConfirmDiceCountToModifierMap*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_LJNAICJOBGC_OFFSET))(this, a1, a2);
		}

		::System::Void INPFKEJBHLN(::IJFIHJJPHNA* a1, ::System::Boolean a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + AONBKHCHAHK_INPFKEJBHLN_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::DiceCombatModifierConfig* BBMAFGEFKIB(::IJFIHJJPHNA* a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::DiceCombatModifierConfig*(*)(::PVOID, ::IJFIHJJPHNA*, ::System::UInt32))((::PBYTE)hIl2Cpp + AONBKHCHAHK_BBMAFGEFKIB_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::DiceCombatModifierConfig* BKCBOIBCDJM(::IJFIHJJPHNA* a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::DiceCombatModifierConfig*(*)(::PVOID, ::IJFIHJJPHNA*, ::System::UInt32))((::PBYTE)hIl2Cpp + AONBKHCHAHK_BKCBOIBCDJM_OFFSET))(this, a1, a2);
		}

		::System::Void GAFNGDANOMD(::IJFIHJJPHNA* a1, ::ONGJCEFKLAC a2, ::GHNMNFHDCME* a3)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::ONGJCEFKLAC, ::GHNMNFHDCME*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_GAFNGDANOMD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ELLJIHNKNNF(::IJFIHJJPHNA* a1, ::IJFIHJJPHNA* a2, ::ONGJCEFKLAC a3)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::IJFIHJJPHNA*, ::ONGJCEFKLAC))((::PBYTE)hIl2Cpp + AONBKHCHAHK_ELLJIHNKNNF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AHACLKEKLJD(::IJFIHJJPHNA* a1, ::IJFIHJJPHNA* a2, ::ONGJCEFKLAC a3)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::IJFIHJJPHNA*, ::ONGJCEFKLAC))((::PBYTE)hIl2Cpp + AONBKHCHAHK_AHACLKEKLJD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JKPBOGAEKKM(::IJFIHJJPHNA* a1, ::GHNMNFHDCME* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::GHNMNFHDCME*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_JKPBOGAEKKM_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::GHNMNFHDCME*>* KBMGHHBLDKP(::System::Collections::Generic::List_1<::GHNMNFHDCME*>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::GHNMNFHDCME*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::GHNMNFHDCME*>*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_KBMGHHBLDKP_OFFSET))(this, a1);
		}

		::System::Void ACBOGGKFHFI(::IJFIHJJPHNA* a1, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatModifierEvent a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatModifierEvent))((::PBYTE)hIl2Cpp + AONBKHCHAHK_ACBOGGKFHFI_OFFSET))(this, a1, a2);
		}

		::System::Void PMPLLODEPJN(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_PMPLLODEPJN_OFFSET))(this, a1);
		}

		::System::Void NPCFDLNKBGH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONBKHCHAHK_NPCFDLNKBGH_OFFSET))(this);
		}

		::RPG::GameCore::DiceCombatModifierConfig* EKNGKGHIKNF(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DiceCombatModifierConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AONBKHCHAHK_EKNGKGHIKNF_OFFSET))(this, a1);
		}

		::RPG::GameCore::DiceCombatInsertAbilityConfig* IIMIFFIHBHA(::System::String* a1)
		{
			return ((::RPG::GameCore::DiceCombatInsertAbilityConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_IIMIFFIHBHA_OFFSET))(this, a1);
		}

		::System::Void BNABBJIKKMN(::IJFIHJJPHNA* a1, ::RPG::GameCore::DiceCombatModifierFlag a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::RPG::GameCore::DiceCombatModifierFlag))((::PBYTE)hIl2Cpp + AONBKHCHAHK_BNABBJIKKMN_OFFSET))(this, a1, a2);
		}

		::System::Void GLFIKMJDMFE(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_GLFIKMJDMFE_OFFSET))(this, a1);
		}

		::System::Void DCFPLGCAHNB(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_DCFPLGCAHNB_OFFSET))(this, a1);
		}

		::System::Void HHGANAJFHNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONBKHCHAHK_HHGANAJFHNK_OFFSET))(this);
		}

		::IBPGDJEBPFN* BICHDPFEKBH()
		{
			return ((::IBPGDJEBPFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + AONBKHCHAHK_BICHDPFEKBH_OFFSET))(this);
		}

		::System::Void ANJLIBBNKDM(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_ANJLIBBNKDM_OFFSET))(this, a1);
		}

		::System::Void AGNAMJIPMOL(::System::UInt32 a1, ::IJFIHJJPHNA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_AGNAMJIPMOL_OFFSET))(this, a1, a2);
		}

		::System::Void PAKPGDMIJBM(::IJFIHJJPHNA* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::System::UInt32))((::PBYTE)hIl2Cpp + AONBKHCHAHK_PAKPGDMIJBM_OFFSET))(this, a1, a2);
		}

		::System::Void DDKNEEEGMMF(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_DDKNEEEGMMF_OFFSET))(this, a1);
		}

		::System::Void KIPAHCHJFOB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AONBKHCHAHK_KIPAHCHJFOB_OFFSET))(this, a1);
		}

		::System::Void PDENAPNFPPF(::IJFIHJJPHNA* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::System::UInt32))((::PBYTE)hIl2Cpp + AONBKHCHAHK_PDENAPNFPPF_OFFSET))(this, a1, a2);
		}

		::System::Void FPHDIBAMDKC(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_FPHDIBAMDKC_OFFSET))(this, a1);
		}

		::System::Void MDNDFJDDJOD(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_MDNDFJDDJOD_OFFSET))(this, a1);
		}

		::System::Void AJHOAKPBMAK(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_AJHOAKPBMAK_OFFSET))(this, a1);
		}

		::System::Void OKNCPGBPEMG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AONBKHCHAHK_OKNCPGBPEMG_OFFSET))(this, a1);
		}

		::System::Void NHIHCEHKNAO(::IJFIHJJPHNA* a1, ::IJFIHJJPHNA* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::IJFIHJJPHNA*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AONBKHCHAHK_NHIHCEHKNAO_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void BKEOEMFFLGN(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_BKEOEMFFLGN_OFFSET))(this, a1);
		}

		::System::Void KLFJHOEMOAP(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_KLFJHOEMOAP_OFFSET))(this, a1);
		}

		::System::Void HEJBBBJEDOI(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_HEJBBBJEDOI_OFFSET))(this, a1);
		}

		::System::Void OFKGANFOKLP(::IJFIHJJPHNA* a1, ::GHNMNFHDCME* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::GHNMNFHDCME*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_OFKGANFOKLP_OFFSET))(this, a1, a2);
		}

		::System::Void OKJDEIBFMMC(::IJFIHJJPHNA* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AONBKHCHAHK_OKJDEIBFMMC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PBFFBCHGKPH(::IJFIHJJPHNA* a1, ::GHNMNFHDCME* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::GHNMNFHDCME*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_PBFFBCHGKPH_OFFSET))(this, a1, a2);
		}

		::System::Void GOGCCPGHAII(::IJFIHJJPHNA* a1, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_GOGCCPGHAII_OFFSET))(this, a1, a2, a3);
		}

		::System::Single DPFDIMBAKIF(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_DPFDIMBAKIF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LBCANEOCAMH(::System::UInt32 a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::PDPMIHGIFDP*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::PDPMIHGIFDP*>*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_LBCANEOCAMH_OFFSET))(this, a1, a2);
		}

		::System::Single DMFEKHGLBBE(::IJFIHJJPHNA* a1)
		{
			return ((::System::Single(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_DMFEKHGLBBE_OFFSET))(this, a1);
		}

		::System::Single JGHKLMBJLMG(::IJFIHJJPHNA* a1)
		{
			return ((::System::Single(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_JGHKLMBJLMG_OFFSET))(this, a1);
		}

		::System::Void HNKJCCAKLOB(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_HNKJCCAKLOB_OFFSET))(this, a1);
		}

		::System::Boolean CEFFNGMHNND(::IJFIHJJPHNA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_CEFFNGMHNND_OFFSET))(this, a1);
		}

		::System::Single JMIKJDJIBBB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AONBKHCHAHK_JMIKJDJIBBB_OFFSET))(this);
		}

		::System::Void EAELFFIADPL(::IJFIHJJPHNA* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Int32))((::PBYTE)hIl2Cpp + AONBKHCHAHK_EAELFFIADPL_OFFSET))(this, a1, a2);
		}

		::System::Void HPLHMIIHAIJ(::IJFIHJJPHNA* a1, ::System::Int32 a2, ::RPG::GameCore::DiceCombatDirectDamageStyle a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Int32, ::RPG::GameCore::DiceCombatDirectDamageStyle, ::System::Int32))((::PBYTE)hIl2Cpp + AONBKHCHAHK_HPLHMIIHAIJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LIPLJKALFNB(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AONBKHCHAHK_LIPLJKALFNB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LKKPJMIHPGL(::HAFCMNPMFGO* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::HAFCMNPMFGO*, ::System::Int32))((::PBYTE)hIl2Cpp + AONBKHCHAHK_LKKPJMIHPGL_OFFSET))(this, a1, a2);
		}

		::System::Void HFDHHNKFDAB(::System::UInt32 a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_HFDHHNKFDAB_OFFSET))(this, a1, a2);
		}

		::System::Void HAJOEJOPGOC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AONBKHCHAHK_HAJOEJOPGOC_OFFSET))(this, a1, a2);
		}

		::System::Void MELDGHJPNPA(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AONBKHCHAHK_MELDGHJPNPA_OFFSET))(this, a1, a2);
		}

		::System::Void LHNKOLIGFAL(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_LHNKOLIGFAL_OFFSET))(this, a1);
		}

		::System::Void EPAPDEMOEFP(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_EPAPDEMOEFP_OFFSET))(this, a1);
		}

		::System::Void BOOFFDAFCCL(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_BOOFFDAFCCL_OFFSET))(this, a1);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONBKHCHAHK_INITIALIZE_OFFSET))(this);
		}

		::System::Void LLJHIDAJJOA(::System::Collections::Generic::List_1<::IJFIHJJPHNA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::IJFIHJJPHNA*>*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_LLJHIDAJJOA_OFFSET))(this, a1);
		}

		::System::Void KHPEFBEKHMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONBKHCHAHK_KHPEFBEKHMI_OFFSET))(this);
		}

		::System::Void ACEKLBKFCKO(::IJFIHJJPHNA* a1, ::IJFIHJJPHNA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_ACEKLBKFCKO_OFFSET))(this, a1, a2);
		}

		::System::Void LJBMLBNKBKG(::System::Collections::Generic::List_1<::IJFIHJJPHNA*>* a1, ::System::Collections::Generic::List_1<::IJFIHJJPHNA*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::IJFIHJJPHNA*>*, ::System::Collections::Generic::List_1<::IJFIHJJPHNA*>*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_LJBMLBNKBKG_OFFSET))(this, a1, a2);
		}

		::System::Void GELHGKELOCL(::IJFIHJJPHNA* a1, ::IJFIHJJPHNA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_GELHGKELOCL_OFFSET))(this, a1, a2);
		}

		::IJFIHJJPHNA* IJKLPLIPMJA()
		{
			return ((::IJFIHJJPHNA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AONBKHCHAHK_IJKLPLIPMJA_OFFSET))(this);
		}

		::IJFIHJJPHNA* ELFKGCHOHEK()
		{
			return ((::IJFIHJJPHNA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AONBKHCHAHK_ELFKGCHOHEK_OFFSET))(this);
		}

		::System::Void COFGMIFAOME(::IJFIHJJPHNA* a1, ::IJFIHJJPHNA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_COFGMIFAOME_OFFSET))(this, a1, a2);
		}

		::IJFIHJJPHNA* LHDLOINPNEF(::System::Collections::Generic::List_1<::IJFIHJJPHNA*>* a1)
		{
			return ((::IJFIHJJPHNA*(*)(::PVOID, ::System::Collections::Generic::List_1<::IJFIHJJPHNA*>*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_LHDLOINPNEF_OFFSET))(this, a1);
		}

		::System::Void EMPEMIIDFOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONBKHCHAHK_EMPEMIIDFOG_OFFSET))(this);
		}

		::System::Void MLHICBBFKDE(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_MLHICBBFKDE_OFFSET))(this, a1);
		}

		::System::Void GNKKEIHIJJD(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_GNKKEIHIJJD_OFFSET))(this, a1);
		}

		::System::Void AIENLKNLLFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONBKHCHAHK_AIENLKNLLFE_OFFSET))(this);
		}

		::System::Int32 NFONBLHEGGO(::IJFIHJJPHNA* a1, ::IJFIHJJPHNA* a2, ::PINGIDJDIMH* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::IJFIHJJPHNA*, ::IJFIHJJPHNA*, ::PINGIDJDIMH*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_NFONBLHEGGO_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 ECLJADMLDCP(::IJFIHJJPHNA* a1, ::IJFIHJJPHNA* a2, ::PINGIDJDIMH* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::IJFIHJJPHNA*, ::IJFIHJJPHNA*, ::PINGIDJDIMH*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_ECLJADMLDCP_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 OJBNKPGOFIG(::IJFIHJJPHNA* a1, ::System::Int32 a2, ::IJFIHJJPHNA* a3, ::System::Int32 a4, ::PINGIDJDIMH* a5)
		{
			return ((::System::Int32(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Int32, ::IJFIHJJPHNA*, ::System::Int32, ::PINGIDJDIMH*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_OJBNKPGOFIG_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void OGJCBAHOCND(::IJFIHJJPHNA* a1, ::IJFIHJJPHNA* a2, ::PINGIDJDIMH* a3)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::IJFIHJJPHNA*, ::PINGIDJDIMH*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_OGJCBAHOCND_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OLMNHJFAGBJ(::IJFIHJJPHNA* a1, ::IJFIHJJPHNA* a2, ::System::Int32 a3, ::RPG::GameCore::DiceCombatDirectDamageStyle a4)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::IJFIHJJPHNA*, ::System::Int32, ::RPG::GameCore::DiceCombatDirectDamageStyle))((::PBYTE)hIl2Cpp + AONBKHCHAHK_OLMNHJFAGBJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 CHOAAANPNBC(::IJFIHJJPHNA* a1, ::IJFIHJJPHNA* a2, ::PINGIDJDIMH* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::IJFIHJJPHNA*, ::IJFIHJJPHNA*, ::PINGIDJDIMH*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_CHOAAANPNBC_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 EAJDONEAKAO(::IJFIHJJPHNA* a1, ::IJFIHJJPHNA* a2, ::PINGIDJDIMH* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::IJFIHJJPHNA*, ::IJFIHJJPHNA*, ::PINGIDJDIMH*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_EAJDONEAKAO_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 MIGLAHFCGLE(::IJFIHJJPHNA* a1, ::System::Int32 a2, ::IJFIHJJPHNA* a3, ::System::Int32 a4, ::PINGIDJDIMH* a5)
		{
			return ((::System::Int32(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Int32, ::IJFIHJJPHNA*, ::System::Int32, ::PINGIDJDIMH*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_MIGLAHFCGLE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LMJMMIDKBMC(::IJFIHJJPHNA* a1, ::IJFIHJJPHNA* a2, ::PINGIDJDIMH* a3)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::IJFIHJJPHNA*, ::PINGIDJDIMH*))((::PBYTE)hIl2Cpp + AONBKHCHAHK_LMJMMIDKBMC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AAAOBADAPCL(::IJFIHJJPHNA* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Int32))((::PBYTE)hIl2Cpp + AONBKHCHAHK_AAAOBADAPCL_OFFSET))(this, a1, a2);
		}

		::System::Void IPHNBFMAMEJ(::IJFIHJJPHNA* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::System::UInt32))((::PBYTE)hIl2Cpp + AONBKHCHAHK_IPHNBFMAMEJ_OFFSET))(this, a1, a2);
		}

		::System::Void NKAPDEOOCHJ(::IJFIHJJPHNA* a1, ::IJFIHJJPHNA* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::IJFIHJJPHNA*, ::System::Int32))((::PBYTE)hIl2Cpp + AONBKHCHAHK_NKAPDEOOCHJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FGKCLINNMND(::IJFIHJJPHNA* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Int32))((::PBYTE)hIl2Cpp + AONBKHCHAHK_FGKCLINNMND_OFFSET))(this, a1, a2);
		}

		::System::Void IOCMNEJDDKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONBKHCHAHK_IOCMNEJDDKN_OFFSET))(this);
		}

		::System::Void IIGODPGHKBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONBKHCHAHK_IIGODPGHKBO_OFFSET))(this);
		}

		::System::Void ODFMKBDJCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONBKHCHAHK_ODFMKBDJCCD_OFFSET))(this);
		}

		::System::Void PIFPIHDHJGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONBKHCHAHK_PIFPIHDHJGM_OFFSET))(this);
		}

		::System::Void AIEAIPBGPJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONBKHCHAHK_AIEAIPBGPJP_OFFSET))(this);
		}

		::System::Void EJBDOEFFNBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONBKHCHAHK_EJBDOEFFNBC_OFFSET))(this);
		}

		::System::Void HEFFDFPLCJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONBKHCHAHK_HEFFDFPLCJL_OFFSET))(this);
		}

		::System::Void FJAKIKADFOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONBKHCHAHK_FJAKIKADFOF_OFFSET))(this);
		}

	};
