#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSoldierTeamType.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleInitPosition.h"
#include "unitysdk/System/Object.h"
class DKEFAMNAFAK;
class PNFAENKDBIJ;
namespace RPG::Client { class ChenLingBattleSoldierConfig; }
namespace RPG::Client { class ChenLingBattleSoldierLevelConfig; }
namespace RPG::Client::ChenLingBattle { class Enchant; }
namespace RPG::Client::ChenLingBattle { class Soldier; }
namespace RPG::GameCore { class ChenLingBattlePresetArmyConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DKEFAMNAFAK_CAKKGPJIKIJ_OFFSET UNITYSDK_OFFSET(0xF879D60)
#define DKEFAMNAFAK_CDIMDHMPJND_OFFSET UNITYSDK_OFFSET(0xF879F00)
#define DKEFAMNAFAK_CGDDCCHMNPP_OFFSET UNITYSDK_OFFSET(0xF878FF0)
#define DKEFAMNAFAK_CTOR_1_OFFSET UNITYSDK_OFFSET(0xF8790B0)
#define DKEFAMNAFAK_CTOR_2_OFFSET UNITYSDK_OFFSET(0xF879800)
#define DKEFAMNAFAK_CTOR_OFFSET UNITYSDK_OFFSET(0xF877940)
#define DKEFAMNAFAK_FEMNHOPLLIO_OFFSET UNITYSDK_OFFSET(0xF879F80)
#define DKEFAMNAFAK_FOOABFNJPKB_OFFSET UNITYSDK_OFFSET(0xF878FA0)
#define DKEFAMNAFAK_GDNPCDNMCKF_OFFSET UNITYSDK_OFFSET(0xF879710)
#define DKEFAMNAFAK_GET_ATKSKILLIDLIST_OFFSET UNITYSDK_OFFSET(0xF87A090)
#define DKEFAMNAFAK_GET_ENHANCEMENTS_OFFSET UNITYSDK_OFFSET(0xF87A0F0)
#define DKEFAMNAFAK_GET_EXTRAADDSKILLIDLIST_OFFSET UNITYSDK_OFFSET(0xF87A0B0)
#define DKEFAMNAFAK_GET_INITPOSITION_OFFSET UNITYSDK_OFFSET(0xF879F60)
#define DKEFAMNAFAK_GET_ISPROMOTED_OFFSET UNITYSDK_OFFSET(0xF87A0D0)
#define DKEFAMNAFAK_GET_ISRANGEATTACK_OFFSET UNITYSDK_OFFSET(0xF87A050)
#define DKEFAMNAFAK_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xF879E70)
#define DKEFAMNAFAK_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0xF87A030)
#define DKEFAMNAFAK_GET_OVERRIDEMATERIALPATH_OFFSET UNITYSDK_OFFSET(0xF87A110)
#define DKEFAMNAFAK_GET_RECOMMENDEDGRIDINDEX_OFFSET UNITYSDK_OFFSET(0xF87A150)
#define DKEFAMNAFAK_GET_SKILLIDLIST_OFFSET UNITYSDK_OFFSET(0xF87A070)
#define DKEFAMNAFAK_GET_SOLDIERID_OFFSET UNITYSDK_OFFSET(0xF879E50)
#define DKEFAMNAFAK_GET_TEAMTYPE_OFFSET UNITYSDK_OFFSET(0xF879EE0)
#define DKEFAMNAFAK_GET_UNITPROFILERLIST_OFFSET UNITYSDK_OFFSET(0xF87A130)
#define DKEFAMNAFAK_HFFHIOFCCBG_OFFSET UNITYSDK_OFFSET(0xF879E90)
#define DKEFAMNAFAK_HPJLBFPJAJA_OFFSET UNITYSDK_OFFSET(0xF87A170)
#define DKEFAMNAFAK_IEIDKMPLPDF_OFFSET UNITYSDK_OFFSET(0xF879A00)
#define DKEFAMNAFAK_JFGAKHGGFIC_OFFSET UNITYSDK_OFFSET(0xF879E00)
#define DKEFAMNAFAK_KIMBHEDCNGA_OFFSET UNITYSDK_OFFSET(0xF877880)
#define DKEFAMNAFAK_MMDAAEJLJEM_OFFSET UNITYSDK_OFFSET(0xF877E70)
#define DKEFAMNAFAK_NIACGFIECGC_OFFSET UNITYSDK_OFFSET(0xF8797A0)
#define DKEFAMNAFAK_NMCEDHPGBKJ_1_OFFSET UNITYSDK_OFFSET(0xF8794F0)
#define DKEFAMNAFAK_NMCEDHPGBKJ_OFFSET UNITYSDK_OFFSET(0xF877C60)
#define DKEFAMNAFAK_SET_ATKSKILLIDLIST_OFFSET UNITYSDK_OFFSET(0xF87A0A0)
#define DKEFAMNAFAK_SET_ENHANCEMENTS_OFFSET UNITYSDK_OFFSET(0xF87A100)
#define DKEFAMNAFAK_SET_EXTRAADDSKILLIDLIST_OFFSET UNITYSDK_OFFSET(0xF87A0C0)
#define DKEFAMNAFAK_SET_INITPOSITION_OFFSET UNITYSDK_OFFSET(0xF879F70)
#define DKEFAMNAFAK_SET_ISPROMOTED_OFFSET UNITYSDK_OFFSET(0xF87A0E0)
#define DKEFAMNAFAK_SET_ISRANGEATTACK_OFFSET UNITYSDK_OFFSET(0xF87A060)
#define DKEFAMNAFAK_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xF879E80)
#define DKEFAMNAFAK_SET_MODELPATH_OFFSET UNITYSDK_OFFSET(0xF87A040)
#define DKEFAMNAFAK_SET_OVERRIDEMATERIALPATH_OFFSET UNITYSDK_OFFSET(0xF87A120)
#define DKEFAMNAFAK_SET_RECOMMENDEDGRIDINDEX_OFFSET UNITYSDK_OFFSET(0xF87A160)
#define DKEFAMNAFAK_SET_SKILLIDLIST_OFFSET UNITYSDK_OFFSET(0xF87A080)
#define DKEFAMNAFAK_SET_SOLDIERID_OFFSET UNITYSDK_OFFSET(0xF879E60)
#define DKEFAMNAFAK_SET_TEAMTYPE_OFFSET UNITYSDK_OFFSET(0xF879EF0)
#define DKEFAMNAFAK_SET_UNITPROFILERLIST_OFFSET UNITYSDK_OFFSET(0xF87A140)

inline static constexpr unsigned int DKEFAMNAFAK_TypeDefinitionIndex = 61437;

	class DKEFAMNAFAK : public ::System::Object
	{
	public:
		::System::String* _ModelPath_k__BackingField; // 0x10
		::System::String* _OverrideMaterialPath_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::PNFAENKDBIJ*>* _UnitProfilerList_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _Enhancements_k__BackingField; // 0x28
		::Il2CppArray<::System::UInt32>* _AtkSkillIDList_k__BackingField; // 0x30
		::Il2CppArray<::System::UInt32>* _SkillIDList_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _ExtraAddSkillIDList_k__BackingField; // 0x40
		::System::Boolean _IsRangeAttack_k__BackingField; // 0x48
		::System::Boolean _IsPromoted_k__BackingField; // 0x49
		::System::Byte _padding0[0x2];
		::System::Int32 _RecommendedGridIndex_k__BackingField; // 0x4C
		::System::UInt32 GDHFONDLNIC; // 0x50
		::RPG::GameCore::ChenLingBattleInitPosition _InitPosition_k__BackingField; // 0x54
		::System::UInt32 _SoldierID_k__BackingField; // 0x58
		::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType _TeamType_k__BackingField; // 0x5C
		::System::UInt32 _Level_k__BackingField; // 0x60
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattle::Enchant*>* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattle::Enchant*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_1(::RPG::Client::ChenLingBattle::Soldier* a1, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::Soldier*, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_CTOR_2_OFFSET))(this, a1, a2);
		}

		static ::DKEFAMNAFAK* KIMBHEDCNGA(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a4)
		{
			return ((::DKEFAMNAFAK*(*)(::System::UInt32, ::System::UInt32, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_KIMBHEDCNGA_OFFSET))(a1, a2, a3, a4);
		}

		static ::DKEFAMNAFAK* MMDAAEJLJEM(::RPG::GameCore::ChenLingBattlePresetArmyConfig* a1, ::System::Boolean a2)
		{
			return ((::DKEFAMNAFAK*(*)(::RPG::GameCore::ChenLingBattlePresetArmyConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_MMDAAEJLJEM_OFFSET))(a1, a2);
		}

		::System::Void GDNPCDNMCKF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_GDNPCDNMCKF_OFFSET))(this, a1);
		}

		::System::Void NIACGFIECGC(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_NIACGFIECGC_OFFSET))(this, a1);
		}

		::System::Void NMCEDHPGBKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_NMCEDHPGBKJ_OFFSET))(this);
		}

		::System::Void NMCEDHPGBKJ_1(::RPG::Client::ChenLingBattle::Soldier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::Soldier*))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_NMCEDHPGBKJ_1_OFFSET))(this, a1);
		}

		::System::Void CGDDCCHMNPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_CGDDCCHMNPP_OFFSET))(this);
		}

		::System::Void IEIDKMPLPDF(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_IEIDKMPLPDF_OFFSET))(this, a1, a2);
		}

		::System::Void FOOABFNJPKB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_FOOABFNJPKB_OFFSET))(this, a1);
		}

		::System::Void JFGAKHGGFIC(::RPG::GameCore::ChenLingBattleInitPosition a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingBattleInitPosition))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_JFGAKHGGFIC_OFFSET))(this, a1);
		}

		::System::UInt32 get_SoldierID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_GET_SOLDIERID_OFFSET))(this);
		}

		::System::Void set_SoldierID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_SET_SOLDIERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 HFFHIOFCCBG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_HFFHIOFCCBG_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType get_TeamType()
		{
			return ((::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_GET_TEAMTYPE_OFFSET))(this);
		}

		::System::Void set_TeamType(::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_SET_TEAMTYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChenLingBattleInitPosition CDIMDHMPJND()
		{
			return ((::RPG::GameCore::ChenLingBattleInitPosition(*)(::PVOID))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_CDIMDHMPJND_OFFSET))(this);
		}

		::RPG::GameCore::ChenLingBattleInitPosition get_InitPosition()
		{
			return ((::RPG::GameCore::ChenLingBattleInitPosition(*)(::PVOID))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_GET_INITPOSITION_OFFSET))(this);
		}

		::System::Void set_InitPosition(::RPG::GameCore::ChenLingBattleInitPosition a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingBattleInitPosition))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_SET_INITPOSITION_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingBattleSoldierConfig* CAKKGPJIKIJ()
		{
			return ((::RPG::Client::ChenLingBattleSoldierConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_CAKKGPJIKIJ_OFFSET))(this);
		}

		::RPG::Client::ChenLingBattleSoldierLevelConfig* FEMNHOPLLIO()
		{
			return ((::RPG::Client::ChenLingBattleSoldierLevelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_FEMNHOPLLIO_OFFSET))(this);
		}

		::System::String* get_ModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_GET_MODELPATH_OFFSET))(this);
		}

		::System::Void set_ModelPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_SET_MODELPATH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRangeAttack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_GET_ISRANGEATTACK_OFFSET))(this);
		}

		::System::Void set_IsRangeAttack(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_SET_ISRANGEATTACK_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_SkillIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_GET_SKILLIDLIST_OFFSET))(this);
		}

		::System::Void set_SkillIDList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_SET_SKILLIDLIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_AtkSkillIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_GET_ATKSKILLIDLIST_OFFSET))(this);
		}

		::System::Void set_AtkSkillIDList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_SET_ATKSKILLIDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ExtraAddSkillIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_GET_EXTRAADDSKILLIDLIST_OFFSET))(this);
		}

		::System::Void set_ExtraAddSkillIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_SET_EXTRAADDSKILLIDLIST_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPromoted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_GET_ISPROMOTED_OFFSET))(this);
		}

		::System::Void set_IsPromoted(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_SET_ISPROMOTED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_Enhancements()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_GET_ENHANCEMENTS_OFFSET))(this);
		}

		::System::Void set_Enhancements(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_SET_ENHANCEMENTS_OFFSET))(this, a1);
		}

		::System::String* get_OverrideMaterialPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_GET_OVERRIDEMATERIALPATH_OFFSET))(this);
		}

		::System::Void set_OverrideMaterialPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_SET_OVERRIDEMATERIALPATH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::PNFAENKDBIJ*>* get_UnitProfilerList()
		{
			return ((::System::Collections::Generic::List_1<::PNFAENKDBIJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_GET_UNITPROFILERLIST_OFFSET))(this);
		}

		::System::Void set_UnitProfilerList(::System::Collections::Generic::List_1<::PNFAENKDBIJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::PNFAENKDBIJ*>*))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_SET_UNITPROFILERLIST_OFFSET))(this, a1);
		}

		::System::Int32 get_RecommendedGridIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_GET_RECOMMENDEDGRIDINDEX_OFFSET))(this);
		}

		::System::Void set_RecommendedGridIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_SET_RECOMMENDEDGRIDINDEX_OFFSET))(this, a1);
		}

		::System::Int32 HPJLBFPJAJA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKEFAMNAFAK_HPJLBFPJAJA_OFFSET))(this);
		}

	};
