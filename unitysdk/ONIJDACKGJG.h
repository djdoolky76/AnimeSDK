#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KILOJFMKNAI.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/RPG/GameCore/CakeRaceHitType.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
#include "unitysdk/RPG/GameCore/CakeRaceRegionTag.h"
#include "unitysdk/RPG/MVector3.h"
class OEIJDDBIPAJ;
class PECDJPIHMAM;
namespace RPG::GameCore { class AIConfig; }
namespace RPG::GameCore { class CakeRaceAbilityConfig; }
namespace RPG::GameCore { class CakeRaceBattleItemRow; }
namespace RPG::GameCore { class CakeRaceCatRow; }
namespace RPG::GameCore { class CakeRaceEffectRow; }
namespace RPG::GameCore { class CakeRaceEmojiRow; }
namespace RPG::GameCore { class CakeRaceFieldRow; }
namespace RPG::GameCore { class CakeRaceFieldScoreRow; }
namespace RPG::GameCore { class CakeRaceGameConfig; }
namespace RPG::GameCore { class CakeRaceHitConfig; }
namespace RPG::GameCore { class CakeRaceMessageRow; }
namespace RPG::GameCore { class CakeRaceMoveStateConfig; }
namespace RPG::GameCore { class CakeRaceNPCRow; }
namespace RPG::GameCore { class CakeRaceRegionCellConfig; }
namespace RPG::GameCore { class CakeRaceRegionConfig; }
namespace RPG::GameCore { class CakeRaceRegionRow; }
namespace RPG::GameCore { class CakeRaceSectionRow; }
namespace RPG::GameCore { class CakeRaceTitleRow; }
namespace RPG::GameCore { class CakeRaceTrapCellConfig; }
namespace RPG::GameCore { class ConstValueLittleGameRow; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ONIJDACKGJG_AACAKGCAMPG_OFFSET UNITYSDK_OFFSET(0x1C7DAF50)
#define ONIJDACKGJG_ALAPOHGBCND_OFFSET UNITYSDK_OFFSET(0x1C7DAFF0)
#define ONIJDACKGJG_BAMKPAKENCF_OFFSET UNITYSDK_OFFSET(0x1C7DEBE0)
#define ONIJDACKGJG_BFLDNNEKPFO_OFFSET UNITYSDK_OFFSET(0x1C7DC740)
#define ONIJDACKGJG_CGCEOLMFEPO_OFFSET UNITYSDK_OFFSET(0x1C7DCB90)
#define ONIJDACKGJG_COPLNILJBOB_OFFSET UNITYSDK_OFFSET(0x1C7DF090)
#define ONIJDACKGJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7D9FD0)
#define ONIJDACKGJG_DIHCJBBJECM_OFFSET UNITYSDK_OFFSET(0x1C7DB380)
#define ONIJDACKGJG_DJAAIIJJHFH_OFFSET UNITYSDK_OFFSET(0x1C7DACC0)
#define ONIJDACKGJG_ECPNPOMNEOD_OFFSET UNITYSDK_OFFSET(0x1C7E2480)
#define ONIJDACKGJG_EGLOBLMEADJ_OFFSET UNITYSDK_OFFSET(0x1C7DBD90)
#define ONIJDACKGJG_EOPJNOBBGEC_OFFSET UNITYSDK_OFFSET(0x1C7DB570)
#define ONIJDACKGJG_EPGEIFHDAMB_OFFSET UNITYSDK_OFFSET(0x1C7E2690)
#define ONIJDACKGJG_FAFKKJPKOFF_OFFSET UNITYSDK_OFFSET(0x1C7E15F0)
#define ONIJDACKGJG_FEACOOFIJKH_OFFSET UNITYSDK_OFFSET(0x1C7DB090)
#define ONIJDACKGJG_FLFAFOKHJNG_OFFSET UNITYSDK_OFFSET(0x1C7DD510)
#define ONIJDACKGJG_GET_BATTLEITEMCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7E3460)
#define ONIJDACKGJG_GET_BETCOINREWARDRATIOLIST_OFFSET UNITYSDK_OFFSET(0x1C7E34E0)
#define ONIJDACKGJG_GET_CATABILITYCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7E3390)
#define ONIJDACKGJG_GET_CATCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7E3380)
#define ONIJDACKGJG_GET_CATSTATETREECONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7E33A0)
#define ONIJDACKGJG_GET_CELLTYPE2MOVECONFIG_OFFSET UNITYSDK_OFFSET(0x1C7E3490)
#define ONIJDACKGJG_GET_CONSTVALUELITTLEGAMECONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7E3330)
#define ONIJDACKGJG_GET_EFFECTCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7E3360)
#define ONIJDACKGJG_GET_EMOJICONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7E33D0)
#define ONIJDACKGJG_GET_FIELD2REGIONS_OFFSET UNITYSDK_OFFSET(0x1C7E3420)
#define ONIJDACKGJG_GET_FIELDCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7E3350)
#define ONIJDACKGJG_GET_FIELDEFFECTABILITYCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7E3470)
#define ONIJDACKGJG_GET_FIELDSCORECONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7E3370)
#define ONIJDACKGJG_GET_HITTEDCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7E34A0)
#define ONIJDACKGJG_GET_ITEMID2ABILITYCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7E3450)
#define ONIJDACKGJG_GET_MESSAGECONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7E33C0)
#define ONIJDACKGJG_GET_MOVESTATE2MOVECONFIG_OFFSET UNITYSDK_OFFSET(0x1C7E3480)
#define ONIJDACKGJG_GET_NPCCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7E33E0)
#define ONIJDACKGJG_GET_NPCSTATETREECONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7E33F0)
#define ONIJDACKGJG_GET_REGION2TAGS_OFFSET UNITYSDK_OFFSET(0x1C7E3440)
#define ONIJDACKGJG_GET_REGIONCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7E3340)
#define ONIJDACKGJG_GET_REGIONID2REGIONCONFIG_OFFSET UNITYSDK_OFFSET(0x1C7E3410)
#define ONIJDACKGJG_GET_SCORERANKRATIOLIST_OFFSET UNITYSDK_OFFSET(0x1C7E34D0)
#define ONIJDACKGJG_GET_SECTIONCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7E33B0)
#define ONIJDACKGJG_GET_SPARKLECONFIG_OFFSET UNITYSDK_OFFSET(0x1C7E3520)
#define ONIJDACKGJG_GET_SPECIALBETCOINREWARDRATIOLIST_OFFSET UNITYSDK_OFFSET(0x1C7E3500)
#define ONIJDACKGJG_GET_STARTREGIONLENGTH_OFFSET UNITYSDK_OFFSET(0x1C7E34B0)
#define ONIJDACKGJG_GET_TAG2REGIONS_OFFSET UNITYSDK_OFFSET(0x1C7E3430)
#define ONIJDACKGJG_GET_TITLECONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7E3400)
#define ONIJDACKGJG_GOMFOBODFJG_OFFSET UNITYSDK_OFFSET(0x1C7DEE80)
#define ONIJDACKGJG_GOOMKAONELJ_OFFSET UNITYSDK_OFFSET(0x1C7DC360)
#define ONIJDACKGJG_HNFAAJKMCMH_OFFSET UNITYSDK_OFFSET(0x1C7E28C0)
#define ONIJDACKGJG_IDMLJPJPMMA_OFFSET UNITYSDK_OFFSET(0x1C7DFCD0)
#define ONIJDACKGJG_IIOBFJIEICI_OFFSET UNITYSDK_OFFSET(0x1C7E22A0)
#define ONIJDACKGJG_IJOEDPMHHKN_OFFSET UNITYSDK_OFFSET(0x1C7E2340)
#define ONIJDACKGJG_IMDOMFGDHHG_OFFSET UNITYSDK_OFFSET(0x1C7DB0E0)
#define ONIJDACKGJG_INKOLKIONPO_OFFSET UNITYSDK_OFFSET(0x1C7DB180)
#define ONIJDACKGJG_INNCAHBBOKK_OFFSET UNITYSDK_OFFSET(0x1C7DB760)
#define ONIJDACKGJG_JEODJGGCJAB_OFFSET UNITYSDK_OFFSET(0x1C7DDB50)
#define ONIJDACKGJG_LPHDOHFAKBA_OFFSET UNITYSDK_OFFSET(0x1C7DF410)
#define ONIJDACKGJG_MJDPABKDEOK_OFFSET UNITYSDK_OFFSET(0x1C7DDC10)
#define ONIJDACKGJG_MJPHDGIPBNB_OFFSET UNITYSDK_OFFSET(0x1C7E0A90)
#define ONIJDACKGJG_NAMKAHLOBML_OFFSET UNITYSDK_OFFSET(0x1C7DAB80)
#define ONIJDACKGJG_NFCPDGAPDKI_OFFSET UNITYSDK_OFFSET(0x1C7E0960)
#define ONIJDACKGJG_NLIKKGDFHNI_OFFSET UNITYSDK_OFFSET(0x1C7E2E20)
#define ONIJDACKGJG_OBMFBBLKIHD_OFFSET UNITYSDK_OFFSET(0x1C7E0BC0)
#define ONIJDACKGJG_OFFEGFABNDM_OFFSET UNITYSDK_OFFSET(0x1C7DBF80)
#define ONIJDACKGJG_OLAONAHACOB_OFFSET UNITYSDK_OFFSET(0x1C7DCE90)
#define ONIJDACKGJG_OOLPAGPCMDH_OFFSET UNITYSDK_OFFSET(0x1C7E1650)
#define ONIJDACKGJG_PCKNLBIPOJE_OFFSET UNITYSDK_OFFSET(0x1C7DD1C0)
#define ONIJDACKGJG_PKPGMBKHFEI_OFFSET UNITYSDK_OFFSET(0x1C7DC170)
#define ONIJDACKGJG_POFLHGDOPNA_OFFSET UNITYSDK_OFFSET(0x1C7E0830)
#define ONIJDACKGJG_SET_BETCOINREWARDRATIOLIST_OFFSET UNITYSDK_OFFSET(0x1C7E34F0)
#define ONIJDACKGJG_SET_SPECIALBETCOINREWARDRATIOLIST_OFFSET UNITYSDK_OFFSET(0x1C7E3510)
#define ONIJDACKGJG_SET_STARTREGIONLENGTH_OFFSET UNITYSDK_OFFSET(0x1C7E34C0)

inline static constexpr unsigned int ONIJDACKGJG_TypeDefinitionIndex = 37227;

	class ONIJDACKGJG : public ::KILOJFMKNAI
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceEmojiRow*>* _EmojiConfigs_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceRegionRow*>* _RegionID2RegionConfig_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::PECDJPIHMAM*>* _RegionConfigs_k__BackingField; // 0x28
		::RPG::GameCore::CakeRaceAbilityConfig* LGFALBOPNIP; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceNPCRow*>* _NpcConfigs_k__BackingField; // 0x38
		::RPG::GameCore::CakeRaceGameConfig* OEBCGADNGII; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceMessageRow*>* _MessageConfigs_k__BackingField; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceAbilityConfig*>* _ItemId2AbilityConfigs_k__BackingField; // 0x50
		::OEIJDDBIPAJ* _SparkleConfig_k__BackingField; // 0x58
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceMoveState, ::RPG::GameCore::CakeRaceMoveStateConfig*>* _MoveState2MoveConfig_k__BackingField; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::CakeRaceRegionTag>*>* _Region2Tags_k__BackingField; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceFieldScoreRow*>* _FieldScoreConfigs_k__BackingField; // 0x70
		::System::Collections::Generic::List_1<::System::UInt32>* _ScoreRankRatioList_k__BackingField; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceFieldRow*>* _FieldConfigs_k__BackingField; // 0x80
		::System::Collections::Generic::List_1<::System::UInt32>* _BetCoinRewardRatioList_k__BackingField; // 0x88
		::RPG::GameCore::CakeRaceAbilityConfig* ADBDKHJFAFJ; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::AIConfig*>* _CatStateTreeConfigs_k__BackingField; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceAbilityConfig*>* _CatAbilityConfigs_k__BackingField; // 0xA0
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceRegionTag, ::System::Collections::Generic::List_1<::System::UInt32>*>* _Tag2Regions_k__BackingField; // 0xA8
		::System::Collections::Generic::List_1<::System::UInt32>* _SpecialBetCoinRewardRatioList_k__BackingField; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ConstValueLittleGameRow*>* _ConstValueLittleGameConfigs_k__BackingField; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::AIConfig*>* _NpcStateTreeConfigs_k__BackingField; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceSectionRow*>* _SectionConfigs_k__BackingField; // 0xC8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceAbilityConfig*>* _FieldEffectAbilityConfigs_k__BackingField; // 0xD0
		::System::Collections::Generic::List_1<::RPG::GameCore::CakeRaceTitleRow*>* _TitleConfigs_k__BackingField; // 0xD8
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceHitType, ::RPG::GameCore::CakeRaceHitConfig*>* _HittedConfigs_k__BackingField; // 0xE0
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceCellType, ::RPG::GameCore::CakeRaceTrapCellConfig*>* _CellType2MoveConfig_k__BackingField; // 0xE8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceCatRow*>* _CatConfigs_k__BackingField; // 0xF0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceEffectRow*>* _EffectConfigs_k__BackingField; // 0xF8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceBattleItemRow*>* _BattleItemConfigs_k__BackingField; // 0x100
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _Field2Regions_k__BackingField; // 0x108
		::RPG::GameCore::LittleGameLevelConfig* CLKEPOJFDPD; // 0x110
		::System::UInt32 _StartRegionLength_k__BackingField; // 0x118
		::System::Byte _padding0[0x4];
		::System::UInt64 OHNODJBABAJ; // 0x120
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ONIJDACKGJG_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::LittleGameLevelConfig* FEACOOFIJKH()
		{
			return ((::RPG::GameCore::LittleGameLevelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_FEACOOFIJKH_OFFSET))(this);
		}

		::RPG::GameCore::CakeRaceGameConfig* IMDOMFGDHHG()
		{
			return ((::RPG::GameCore::CakeRaceGameConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_IMDOMFGDHHG_OFFSET))(this);
		}

		::System::Void DJAAIIJJHFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_DJAAIIJJHFH_OFFSET))(this);
		}

		::System::Void NAMKAHLOBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_NAMKAHLOBML_OFFSET))(this);
		}

		::System::Void AACAKGCAMPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_AACAKGCAMPG_OFFSET))(this);
		}

		::System::Void INKOLKIONPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_INKOLKIONPO_OFFSET))(this);
		}

		::System::Void DIHCJBBJECM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_DIHCJBBJECM_OFFSET))(this);
		}

		::System::Void EOPJNOBBGEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_EOPJNOBBGEC_OFFSET))(this);
		}

		::System::Void INNCAHBBOKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_INNCAHBBOKK_OFFSET))(this);
		}

		::System::Void EGLOBLMEADJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_EGLOBLMEADJ_OFFSET))(this);
		}

		::System::Void OFFEGFABNDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_OFFEGFABNDM_OFFSET))(this);
		}

		::System::Void PKPGMBKHFEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_PKPGMBKHFEI_OFFSET))(this);
		}

		::System::Void GOOMKAONELJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_GOOMKAONELJ_OFFSET))(this);
		}

		::System::Void PCKNLBIPOJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_PCKNLBIPOJE_OFFSET))(this);
		}

		::System::Void BFLDNNEKPFO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_BFLDNNEKPFO_OFFSET))(this);
		}

		::System::Void CGCEOLMFEPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_CGCEOLMFEPO_OFFSET))(this);
		}

		::System::Void OLAONAHACOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_OLAONAHACOB_OFFSET))(this);
		}

		::System::Void ALAPOHGBCND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_ALAPOHGBCND_OFFSET))(this);
		}

		::System::Void FLFAFOKHJNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_FLFAFOKHJNG_OFFSET))(this);
		}

		::System::Void OBMFBBLKIHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_OBMFBBLKIHD_OFFSET))(this);
		}

		::System::Void JEODJGGCJAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_JEODJGGCJAB_OFFSET))(this);
		}

		::System::Void MJDPABKDEOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_MJDPABKDEOK_OFFSET))(this);
		}

		::System::Void BAMKPAKENCF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_BAMKPAKENCF_OFFSET))(this);
		}

		::System::Void GOMFOBODFJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_GOMFOBODFJG_OFFSET))(this);
		}

		::System::Void COPLNILJBOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_COPLNILJBOB_OFFSET))(this);
		}

		::System::Void LPHDOHFAKBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_LPHDOHFAKBA_OFFSET))(this);
		}

		::System::Void POFLHGDOPNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_POFLHGDOPNA_OFFSET))(this);
		}

		::System::Void NFCPDGAPDKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_NFCPDGAPDKI_OFFSET))(this);
		}

		::System::Void MJPHDGIPBNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_MJPHDGIPBNB_OFFSET))(this);
		}

		::System::Void IDMLJPJPMMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_IDMLJPJPMMA_OFFSET))(this);
		}

		::System::Void OOLPAGPCMDH(::System::UInt32 a1, ::PECDJPIHMAM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::PECDJPIHMAM*))((::PBYTE)hIl2Cpp + ONIJDACKGJG_OOLPAGPCMDH_OFFSET))(this, a1, a2);
		}

		::System::Void IJOEDPMHHKN(::RPG::GameCore::CakeRaceRegionCellConfig* a1, ::System::Object* a2, ::PECDJPIHMAM* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceRegionCellConfig*, ::System::Object*, ::PECDJPIHMAM*))((::PBYTE)hIl2Cpp + ONIJDACKGJG_IJOEDPMHHKN_OFFSET))(this, a1, a2, a3);
		}

		::RPG::MVector3 NLIKKGDFHNI(::RPG::GameCore::CakeRaceRegionConfig* a1, ::RPG::GameCore::CakeRaceRegionCellConfig* a2)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::GameCore::CakeRaceRegionConfig*, ::RPG::GameCore::CakeRaceRegionCellConfig*))((::PBYTE)hIl2Cpp + ONIJDACKGJG_NLIKKGDFHNI_OFFSET))(this, a1, a2);
		}

		::RPG::MVector3 HNFAAJKMCMH(::RPG::GameCore::CakeRaceRegionConfig* a1, ::RPG::GameCore::CakeRaceRegionCellConfig* a2, ::System::Object* a3)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::GameCore::CakeRaceRegionConfig*, ::RPG::GameCore::CakeRaceRegionCellConfig*, ::System::Object*))((::PBYTE)hIl2Cpp + ONIJDACKGJG_HNFAAJKMCMH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ECPNPOMNEOD(::PECDJPIHMAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PECDJPIHMAM*))((::PBYTE)hIl2Cpp + ONIJDACKGJG_ECPNPOMNEOD_OFFSET))(this, a1);
		}

		::System::Int32 EPGEIFHDAMB(::System::UInt32 a1, ::System::Object* a2, ::System::UInt32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::Object*, ::System::UInt32))((::PBYTE)hIl2Cpp + ONIJDACKGJG_EPGEIFHDAMB_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 IIOBFJIEICI(::RPG::GameCore::CakeRaceCellType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + ONIJDACKGJG_IIOBFJIEICI_OFFSET))(this, a1);
		}

		::System::UInt32 FAFKKJPKOFF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_FAFKKJPKOFF_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ConstValueLittleGameRow*>* get_ConstValueLittleGameConfigs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ConstValueLittleGameRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_GET_CONSTVALUELITTLEGAMECONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::PECDJPIHMAM*>* get_RegionConfigs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::PECDJPIHMAM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_GET_REGIONCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceFieldRow*>* get_FieldConfigs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceFieldRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_GET_FIELDCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceEffectRow*>* get_EffectConfigs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceEffectRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_GET_EFFECTCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceFieldScoreRow*>* get_FieldScoreConfigs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceFieldScoreRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_GET_FIELDSCORECONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceCatRow*>* get_CatConfigs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceCatRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_GET_CATCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceAbilityConfig*>* get_CatAbilityConfigs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceAbilityConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_GET_CATABILITYCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::AIConfig*>* get_CatStateTreeConfigs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::AIConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_GET_CATSTATETREECONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceSectionRow*>* get_SectionConfigs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceSectionRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_GET_SECTIONCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceMessageRow*>* get_MessageConfigs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceMessageRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_GET_MESSAGECONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceEmojiRow*>* get_EmojiConfigs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceEmojiRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_GET_EMOJICONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceNPCRow*>* get_NpcConfigs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceNPCRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_GET_NPCCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::AIConfig*>* get_NpcStateTreeConfigs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::AIConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_GET_NPCSTATETREECONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::CakeRaceTitleRow*>* get_TitleConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::CakeRaceTitleRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_GET_TITLECONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceRegionRow*>* get_RegionID2RegionConfig()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceRegionRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_GET_REGIONID2REGIONCONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* get_Field2Regions()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_GET_FIELD2REGIONS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceRegionTag, ::System::Collections::Generic::List_1<::System::UInt32>*>* get_Tag2Regions()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceRegionTag, ::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_GET_TAG2REGIONS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::CakeRaceRegionTag>*>* get_Region2Tags()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::CakeRaceRegionTag>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_GET_REGION2TAGS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceAbilityConfig*>* get_ItemId2AbilityConfigs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceAbilityConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_GET_ITEMID2ABILITYCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceBattleItemRow*>* get_BattleItemConfigs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceBattleItemRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_GET_BATTLEITEMCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceAbilityConfig*>* get_FieldEffectAbilityConfigs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceAbilityConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_GET_FIELDEFFECTABILITYCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceMoveState, ::RPG::GameCore::CakeRaceMoveStateConfig*>* get_MoveState2MoveConfig()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceMoveState, ::RPG::GameCore::CakeRaceMoveStateConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_GET_MOVESTATE2MOVECONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceCellType, ::RPG::GameCore::CakeRaceTrapCellConfig*>* get_CellType2MoveConfig()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceCellType, ::RPG::GameCore::CakeRaceTrapCellConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_GET_CELLTYPE2MOVECONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceHitType, ::RPG::GameCore::CakeRaceHitConfig*>* get_HittedConfigs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceHitType, ::RPG::GameCore::CakeRaceHitConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_GET_HITTEDCONFIGS_OFFSET))(this);
		}

		::System::UInt32 get_StartRegionLength()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_GET_STARTREGIONLENGTH_OFFSET))(this);
		}

		::System::Void set_StartRegionLength(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ONIJDACKGJG_SET_STARTREGIONLENGTH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ScoreRankRatioList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_GET_SCORERANKRATIOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_BetCoinRewardRatioList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_GET_BETCOINREWARDRATIOLIST_OFFSET))(this);
		}

		::System::Void set_BetCoinRewardRatioList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + ONIJDACKGJG_SET_BETCOINREWARDRATIOLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SpecialBetCoinRewardRatioList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_GET_SPECIALBETCOINREWARDRATIOLIST_OFFSET))(this);
		}

		::System::Void set_SpecialBetCoinRewardRatioList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + ONIJDACKGJG_SET_SPECIALBETCOINREWARDRATIOLIST_OFFSET))(this, a1);
		}

		::OEIJDDBIPAJ* get_SparkleConfig()
		{
			return ((::OEIJDDBIPAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONIJDACKGJG_GET_SPARKLECONFIG_OFFSET))(this);
		}

	};
