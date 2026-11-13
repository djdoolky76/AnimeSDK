#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StageMonsterInvasionParamType.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MOOOBLNKFLL.h"
#include "unitysdk/NAPEBNKGGGP.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterUIData.h"
class DHAJHKFGEIB;
class EKFMIDBJDIA;
class HDIEJLMEELG;
class IDBNLIKLDKJ;
class LAKOGCBIPHB;
namespace RPG::GameCore { class BattleLineupData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GridFightPenaltyRuleConfigRow; }
namespace RPG::GameCore { class MazeBuffData; }
namespace RPG::GameCore { class StageInvasionBuffRow; }
namespace RPG::GameCore { class StageInvasionRogueMonsterRow; }
namespace RPG::GameCore { class StageMonsterInvasionParamRow; }
namespace RPG::GameCore { class StatisticsComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System::Collections { class BitArray; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LACLKDPNNLH_AFDAJJAJBHC_OFFSET UNITYSDK_OFFSET(0x1B275650)
#define LACLKDPNNLH_AOFLBEHHLKC_OFFSET UNITYSDK_OFFSET(0x1B277940)
#define LACLKDPNNLH_BIFDGOGHEFG_OFFSET UNITYSDK_OFFSET(0x1B2768D0)
#define LACLKDPNNLH_BLAJHBLEGCK_OFFSET UNITYSDK_OFFSET(0x1B2779C0)
#define LACLKDPNNLH_BMGLLDLIMEA_OFFSET UNITYSDK_OFFSET(0x1B276800)
#define LACLKDPNNLH_CHAAJBIHMMH_OFFSET UNITYSDK_OFFSET(0x1B2766C0)
#define LACLKDPNNLH_CTOR_OFFSET UNITYSDK_OFFSET(0x1B274EB0)
#define LACLKDPNNLH_DJLKHDEDABP_OFFSET UNITYSDK_OFFSET(0x1B276C60)
#define LACLKDPNNLH_EIIFHCFPGDN_OFFSET UNITYSDK_OFFSET(0x1B275370)
#define LACLKDPNNLH_EOMGLEBFMAM_OFFSET UNITYSDK_OFFSET(0x1B2771C0)
#define LACLKDPNNLH_FAKIPMNAJGL_OFFSET UNITYSDK_OFFSET(0x1B2752F0)
#define LACLKDPNNLH_FEJKOHFHHNN_OFFSET UNITYSDK_OFFSET(0x1B2775E0)
#define LACLKDPNNLH_FGOLFIJGEJI_OFFSET UNITYSDK_OFFSET(0x1B275830)
#define LACLKDPNNLH_FKNBDJKAMKC_OFFSET UNITYSDK_OFFSET(0x1B2776F0)
#define LACLKDPNNLH_GBFAKACPBPL_OFFSET UNITYSDK_OFFSET(0x1B276CB0)
#define LACLKDPNNLH_GCFLNFHCAFD_OFFSET UNITYSDK_OFFSET(0x1B2764B0)
#define LACLKDPNNLH_GCILMJFMLLB_OFFSET UNITYSDK_OFFSET(0x1B277240)
#define LACLKDPNNLH_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1B275FC0)
#define LACLKDPNNLH_HMFDIKGEOIA_OFFSET UNITYSDK_OFFSET(0x1B277BB0)
#define LACLKDPNNLH_HNCBDIEOHKG_OFFSET UNITYSDK_OFFSET(0x1B277380)
#define LACLKDPNNLH_IEPEPMNOHBO_OFFSET UNITYSDK_OFFSET(0x1B2758E0)
#define LACLKDPNNLH_IGDLGPIEMEK_OFFSET UNITYSDK_OFFSET(0x1B275AC0)
#define LACLKDPNNLH_KDAKIPMKLIO_OFFSET UNITYSDK_OFFSET(0x1B277810)
#define LACLKDPNNLH_KJHNMELELBL_OFFSET UNITYSDK_OFFSET(0x1B277B10)
#define LACLKDPNNLH_KPFEEEMMLJG_OFFSET UNITYSDK_OFFSET(0x1B275240)
#define LACLKDPNNLH_KPLJIPFCNCC_OFFSET UNITYSDK_OFFSET(0x1B276DF0)
#define LACLKDPNNLH_LCPMEGGELDN_OFFSET UNITYSDK_OFFSET(0x1B275530)
#define LACLKDPNNLH_LDFBDFPKBKA_OFFSET UNITYSDK_OFFSET(0x1B276220)
#define LACLKDPNNLH_MEAOPIIBHOP_OFFSET UNITYSDK_OFFSET(0x1B2772F0)
#define LACLKDPNNLH_MEENLJHJAGC_OFFSET UNITYSDK_OFFSET(0x1B277540)
#define LACLKDPNNLH_MFPGAFNPANJ_OFFSET UNITYSDK_OFFSET(0x1B277BA0)
#define LACLKDPNNLH_MHKIJHFLKBP_OFFSET UNITYSDK_OFFSET(0x1B277BC0)
#define LACLKDPNNLH_NDGCEDHDKNF_OFFSET UNITYSDK_OFFSET(0x1B2754A0)
#define LACLKDPNNLH_NDICFNPBCMD_OFFSET UNITYSDK_OFFSET(0x1B2761C0)
#define LACLKDPNNLH_NHOFODANFGF_OFFSET UNITYSDK_OFFSET(0x1B276150)
#define LACLKDPNNLH_PAPLKANKKPC_OFFSET UNITYSDK_OFFSET(0x1B276020)
#define LACLKDPNNLH_PEOALEFNMOG_OFFSET UNITYSDK_OFFSET(0x1B275A50)
#define LACLKDPNNLH_PPHMOAHCOMJ_OFFSET UNITYSDK_OFFSET(0x1B275730)

inline static constexpr unsigned int LACLKDPNNLH_TypeDefinitionIndex = 57389;

	class LACLKDPNNLH : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedGameMode* GICHGNGMBGD; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::HDIEJLMEELG*>* MINMNJGAGOM; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* DLKBMJMOMEB; // 0x20
		::RPG::GameCore::StatisticsComponent* BCBGNBGMBAL; // 0x28
		::Il2CppArray<::System::Int32>* HHCJCOEAGGI; // 0x30
		::System::Collections::BitArray* PIJBEDOOEGF; // 0x38
		::RPG::GameCore::StageInvasionBuffRow* HAENOCFNAMF; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* DONPAEODKCC; // 0x48
		::Il2CppArray<::IDBNLIKLDKJ*>* OCAMDFDEFMJ; // 0x50
		::RPG::GameCore::StageType DPGFBAIAIFO; // 0x58
		::System::Boolean HOACEHGKIKI; // 0x5C
		::System::Byte _padding0[0x3];
		::System::Int32 JJBGALIHHAG; // 0x60
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + LACLKDPNNLH_CTOR_OFFSET))(this, a1);
		}

		::System::Void FAKIPMNAJGL(::RPG::GameCore::BattleLineupData* a1, ::RPG::GameCore::StageType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleLineupData*, ::RPG::GameCore::StageType))((::PBYTE)hIl2Cpp + LACLKDPNNLH_FAKIPMNAJGL_OFFSET))(this, a1, a2);
		}

		::System::Void NDGCEDHDKNF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LACLKDPNNLH_NDGCEDHDKNF_OFFSET))(this);
		}

		::RPG::GameCore::GridFightPenaltyRuleConfigRow* PPHMOAHCOMJ(::RPG::GameCore::GridFightPenaltyRuleConfigRow* a1)
		{
			return ((::RPG::GameCore::GridFightPenaltyRuleConfigRow*(*)(::PVOID, ::RPG::GameCore::GridFightPenaltyRuleConfigRow*))((::PBYTE)hIl2Cpp + LACLKDPNNLH_PPHMOAHCOMJ_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::GridFightPenaltyRuleConfigRow* FGOLFIJGEJI(::RPG::GameCore::GridFightPenaltyRuleConfigRow* a1)
		{
			return ((::RPG::GameCore::GridFightPenaltyRuleConfigRow*(*)(::RPG::GameCore::GridFightPenaltyRuleConfigRow*))((::PBYTE)hIl2Cpp + LACLKDPNNLH_FGOLFIJGEJI_OFFSET))(a1);
		}

		::System::Void LCPMEGGELDN(::RPG::GameCore::BattleLineupData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleLineupData*))((::PBYTE)hIl2Cpp + LACLKDPNNLH_LCPMEGGELDN_OFFSET))(this, a1);
		}

		::System::Void AFDAJJAJBHC(::RPG::GameCore::BattleLineupData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleLineupData*))((::PBYTE)hIl2Cpp + LACLKDPNNLH_AFDAJJAJBHC_OFFSET))(this, a1);
		}

		::System::Void IGDLGPIEMEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LACLKDPNNLH_IGDLGPIEMEK_OFFSET))(this);
		}

		::System::Void PEOALEFNMOG(::Il2CppArray<::IDBNLIKLDKJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::IDBNLIKLDKJ*>*))((::PBYTE)hIl2Cpp + LACLKDPNNLH_PEOALEFNMOG_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::StageInvasionRogueMonsterRow* IEPEPMNOHBO(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::StageInvasionRogueMonsterRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LACLKDPNNLH_IEPEPMNOHBO_OFFSET))(a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LACLKDPNNLH_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Boolean NHOFODANFGF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LACLKDPNNLH_NHOFODANFGF_OFFSET))(this, a1);
		}

		::System::Boolean NDICFNPBCMD(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LACLKDPNNLH_NDICFNPBCMD_OFFSET))(this, a1);
		}

		::System::Void LDFBDFPKBKA(::NAPEBNKGGGP a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAPEBNKGGGP))((::PBYTE)hIl2Cpp + LACLKDPNNLH_LDFBDFPKBKA_OFFSET))(this, a1);
		}

		::System::Void CHAAJBIHMMH(::DHAJHKFGEIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DHAJHKFGEIB*))((::PBYTE)hIl2Cpp + LACLKDPNNLH_CHAAJBIHMMH_OFFSET))(this, a1);
		}

		::System::Boolean BMGLLDLIMEA(::System::UInt32 a1, ::RPG::GameCore::StageInvasionMonsterUIData a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::StageInvasionMonsterUIData))((::PBYTE)hIl2Cpp + LACLKDPNNLH_BMGLLDLIMEA_OFFSET))(this, a1, a2);
		}

		::System::Void BIFDGOGHEFG(::System::UInt32 a1, ::LAKOGCBIPHB* a2, ::MOOOBLNKFLL a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::LAKOGCBIPHB*, ::MOOOBLNKFLL))((::PBYTE)hIl2Cpp + LACLKDPNNLH_BIFDGOGHEFG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GBFAKACPBPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LACLKDPNNLH_GBFAKACPBPL_OFFSET))(this);
		}

		::System::Void KPLJIPFCNCC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LACLKDPNNLH_KPLJIPFCNCC_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint EOMGLEBFMAM(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::StageMonsterInvasionParamType a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::StageMonsterInvasionParamType))((::PBYTE)hIl2Cpp + LACLKDPNNLH_EOMGLEBFMAM_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* GCILMJFMLLB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LACLKDPNNLH_GCILMJFMLLB_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::StageMonsterInvasionParamRow* MEAOPIIBHOP(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::StageMonsterInvasionParamRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LACLKDPNNLH_MEAOPIIBHOP_OFFSET))(a1, a2);
		}

		::System::Void HNCBDIEOHKG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LACLKDPNNLH_HNCBDIEOHKG_OFFSET))(this, a1);
		}

		::System::Void EIIFHCFPGDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LACLKDPNNLH_EIIFHCFPGDN_OFFSET))(this);
		}

		::System::Void PAPLKANKKPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LACLKDPNNLH_PAPLKANKKPC_OFFSET))(this);
		}

		static ::System::Boolean KPFEEEMMLJG(::System::Collections::Generic::List_1<::RPG::GameCore::MazeBuffData*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::RPG::GameCore::MazeBuffData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + LACLKDPNNLH_KPFEEEMMLJG_OFFSET))(a1, a2);
		}

		::System::Void MEENLJHJAGC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + LACLKDPNNLH_MEENLJHJAGC_OFFSET))(this, a1);
		}

		::System::Void FEJKOHFHHNN(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + LACLKDPNNLH_FEJKOHFHHNN_OFFSET))(this, a1);
		}

		::System::Void AOFLBEHHLKC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LACLKDPNNLH_AOFLBEHHLKC_OFFSET))(this, a1);
		}

		::System::Void KDAKIPMKLIO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LACLKDPNNLH_KDAKIPMKLIO_OFFSET))(this, a1);
		}

		::System::Void BLAJHBLEGCK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LACLKDPNNLH_BLAJHBLEGCK_OFFSET))(this, a1);
		}

		::System::Void FKNBDJKAMKC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LACLKDPNNLH_FKNBDJKAMKC_OFFSET))(this, a1);
		}

		::System::Void KJHNMELELBL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LACLKDPNNLH_KJHNMELELBL_OFFSET))(this, a1);
		}

		::System::Void GCFLNFHCAFD(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::Il2CppArray<::RPG::GameCore::FixPoint>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + LACLKDPNNLH_GCFLNFHCAFD_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 DJLKHDEDABP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LACLKDPNNLH_DJLKHDEDABP_OFFSET))(this);
		}

		::System::Boolean MFPGAFNPANJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LACLKDPNNLH_MFPGAFNPANJ_OFFSET))(this);
		}

		::RPG::GameCore::StageInvasionBuffRow* HMFDIKGEOIA()
		{
			return ((::RPG::GameCore::StageInvasionBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + LACLKDPNNLH_HMFDIKGEOIA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* MHKIJHFLKBP()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LACLKDPNNLH_MHKIJHFLKBP_OFFSET))(this);
		}

	};
