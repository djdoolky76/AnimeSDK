#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MultiPlayerGameMode.h"
#include "unitysdk/RPG/GameCore/PetMarbleLevelMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class AGLKOAMDEFB;
class DOBOKPCPHCF;
class HAELNJMDBMN;
class HMBDKHPPBHB;
class IEPCGBKKCHB;
class LHHCCNFEGGD;
class LJPIOLMIIAO;
class NLLIHHODIMJ;
namespace RPG::GameCore { class GlobalMarbleAIConfig; }
namespace RPG::GameCore { class GlobalMarbleBuffConfig; }
namespace RPG::GameCore { class GlobalMarbleSkillConfig; }
namespace RPG::GameCore { class GlobalPetMarbleBuffConfig; }
namespace RPG::GameCore { class GlobalPetMarbleSkillConfig; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace RPG::GameCore { class MarbleBuffConditionRow; }
namespace RPG::GameCore { class MarbleGameConfig; }
namespace RPG::GameCore { class MarbleMatchLevelConfigRow; }
namespace RPG::GameCore { class MarbleMatchTitleRow; }
namespace RPG::GameCore { class MarblePVPRankConfigRow; }
namespace RPG::GameCore { class MarbleRandomBuffRow; }
namespace RPG::GameCore { class MarbleSealLevelConfigRow; }
namespace RPG::GameCore { class MarbleSealRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KJGHJALPCCP_BBHGNCBFMGP_OFFSET UNITYSDK_OFFSET(0x1C9047A0)
#define KJGHJALPCCP_BCBOOPDEFJA_OFFSET UNITYSDK_OFFSET(0x1C905120)
#define KJGHJALPCCP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C903240)
#define KJGHJALPCCP_DBGIAAEODEL_OFFSET UNITYSDK_OFFSET(0x1C9046B0)
#define KJGHJALPCCP_DEGDEJCMFHK_OFFSET UNITYSDK_OFFSET(0x1C9051B0)
#define KJGHJALPCCP_DELNCIBAECH_OFFSET UNITYSDK_OFFSET(0x1C904EB0)
#define KJGHJALPCCP_DJIMNMLPPNP_OFFSET UNITYSDK_OFFSET(0x1C904100)
#define KJGHJALPCCP_DMDLIINKNOP_OFFSET UNITYSDK_OFFSET(0x1C904C80)
#define KJGHJALPCCP_EHFHGGMIHMJ_OFFSET UNITYSDK_OFFSET(0x1C9044D0)
#define KJGHJALPCCP_EOCNKEABFLA_OFFSET UNITYSDK_OFFSET(0x1C9036B0)
#define KJGHJALPCCP_EOHJFHKPDME_OFFSET UNITYSDK_OFFSET(0x1C904990)
#define KJGHJALPCCP_FDKHAAGBAMC_OFFSET UNITYSDK_OFFSET(0x1C903A70)
#define KJGHJALPCCP_FEACOOFIJKH_OFFSET UNITYSDK_OFFSET(0x1C905220)
#define KJGHJALPCCP_FPKJAECJBBC_OFFSET UNITYSDK_OFFSET(0x1C904620)
#define KJGHJALPCCP_GET_COOPBOSSTURNLIMIT_OFFSET UNITYSDK_OFFSET(0x1C903630)
#define KJGHJALPCCP_GGMGIGNHBGK_OFFSET UNITYSDK_OFFSET(0x1C904F20)
#define KJGHJALPCCP_GHKEJLAOGEF_OFFSET UNITYSDK_OFFSET(0x1C905090)
#define KJGHJALPCCP_GNFBALPKMMA_OFFSET UNITYSDK_OFFSET(0x1C903640)
#define KJGHJALPCCP_GPJIALCKICM_OFFSET UNITYSDK_OFFSET(0x1C904B30)
#define KJGHJALPCCP_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1C9035F0)
#define KJGHJALPCCP_ICCGOPCAPBP_OFFSET UNITYSDK_OFFSET(0x1C903920)
#define KJGHJALPCCP_JBLHBIJIAKG_OFFSET UNITYSDK_OFFSET(0x1C903990)
#define KJGHJALPCCP_JDDNHIANJAB_OFFSET UNITYSDK_OFFSET(0x1C903CB0)
#define KJGHJALPCCP_JDEILGBGGMP_OFFSET UNITYSDK_OFFSET(0x1C904450)
#define KJGHJALPCCP_JKIDAJCMKLL_OFFSET UNITYSDK_OFFSET(0x1C9037B0)
#define KJGHJALPCCP_KLEHGEDMAHK_OFFSET UNITYSDK_OFFSET(0x1C9035A0)
#define KJGHJALPCCP_LMAJJJEEDIO_OFFSET UNITYSDK_OFFSET(0x1C9034B0)
#define KJGHJALPCCP_LNNKBECDEEB_OFFSET UNITYSDK_OFFSET(0x1C9038B0)
#define KJGHJALPCCP_MEDCNLAOJPF_OFFSET UNITYSDK_OFFSET(0x1C903E90)
#define KJGHJALPCCP_MMKNOFCAGHG_OFFSET UNITYSDK_OFFSET(0x1C904AC0)
#define KJGHJALPCCP_MPOMHFLMEEN_OFFSET UNITYSDK_OFFSET(0x1C905000)
#define KJGHJALPCCP_NANJGGFICNP_OFFSET UNITYSDK_OFFSET(0x1C904A20)
#define KJGHJALPCCP_NMBGCGABBMC_OFFSET UNITYSDK_OFFSET(0x1C903A00)
#define KJGHJALPCCP_OFMCLLLJCGH_OFFSET UNITYSDK_OFFSET(0x1C903720)
#define KJGHJALPCCP_PGLOJKPLECN_OFFSET UNITYSDK_OFFSET(0x1C903840)
#define KJGHJALPCCP_PHCNPDLOEDE_OFFSET UNITYSDK_OFFSET(0x1C904F90)

inline static constexpr unsigned int KJGHJALPCCP_TypeDefinitionIndex = 43039;

	class KJGHJALPCCP : public ::System::Object
	{
	public:
		::RPG::GameCore::MarbleGameConfig* DPHDFKHIMEC; // 0x10
		::RPG::GameCore::GlobalMarbleBuffConfig* MBOKKHFKBAJ; // 0x18
		::RPG::GameCore::GlobalPetMarbleBuffConfig* GEJIIJCLDAD; // 0x20
		::RPG::GameCore::GlobalMarbleAIConfig* EGJAHHPMEGL; // 0x28
		::RPG::GameCore::GlobalMarbleSkillConfig* APOJICIKJPF; // 0x30
		::RPG::GameCore::GlobalPetMarbleSkillConfig* FCGFENPKNMM; // 0x38
		::System::UInt32 _CoopBossTurnLimit_k__BackingField; // 0x40
		::System::UInt32 ABNPHONMCEP; // 0x44
		// static const ::System::String* POKLHGLCDHC; // 0x0
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJGHJALPCCP_CTOR_OFFSET))(this, a1);
		}

		static ::System::UInt32 LMAJJJEEDIO()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + KJGHJALPCCP_LMAJJJEEDIO_OFFSET))();
		}

		static ::System::UInt32 KLEHGEDMAHK(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KJGHJALPCCP_KLEHGEDMAHK_OFFSET))(a1, a2);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJGHJALPCCP_HADOHLNHHGB_OFFSET))(this);
		}

		::System::UInt32 get_CoopBossTurnLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJGHJALPCCP_GET_COOPBOSSTURNLIMIT_OFFSET))(this);
		}

		::RPG::GameCore::MarbleSealRow* GNFBALPKMMA(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MarbleSealRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJGHJALPCCP_GNFBALPKMMA_OFFSET))(this, a1);
		}

		::RPG::GameCore::MarbleSealLevelConfigRow* EOCNKEABFLA(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::MarbleSealLevelConfigRow*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KJGHJALPCCP_EOCNKEABFLA_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchTitleRow*> OFMCLLLJCGH()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchTitleRow*>(*)(::PVOID))((::PBYTE)hIl2Cpp + KJGHJALPCCP_OFMCLLLJCGH_OFFSET))(this);
		}

		::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::IEPCGBKKCHB*> JKIDAJCMKLL()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::IEPCGBKKCHB*>(*)(::PVOID))((::PBYTE)hIl2Cpp + KJGHJALPCCP_JKIDAJCMKLL_OFFSET))(this);
		}

		::RPG::GameCore::MarblePVPRankConfigRow* PGLOJKPLECN(::RPG::GameCore::MultiPlayerGameMode a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::MarblePVPRankConfigRow*(*)(::PVOID, ::RPG::GameCore::MultiPlayerGameMode, ::System::UInt32))((::PBYTE)hIl2Cpp + KJGHJALPCCP_PGLOJKPLECN_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::MarbleMatchLevelConfigRow* LNNKBECDEEB(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MarbleMatchLevelConfigRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJGHJALPCCP_LNNKBECDEEB_OFFSET))(this, a1);
		}

		::HMBDKHPPBHB* ICCGOPCAPBP(::System::UInt32 a1)
		{
			return ((::HMBDKHPPBHB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJGHJALPCCP_ICCGOPCAPBP_OFFSET))(this, a1);
		}

		::DOBOKPCPHCF* JBLHBIJIAKG(::System::UInt32 a1)
		{
			return ((::DOBOKPCPHCF*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJGHJALPCCP_JBLHBIJIAKG_OFFSET))(this, a1);
		}

		::HAELNJMDBMN* NMBGCGABBMC(::System::UInt32 a1)
		{
			return ((::HAELNJMDBMN*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJGHJALPCCP_NMBGCGABBMC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* FDKHAAGBAMC()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJGHJALPCCP_FDKHAAGBAMC_OFFSET))(this);
		}

		::System::UInt32 JDDNHIANJAB(::RPG::GameCore::PetMarbleLevelMode a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::PetMarbleLevelMode))((::PBYTE)hIl2Cpp + KJGHJALPCCP_JDDNHIANJAB_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* MEDCNLAOJPF(::RPG::GameCore::PetMarbleLevelMode a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::PetMarbleLevelMode))((::PBYTE)hIl2Cpp + KJGHJALPCCP_MEDCNLAOJPF_OFFSET))(this, a1);
		}

		::System::UInt32 JDEILGBGGMP(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJGHJALPCCP_JDEILGBGGMP_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* EHFHGGMIHMJ(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + KJGHJALPCCP_EHFHGGMIHMJ_OFFSET))(this, a1, a2);
		}

		::System::UInt32 DBGIAAEODEL(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + KJGHJALPCCP_DBGIAAEODEL_OFFSET))(this, a1, a2);
		}

		::System::Boolean DJIMNMLPPNP(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJGHJALPCCP_DJIMNMLPPNP_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* FPKJAECJBBC(::System::UInt32 a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJGHJALPCCP_FPKJAECJBBC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* BBHGNCBFMGP()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJGHJALPCCP_BBHGNCBFMGP_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* EOHJFHKPDME(::System::UInt32 a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJGHJALPCCP_EOHJFHKPDME_OFFSET))(this, a1);
		}

		::System::UInt32 NANJGGFICNP(::RPG::GameCore::PetMarbleLevelMode a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::PetMarbleLevelMode))((::PBYTE)hIl2Cpp + KJGHJALPCCP_NANJGGFICNP_OFFSET))(this, a1);
		}

		::AGLKOAMDEFB* MMKNOFCAGHG(::System::UInt32 a1)
		{
			return ((::AGLKOAMDEFB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJGHJALPCCP_MMKNOFCAGHG_OFFSET))(this, a1);
		}

		::AGLKOAMDEFB* GPJIALCKICM(::System::UInt32 a1)
		{
			return ((::AGLKOAMDEFB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJGHJALPCCP_GPJIALCKICM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* DMDLIINKNOP()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJGHJALPCCP_DMDLIINKNOP_OFFSET))(this);
		}

		::NLLIHHODIMJ* DELNCIBAECH(::System::UInt32 a1)
		{
			return ((::NLLIHHODIMJ*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJGHJALPCCP_DELNCIBAECH_OFFSET))(this, a1);
		}

		::LHHCCNFEGGD* GGMGIGNHBGK(::System::UInt32 a1)
		{
			return ((::LHHCCNFEGGD*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJGHJALPCCP_GGMGIGNHBGK_OFFSET))(this, a1);
		}

		::LJPIOLMIIAO* PHCNPDLOEDE(::System::UInt32 a1)
		{
			return ((::LJPIOLMIIAO*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJGHJALPCCP_PHCNPDLOEDE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::LHHCCNFEGGD*> MPOMHFLMEEN()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::LHHCCNFEGGD*>(*)(::PVOID))((::PBYTE)hIl2Cpp + KJGHJALPCCP_MPOMHFLMEEN_OFFSET))(this);
		}

		::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::LJPIOLMIIAO*> GHKEJLAOGEF()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::LJPIOLMIIAO*>(*)(::PVOID))((::PBYTE)hIl2Cpp + KJGHJALPCCP_GHKEJLAOGEF_OFFSET))(this);
		}

		::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleRandomBuffRow*> BCBOOPDEFJA()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleRandomBuffRow*>(*)(::PVOID))((::PBYTE)hIl2Cpp + KJGHJALPCCP_BCBOOPDEFJA_OFFSET))(this);
		}

		::RPG::GameCore::MarbleBuffConditionRow* DEGDEJCMFHK(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MarbleBuffConditionRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJGHJALPCCP_DEGDEJCMFHK_OFFSET))(this, a1);
		}

		::RPG::GameCore::LittleGameLevelConfig* FEACOOFIJKH(::System::String* a1)
		{
			return ((::RPG::GameCore::LittleGameLevelConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KJGHJALPCCP_FEACOOFIJKH_OFFSET))(this, a1);
		}

	};
