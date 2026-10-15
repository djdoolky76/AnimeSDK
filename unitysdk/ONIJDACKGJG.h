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

#define ONIJDACKGJG_AACAKGCAMPG_OFFSET UNITYSDK_OFFSET(0x1C7ACDB0)
#define ONIJDACKGJG_ALAPOHGBCND_OFFSET UNITYSDK_OFFSET(0x1C7ACE50)
#define ONIJDACKGJG_BAMKPAKENCF_OFFSET UNITYSDK_OFFSET(0x1C7B0A30)
#define ONIJDACKGJG_BFLDNNEKPFO_OFFSET UNITYSDK_OFFSET(0x1C7AE590)
#define ONIJDACKGJG_CGCEOLMFEPO_OFFSET UNITYSDK_OFFSET(0x1C7AE9D0)
#define ONIJDACKGJG_COPLNILJBOB_OFFSET UNITYSDK_OFFSET(0x1C7B0EE0)
#define ONIJDACKGJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7ABE30)
#define ONIJDACKGJG_DIHCJBBJECM_OFFSET UNITYSDK_OFFSET(0x1C7AD1D0)
#define ONIJDACKGJG_DJAAIIJJHFH_OFFSET UNITYSDK_OFFSET(0x1C7ACB20)
#define ONIJDACKGJG_ECPNPOMNEOD_OFFSET UNITYSDK_OFFSET(0x1C7B4300)
#define ONIJDACKGJG_EGLOBLMEADJ_OFFSET UNITYSDK_OFFSET(0x1C7ADBE0)
#define ONIJDACKGJG_EOPJNOBBGEC_OFFSET UNITYSDK_OFFSET(0x1C7AD3C0)
#define ONIJDACKGJG_EPGEIFHDAMB_OFFSET UNITYSDK_OFFSET(0x1C7B4510)
#define ONIJDACKGJG_FAFKKJPKOFF_OFFSET UNITYSDK_OFFSET(0x1C7B3470)
#define ONIJDACKGJG_FEACOOFIJKH_OFFSET UNITYSDK_OFFSET(0x1C7ACEF0)
#define ONIJDACKGJG_FLFAFOKHJNG_OFFSET UNITYSDK_OFFSET(0x1C7AF350)
#define ONIJDACKGJG_GET_BATTLEITEMCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7B52E0)
#define ONIJDACKGJG_GET_BETCOINREWARDRATIOLIST_OFFSET UNITYSDK_OFFSET(0x1C7B5360)
#define ONIJDACKGJG_GET_CATABILITYCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7B5210)
#define ONIJDACKGJG_GET_CATCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7B5200)
#define ONIJDACKGJG_GET_CATSTATETREECONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7B5220)
#define ONIJDACKGJG_GET_CELLTYPE2MOVECONFIG_OFFSET UNITYSDK_OFFSET(0x1C7B5310)
#define ONIJDACKGJG_GET_CONSTVALUELITTLEGAMECONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7B51B0)
#define ONIJDACKGJG_GET_EFFECTCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7B51E0)
#define ONIJDACKGJG_GET_EMOJICONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7B5250)
#define ONIJDACKGJG_GET_FIELD2REGIONS_OFFSET UNITYSDK_OFFSET(0x1C7B52A0)
#define ONIJDACKGJG_GET_FIELDCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7B51D0)
#define ONIJDACKGJG_GET_FIELDEFFECTABILITYCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7B52F0)
#define ONIJDACKGJG_GET_FIELDSCORECONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7B51F0)
#define ONIJDACKGJG_GET_HITTEDCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7B5320)
#define ONIJDACKGJG_GET_ITEMID2ABILITYCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7B52D0)
#define ONIJDACKGJG_GET_MESSAGECONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7B5240)
#define ONIJDACKGJG_GET_MOVESTATE2MOVECONFIG_OFFSET UNITYSDK_OFFSET(0x1C7B5300)
#define ONIJDACKGJG_GET_NPCCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7B5260)
#define ONIJDACKGJG_GET_NPCSTATETREECONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7B5270)
#define ONIJDACKGJG_GET_REGION2TAGS_OFFSET UNITYSDK_OFFSET(0x1C7B52C0)
#define ONIJDACKGJG_GET_REGIONCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7B51C0)
#define ONIJDACKGJG_GET_REGIONID2REGIONCONFIG_OFFSET UNITYSDK_OFFSET(0x1C7B5290)
#define ONIJDACKGJG_GET_SCORERANKRATIOLIST_OFFSET UNITYSDK_OFFSET(0x1C7B5350)
#define ONIJDACKGJG_GET_SECTIONCONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7B5230)
#define ONIJDACKGJG_GET_SPARKLECONFIG_OFFSET UNITYSDK_OFFSET(0x1C7B53A0)
#define ONIJDACKGJG_GET_SPECIALBETCOINREWARDRATIOLIST_OFFSET UNITYSDK_OFFSET(0x1C7B5380)
#define ONIJDACKGJG_GET_STARTREGIONLENGTH_OFFSET UNITYSDK_OFFSET(0x1C7B5330)
#define ONIJDACKGJG_GET_TAG2REGIONS_OFFSET UNITYSDK_OFFSET(0x1C7B52B0)
#define ONIJDACKGJG_GET_TITLECONFIGS_OFFSET UNITYSDK_OFFSET(0x1C7B5280)
#define ONIJDACKGJG_GOMFOBODFJG_OFFSET UNITYSDK_OFFSET(0x1C7B0CD0)
#define ONIJDACKGJG_GOOMKAONELJ_OFFSET UNITYSDK_OFFSET(0x1C7AE1B0)
#define ONIJDACKGJG_HNFAAJKMCMH_OFFSET UNITYSDK_OFFSET(0x1C7B4740)
#define ONIJDACKGJG_IDMLJPJPMMA_OFFSET UNITYSDK_OFFSET(0x1C7B1B20)
#define ONIJDACKGJG_IIOBFJIEICI_OFFSET UNITYSDK_OFFSET(0x1C7B4120)
#define ONIJDACKGJG_IJOEDPMHHKN_OFFSET UNITYSDK_OFFSET(0x1C7B41C0)
#define ONIJDACKGJG_IMDOMFGDHHG_OFFSET UNITYSDK_OFFSET(0x1C7ACF40)
#define ONIJDACKGJG_INKOLKIONPO_OFFSET UNITYSDK_OFFSET(0x1C7ACFE0)
#define ONIJDACKGJG_INNCAHBBOKK_OFFSET UNITYSDK_OFFSET(0x1C7AD5B0)
#define ONIJDACKGJG_JEODJGGCJAB_OFFSET UNITYSDK_OFFSET(0x1C7AF990)
#define ONIJDACKGJG_LPHDOHFAKBA_OFFSET UNITYSDK_OFFSET(0x1C7B1260)
#define ONIJDACKGJG_MJDPABKDEOK_OFFSET UNITYSDK_OFFSET(0x1C7AFA50)
#define ONIJDACKGJG_MJPHDGIPBNB_OFFSET UNITYSDK_OFFSET(0x1C7B2910)
#define ONIJDACKGJG_NAMKAHLOBML_OFFSET UNITYSDK_OFFSET(0x1C7AC9E0)
#define ONIJDACKGJG_NFCPDGAPDKI_OFFSET UNITYSDK_OFFSET(0x1C7B27E0)
#define ONIJDACKGJG_NLIKKGDFHNI_OFFSET UNITYSDK_OFFSET(0x1C7B4CA0)
#define ONIJDACKGJG_OBMFBBLKIHD_OFFSET UNITYSDK_OFFSET(0x1C7B2A40)
#define ONIJDACKGJG_OFFEGFABNDM_OFFSET UNITYSDK_OFFSET(0x1C7ADDD0)
#define ONIJDACKGJG_OLAONAHACOB_OFFSET UNITYSDK_OFFSET(0x1C7AECD0)
#define ONIJDACKGJG_OOLPAGPCMDH_OFFSET UNITYSDK_OFFSET(0x1C7B34D0)
#define ONIJDACKGJG_PCKNLBIPOJE_OFFSET UNITYSDK_OFFSET(0x1C7AF000)
#define ONIJDACKGJG_PKPGMBKHFEI_OFFSET UNITYSDK_OFFSET(0x1C7ADFC0)
#define ONIJDACKGJG_POFLHGDOPNA_OFFSET UNITYSDK_OFFSET(0x1C7B26A0)
#define ONIJDACKGJG_SET_BETCOINREWARDRATIOLIST_OFFSET UNITYSDK_OFFSET(0x1C7B5370)
#define ONIJDACKGJG_SET_SPECIALBETCOINREWARDRATIOLIST_OFFSET UNITYSDK_OFFSET(0x1C7B5390)
#define ONIJDACKGJG_SET_STARTREGIONLENGTH_OFFSET UNITYSDK_OFFSET(0x1C7B5340)

inline static constexpr unsigned int ONIJDACKGJG_TypeDefinitionIndex = 37227;

	class ONIJDACKGJG : public ::KILOJFMKNAI
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceRegionRow*>* _RegionID2RegionConfig_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceHitType, ::RPG::GameCore::CakeRaceHitConfig*>* _HittedConfigs_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::AIConfig*>* _NpcStateTreeConfigs_k__BackingField; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _Field2Regions_k__BackingField; // 0x30
		::RPG::GameCore::CakeRaceGameConfig* OEBCGADNGII; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceBattleItemRow*>* _BattleItemConfigs_k__BackingField; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceCatRow*>* _CatConfigs_k__BackingField; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceSectionRow*>* _SectionConfigs_k__BackingField; // 0x50
		::System::Collections::Generic::List_1<::System::UInt32>* _ScoreRankRatioList_k__BackingField; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::AIConfig*>* _CatStateTreeConfigs_k__BackingField; // 0x60
		::RPG::GameCore::CakeRaceAbilityConfig* LGFALBOPNIP; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ConstValueLittleGameRow*>* _ConstValueLittleGameConfigs_k__BackingField; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceEffectRow*>* _EffectConfigs_k__BackingField; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceFieldScoreRow*>* _FieldScoreConfigs_k__BackingField; // 0x80
		::OEIJDDBIPAJ* _SparkleConfig_k__BackingField; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceFieldRow*>* _FieldConfigs_k__BackingField; // 0x90
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceRegionTag, ::System::Collections::Generic::List_1<::System::UInt32>*>* _Tag2Regions_k__BackingField; // 0x98
		::System::Collections::Generic::List_1<::RPG::GameCore::CakeRaceTitleRow*>* _TitleConfigs_k__BackingField; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceEmojiRow*>* _EmojiConfigs_k__BackingField; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceAbilityConfig*>* _CatAbilityConfigs_k__BackingField; // 0xB0
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceMoveState, ::RPG::GameCore::CakeRaceMoveStateConfig*>* _MoveState2MoveConfig_k__BackingField; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceMessageRow*>* _MessageConfigs_k__BackingField; // 0xC0
		::RPG::GameCore::CakeRaceAbilityConfig* ADBDKHJFAFJ; // 0xC8
		::System::Collections::Generic::List_1<::System::UInt32>* _SpecialBetCoinRewardRatioList_k__BackingField; // 0xD0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::CakeRaceRegionTag>*>* _Region2Tags_k__BackingField; // 0xD8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceAbilityConfig*>* _ItemId2AbilityConfigs_k__BackingField; // 0xE0
		::RPG::GameCore::LittleGameLevelConfig* CLKEPOJFDPD; // 0xE8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::PECDJPIHMAM*>* _RegionConfigs_k__BackingField; // 0xF0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceAbilityConfig*>* _FieldEffectAbilityConfigs_k__BackingField; // 0xF8
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceCellType, ::RPG::GameCore::CakeRaceTrapCellConfig*>* _CellType2MoveConfig_k__BackingField; // 0x100
		::System::Collections::Generic::List_1<::System::UInt32>* _BetCoinRewardRatioList_k__BackingField; // 0x108
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CakeRaceNPCRow*>* _NpcConfigs_k__BackingField; // 0x110
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
