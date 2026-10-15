#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/RPG/GameCore/CakeRaceHitType.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
#include "unitysdk/RPG/GameCore/CakeRacePickupItemType.h"
#include "unitysdk/RPG/GameCore/CakeRaceRegionTag.h"
#include "unitysdk/System/Object.h"
class GMIFBFGDGJK;
class OEIJDDBIPAJ;
class ONIJDACKGJG;
class PBGNKMMDBGD;
class PECDJPIHMAM;
namespace RPG::GameCore { class AIConfig; }
namespace RPG::GameCore { class CakeRaceAbilityConfig; }
namespace RPG::GameCore { class CakeRaceBattleItemRow; }
namespace RPG::GameCore { class CakeRaceCatAIConfig; }
namespace RPG::GameCore { class CakeRaceCatRow; }
namespace RPG::GameCore { class CakeRaceCellConfig; }
namespace RPG::GameCore { class CakeRaceEffectRow; }
namespace RPG::GameCore { class CakeRaceEmojiRow; }
namespace RPG::GameCore { class CakeRaceFieldRow; }
namespace RPG::GameCore { class CakeRaceFieldScoreRow; }
namespace RPG::GameCore { class CakeRaceGameConfig; }
namespace RPG::GameCore { class CakeRaceGameSyncConfig; }
namespace RPG::GameCore { class CakeRaceHitConfig; }
namespace RPG::GameCore { class CakeRaceMessageRow; }
namespace RPG::GameCore { class CakeRaceMoveStateConfig; }
namespace RPG::GameCore { class CakeRaceNPCRow; }
namespace RPG::GameCore { class CakeRacePickupItemConfig; }
namespace RPG::GameCore { class CakeRaceRegionConfig; }
namespace RPG::GameCore { class CakeRaceSectionRow; }
namespace RPG::GameCore { class CakeRaceTitleRow; }
namespace RPG::GameCore { class CakeRaceTrapCellConfig; }
namespace RPG::GameCore { class ConstValueLittleGameRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IKLBNMHBNEL_ADPEADILBFK_OFFSET UNITYSDK_OFFSET(0x1C6DECC0)
#define IKLBNMHBNEL_ADPEGIMMBEP_OFFSET UNITYSDK_OFFSET(0x1C6DE270)
#define IKLBNMHBNEL_ALLJPHIHDAH_OFFSET UNITYSDK_OFFSET(0x1C6E0610)
#define IKLBNMHBNEL_BCMKDPPEHBJ_OFFSET UNITYSDK_OFFSET(0x1C6E0700)
#define IKLBNMHBNEL_BEAEHKEOFPK_OFFSET UNITYSDK_OFFSET(0x1C6E07E0)
#define IKLBNMHBNEL_BFFMMEIOKEF_OFFSET UNITYSDK_OFFSET(0x1C6E0EA0)
#define IKLBNMHBNEL_BONIIEJNKEL_OFFSET UNITYSDK_OFFSET(0x1C6E1170)
#define IKLBNMHBNEL_BPAAIIICNGP_OFFSET UNITYSDK_OFFSET(0x1C6E0BD0)
#define IKLBNMHBNEL_CBJKKEBIFBM_OFFSET UNITYSDK_OFFSET(0x1C6DF360)
#define IKLBNMHBNEL_CBKBHBKOCMA_OFFSET UNITYSDK_OFFSET(0x1C6DF650)
#define IKLBNMHBNEL_CDKBDIDLLAF_OFFSET UNITYSDK_OFFSET(0x1C6E0AE0)
#define IKLBNMHBNEL_CECCOIOLJOL_OFFSET UNITYSDK_OFFSET(0x1C6DDFB0)
#define IKLBNMHBNEL_CIPFKAIHNGE_OFFSET UNITYSDK_OFFSET(0x1C6DE350)
#define IKLBNMHBNEL_CJGHPJDCJCH_OFFSET UNITYSDK_OFFSET(0x1C6E08D0)
#define IKLBNMHBNEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6DDE10)
#define IKLBNMHBNEL_DEJOCJHBOMN_OFFSET UNITYSDK_OFFSET(0x1C6D7FE0)
#define IKLBNMHBNEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C6DDE20)
#define IKLBNMHBNEL_DPJPBENONEP_OFFSET UNITYSDK_OFFSET(0x1C6DFB10)
#define IKLBNMHBNEL_ECEELOJHDJE_OFFSET UNITYSDK_OFFSET(0x1C6E1540)
#define IKLBNMHBNEL_EGECPHNNBHE_OFFSET UNITYSDK_OFFSET(0x1C6E0D20)
#define IKLBNMHBNEL_ENCPNMDCNGC_OFFSET UNITYSDK_OFFSET(0x1C6DE0A0)
#define IKLBNMHBNEL_FBJCBAKEJHE_OFFSET UNITYSDK_OFFSET(0x1C6DE180)
#define IKLBNMHBNEL_FCNPCDMCBOM_OFFSET UNITYSDK_OFFSET(0x1C6E18E0)
#define IKLBNMHBNEL_FDHEDMBBHAL_OFFSET UNITYSDK_OFFSET(0x1C6E0E00)
#define IKLBNMHBNEL_FGFIHOOMFCG_OFFSET UNITYSDK_OFFSET(0x1C6E0260)
#define IKLBNMHBNEL_FHABBPNLLJK_OFFSET UNITYSDK_OFFSET(0x1C6E0090)
#define IKLBNMHBNEL_FHNCPEEOMHC_OFFSET UNITYSDK_OFFSET(0x1C6E0A50)
#define IKLBNMHBNEL_FHOCIJFCJEJ_OFFSET UNITYSDK_OFFSET(0x1C6E12E0)
#define IKLBNMHBNEL_FOGMPMPMEIC_OFFSET UNITYSDK_OFFSET(0x1C6E0520)
#define IKLBNMHBNEL_GADJOCJOGCA_OFFSET UNITYSDK_OFFSET(0x1C6E1000)
#define IKLBNMHBNEL_GJCBODKABMC_OFFSET UNITYSDK_OFFSET(0x1C6E1880)
#define IKLBNMHBNEL_GKEHBOKNEMO_OFFSET UNITYSDK_OFFSET(0x1C6DF450)
#define IKLBNMHBNEL_GNKPKLKOPOI_OFFSET UNITYSDK_OFFSET(0x1C6E0170)
#define IKLBNMHBNEL_HGDOMCLABPJ_OFFSET UNITYSDK_OFFSET(0x1C6E1560)
#define IKLBNMHBNEL_HILEKGKGFGH_OFFSET UNITYSDK_OFFSET(0x1C6DF280)
#define IKLBNMHBNEL_HLIDNFLNCBL_OFFSET UNITYSDK_OFFSET(0x1C6DF190)
#define IKLBNMHBNEL_IHOJJIEDJHG_OFFSET UNITYSDK_OFFSET(0x1C6E1580)
#define IKLBNMHBNEL_KAGAMFJEMIH_OFFSET UNITYSDK_OFFSET(0x1C6E17C0)
#define IKLBNMHBNEL_KBBOJEMCABI_OFFSET UNITYSDK_OFFSET(0x1C6DE5C0)
#define IKLBNMHBNEL_KHPONLOCNED_OFFSET UNITYSDK_OFFSET(0x1C6E13A0)
#define IKLBNMHBNEL_LBAMIJJDJLF_OFFSET UNITYSDK_OFFSET(0x1C6E1700)
#define IKLBNMHBNEL_LKBMDOBKPFE_OFFSET UNITYSDK_OFFSET(0x1C6DDEC0)
#define IKLBNMHBNEL_LKELJPADLNG_OFFSET UNITYSDK_OFFSET(0x1C6DFBC0)
#define IKLBNMHBNEL_MKCLOMHMBFG_OFFSET UNITYSDK_OFFSET(0x1C6E02D0)
#define IKLBNMHBNEL_MKHFLMEJPNB_OFFSET UNITYSDK_OFFSET(0x1C6E0C90)
#define IKLBNMHBNEL_MPHNMGIHHCC_OFFSET UNITYSDK_OFFSET(0x1C6E1460)
#define IKLBNMHBNEL_MPJJKONEDNI_OFFSET UNITYSDK_OFFSET(0x1C6E1640)
#define IKLBNMHBNEL_NBHMGCFEEFP_OFFSET UNITYSDK_OFFSET(0x1C6E0C30)
#define IKLBNMHBNEL_NKCIMNGNCKA_OFFSET UNITYSDK_OFFSET(0x1C6E09C0)
#define IKLBNMHBNEL_NNICGNCKFFB_OFFSET UNITYSDK_OFFSET(0x1C6E0430)
#define IKLBNMHBNEL_OMLFOJCIMMJ_OFFSET UNITYSDK_OFFSET(0x1C6DF3C0)
#define IKLBNMHBNEL_PGLOMCHBPDL_OFFSET UNITYSDK_OFFSET(0x1C6D8410)
#define IKLBNMHBNEL_PJHKOMKEENC_OFFSET UNITYSDK_OFFSET(0x1C6DE6A0)
#define IKLBNMHBNEL_PKPAGCEMAOL_OFFSET UNITYSDK_OFFSET(0x1C6E1520)
#define IKLBNMHBNEL_PMIPELCNDJD_OFFSET UNITYSDK_OFFSET(0x1C6DEBE0)

	class IKLBNMHBNEL : public ::System::Object
	{
	public:
		::GMIFBFGDGJK* EEFMDEHLLFI; // 0x10
		::ONIJDACKGJG* EIEOCLOHHIF; // 0x18
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x20
		::System::Void _ctor(::PBGNKMMDBGD* a1, ::GMIFBFGDGJK* a2, ::ONIJDACKGJG* a3)
		{
			return ((::System::Void(*)(::PVOID, ::PBGNKMMDBGD*, ::GMIFBFGDGJK*, ::ONIJDACKGJG*))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::ConstValueLittleGameRow* PGLOMCHBPDL(::System::String* a1)
		{
			return ((::RPG::GameCore::ConstValueLittleGameRow*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_PGLOMCHBPDL_OFFSET))(this, a1);
		}

		::RPG::GameCore::CakeRaceFieldRow* LKBMDOBKPFE(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CakeRaceFieldRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_LKBMDOBKPFE_OFFSET))(this, a1);
		}

		::RPG::GameCore::CakeRaceEffectRow* CECCOIOLJOL(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CakeRaceEffectRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_CECCOIOLJOL_OFFSET))(this, a1);
		}

		::RPG::GameCore::CakeRaceFieldScoreRow* ENCPNMDCNGC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CakeRaceFieldScoreRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_ENCPNMDCNGC_OFFSET))(this, a1);
		}

		::RPG::GameCore::CakeRaceSectionRow* FBJCBAKEJHE(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CakeRaceSectionRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_FBJCBAKEJHE_OFFSET))(this, a1);
		}

		::RPG::GameCore::CakeRaceMessageRow* ADPEGIMMBEP(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CakeRaceMessageRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_ADPEGIMMBEP_OFFSET))(this, a1);
		}

		::RPG::GameCore::CakeRaceMessageRow* CIPFKAIHNGE(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::CakeRaceMessageRow*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_CIPFKAIHNGE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::CakeRaceMessageRow* PJHKOMKEENC(::System::Boolean a1, ::System::UInt32 a2, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a3)
		{
			return ((::RPG::GameCore::CakeRaceMessageRow*(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_PJHKOMKEENC_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::CakeRaceEmojiRow* PMIPELCNDJD(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CakeRaceEmojiRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_PMIPELCNDJD_OFFSET))(this, a1);
		}

		::RPG::GameCore::CakeRaceEmojiRow* ADPEADILBFK(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::CakeRaceEmojiRow*(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_ADPEADILBFK_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::CakeRaceNPCRow* KBBOJEMCABI(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CakeRaceNPCRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_KBBOJEMCABI_OFFSET))(this, a1);
		}

		::RPG::GameCore::AIConfig* HLIDNFLNCBL(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AIConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_HLIDNFLNCBL_OFFSET))(this, a1);
		}

		::PECDJPIHMAM* HILEKGKGFGH(::System::UInt32 a1)
		{
			return ((::PECDJPIHMAM*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_HILEKGKGFGH_OFFSET))(this, a1);
		}

		::RPG::GameCore::CakeRaceRegionConfig* CBJKKEBIFBM(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CakeRaceRegionConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_CBJKKEBIFBM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* OMLFOJCIMMJ(::RPG::GameCore::CakeRaceRegionTag a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::CakeRaceRegionTag))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_OMLFOJCIMMJ_OFFSET))(this, a1);
		}

		::System::Boolean GKEHBOKNEMO(::Il2CppArray<::System::UInt32>* a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_GKEHBOKNEMO_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* CBKBHBKOCMA(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2, ::System::Object* a3, ::System::Int32 a4)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_CBKBHBKOCMA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean DPJPBENONEP(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_DPJPBENONEP_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* LKELJPADLNG(::System::UInt32 a1, ::System::UInt32 a2, ::System::Object* a3, ::System::Int32 a4)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_LKELJPADLNG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::HashSet_1<::RPG::GameCore::CakeRaceRegionTag>* FHABBPNLLJK(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::HashSet_1<::RPG::GameCore::CakeRaceRegionTag>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_FHABBPNLLJK_OFFSET))(this, a1);
		}

		::RPG::GameCore::CakeRaceCellConfig* GNKPKLKOPOI(::RPG::GameCore::CakeRaceCellType a1)
		{
			return ((::RPG::GameCore::CakeRaceCellConfig*(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_GNKPKLKOPOI_OFFSET))(this, a1);
		}

		::RPG::GameCore::CakeRaceCatAIConfig* MKCLOMHMBFG(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CakeRaceCatAIConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_MKCLOMHMBFG_OFFSET))(this, a1);
		}

		::RPG::GameCore::CakeRaceCatRow* NNICGNCKFFB(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CakeRaceCatRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_NNICGNCKFFB_OFFSET))(this, a1);
		}

		::RPG::GameCore::CakeRaceAbilityConfig* FOGMPMPMEIC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CakeRaceAbilityConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_FOGMPMPMEIC_OFFSET))(this, a1);
		}

		::RPG::GameCore::AIConfig* ALLJPHIHDAH(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AIConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_ALLJPHIHDAH_OFFSET))(this, a1);
		}

		::RPG::GameCore::CakeRaceAbilityConfig* BCMKDPPEHBJ(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CakeRaceAbilityConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_BCMKDPPEHBJ_OFFSET))(this, a1);
		}

		::RPG::GameCore::CakeRaceBattleItemRow* BEAEHKEOFPK(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CakeRaceBattleItemRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_BEAEHKEOFPK_OFFSET))(this, a1);
		}

		::RPG::GameCore::CakeRaceAbilityConfig* CJGHPJDCJCH(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CakeRaceAbilityConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_CJGHPJDCJCH_OFFSET))(this, a1);
		}

		::RPG::GameCore::CakeRaceMoveStateConfig* NKCIMNGNCKA(::RPG::GameCore::CakeRaceMoveState a1)
		{
			return ((::RPG::GameCore::CakeRaceMoveStateConfig*(*)(::PVOID, ::RPG::GameCore::CakeRaceMoveState))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_NKCIMNGNCKA_OFFSET))(this, a1);
		}

		::RPG::GameCore::CakeRaceTrapCellConfig* FHNCPEEOMHC(::RPG::GameCore::CakeRaceCellType a1)
		{
			return ((::RPG::GameCore::CakeRaceTrapCellConfig*(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_FHNCPEEOMHC_OFFSET))(this, a1);
		}

		::RPG::GameCore::CakeRacePickupItemConfig* CDKBDIDLLAF(::RPG::GameCore::CakeRacePickupItemType a1)
		{
			return ((::RPG::GameCore::CakeRacePickupItemConfig*(*)(::PVOID, ::RPG::GameCore::CakeRacePickupItemType))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_CDKBDIDLLAF_OFFSET))(this, a1);
		}

		::System::UInt32 BPAAIIICNGP(::RPG::GameCore::CakeRaceCellType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_BPAAIIICNGP_OFFSET))(this, a1);
		}

		::System::Int32 NBHMGCFEEFP(::RPG::GameCore::CakeRaceCellType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_NBHMGCFEEFP_OFFSET))(this, a1);
		}

		::RPG::GameCore::CakeRaceHitConfig* MKHFLMEJPNB(::RPG::GameCore::CakeRaceHitType a1)
		{
			return ((::RPG::GameCore::CakeRaceHitConfig*(*)(::PVOID, ::RPG::GameCore::CakeRaceHitType))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_MKHFLMEJPNB_OFFSET))(this, a1);
		}

		::System::Boolean EGECPHNNBHE(::RPG::GameCore::CakeRaceCellType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_EGECPHNNBHE_OFFSET))(this, a1);
		}

		::RPG::GameCore::CakeRaceGameConfig* FGFIHOOMFCG()
		{
			return ((::RPG::GameCore::CakeRaceGameConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_FGFIHOOMFCG_OFFSET))(this);
		}

		::RPG::GameCore::CakeRaceGameSyncConfig* FDHEDMBBHAL()
		{
			return ((::RPG::GameCore::CakeRaceGameSyncConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_FDHEDMBBHAL_OFFSET))(this);
		}

		::System::Single BFFMMEIOKEF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_BFFMMEIOKEF_OFFSET))(this);
		}

		::System::Single GADJOCJOGCA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_GADJOCJOGCA_OFFSET))(this);
		}

		::System::Single BONIIEJNKEL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_BONIIEJNKEL_OFFSET))(this);
		}

		::System::UInt32 FHOCIJFCJEJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_FHOCIJFCJEJ_OFFSET))(this);
		}

		::System::UInt32 DEJOCJHBOMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_DEJOCJHBOMN_OFFSET))(this);
		}

		::System::UInt32 KHPONLOCNED()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_KHPONLOCNED_OFFSET))(this);
		}

		::System::UInt32 MPHNMGIHHCC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_MPHNMGIHHCC_OFFSET))(this);
		}

		::System::UInt32 PKPAGCEMAOL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_PKPAGCEMAOL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* ECEELOJHDJE()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_ECEELOJHDJE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::CakeRaceTitleRow*>* HGDOMCLABPJ()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::CakeRaceTitleRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_HGDOMCLABPJ_OFFSET))(this);
		}

		::System::UInt32 IHOJJIEDJHG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_IHOJJIEDJHG_OFFSET))(this);
		}

		::System::UInt32 MPJJKONEDNI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_MPJJKONEDNI_OFFSET))(this);
		}

		::System::UInt32 LBAMIJJDJLF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_LBAMIJJDJLF_OFFSET))(this);
		}

		::System::UInt32 KAGAMFJEMIH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_KAGAMFJEMIH_OFFSET))(this);
		}

		::System::UInt32 GJCBODKABMC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_GJCBODKABMC_OFFSET))(this);
		}

		::OEIJDDBIPAJ* FCNPCDMCBOM()
		{
			return ((::OEIJDDBIPAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLBNMHBNEL_FCNPCDMCBOM_OFFSET))(this);
		}

	};
