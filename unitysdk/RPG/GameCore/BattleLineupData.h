#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleExtraPropertyAddition.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class DLIBCMNBLGF;
class GNEBNHLMFAF;
namespace RPG::GameCore { class BattleLineupData; }
namespace RPG::GameCore { class LevelGraphConfig; }
namespace RPG::GameCore { class LineUpCharacter; }
namespace RPG::GameCore { class LineUpContext; }
namespace RPG::GameCore { class MazeBuffData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_BATTLELINEUPDATA_ADDNEWBATTLEEXTRAPROPERTYADDITION_OFFSET UNITYSDK_OFFSET(0xF047F80)
#define RPG_GAMECORE_BATTLELINEUPDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0xF049F60)
#define RPG_GAMECORE_BATTLELINEUPDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xF047900)
#define RPG_GAMECORE_BATTLELINEUPDATA_DEEPCOPY_OFFSET UNITYSDK_OFFSET(0xF045130)
#define RPG_GAMECORE_BATTLELINEUPDATA_FILLALIVELIGHTTEAM_OFFSET UNITYSDK_OFFSET(0xF0494B0)
#define RPG_GAMECORE_BATTLELINEUPDATA_FILLBATTLEEXTRAPROPERTYADDITION_OFFSET UNITYSDK_OFFSET(0xF048060)
#define RPG_GAMECORE_BATTLELINEUPDATA_GETALLAVATARGLOBALMAZEBUFFDATALIST_OFFSET UNITYSDK_OFFSET(0xF049DA0)
#define RPG_GAMECORE_BATTLELINEUPDATA_GETALLMAZEBUFFDATALIST_OFFSET UNITYSDK_OFFSET(0xF049740)
#define RPG_GAMECORE_BATTLELINEUPDATA_GETTEMPLATEVARIABLES_OFFSET UNITYSDK_OFFSET(0xF0491C0)
#define RPG_GAMECORE_BATTLELINEUPDATA_GETTOTALEXTRAAVATARRANK_OFFSET UNITYSDK_OFFSET(0xF049C70)
#define RPG_GAMECORE_BATTLELINEUPDATA_GET_BATTLEEXTRAPROPERTYADDITIONLIST_OFFSET UNITYSDK_OFFSET(0xF049EF0)
#define RPG_GAMECORE_BATTLELINEUPDATA_GET_LEVELCONFIG_OFFSET UNITYSDK_OFFSET(0xF049F10)
#define RPG_GAMECORE_BATTLELINEUPDATA_GET_LEVELPATH_OFFSET UNITYSDK_OFFSET(0xF045DD0)
#define RPG_GAMECORE_BATTLELINEUPDATA_LINEUPCONTAINSAVATARID_OFFSET UNITYSDK_OFFSET(0xF049620)
#define RPG_GAMECORE_BATTLELINEUPDATA_RESET_OFFSET UNITYSDK_OFFSET(0xF047CC0)
#define RPG_GAMECORE_BATTLELINEUPDATA_SETCUSTOMLEVELPATH_OFFSET UNITYSDK_OFFSET(0xF047C70)
#define RPG_GAMECORE_BATTLELINEUPDATA_SET_BATTLEEXTRAPROPERTYADDITIONLIST_OFFSET UNITYSDK_OFFSET(0xF049F00)
#define RPG_GAMECORE_BATTLELINEUPDATA__FILLTEMPLATEVARS_OFFSET UNITYSDK_OFFSET(0xF049330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleLineupData_TypeDefinitionIndex = 57546;

	class BattleLineupData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::MazeBuffData*>* MazeBuffAdded; // 0x10
		::System::String* _LevelPath; // 0x18
		::Il2CppArray<::RPG::GameCore::LineUpCharacter*>* ExtraTeam; // 0x20
		::Il2CppArray<::RPG::GameCore::LineUpCharacter*>* LightTeam; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* _TemplateVariables; // 0x30
		::Il2CppArray<::RPG::GameCore::LineUpCharacter*>* AppendAvatars; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* DeferCreateTrialPlayerDic; // 0x40
		::Il2CppArray<::System::UInt32>* TeamBuffIDList; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* AdditionalTemplateVariables; // 0x50
		::RPG::GameCore::LineUpContext* Context; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* SpecialAvatarLevelAreaConfigs; // 0x60
		::System::Collections::Generic::List_1<::GNEBNHLMFAF*>* _BattleExtraPropertyAdditionList_k__BackingField; // 0x68
		::System::UInt32 WorldLevel; // 0x70
		static ::System::Boolean* StaticGet_s_IsSkipBattlePerformance()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "BattleLineupData")->GetStaticField(0xDCD0);
		}

		static ::System::Boolean* StaticGet_s_IsPlayerDontLoad()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "BattleLineupData")->GetStaticField(0xDCD1);
		}

		static ::System::Boolean* StaticGet_s_IsMonsterDontLoad()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "BattleLineupData")->GetStaticField(0xDCD2);
		}

		static ::System::Int32* StaticGet_s_TeamBoostSkillNumber()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.GameCore", "BattleLineupData")->GetStaticField(0xDCD4);
		}

		static ::System::Int32* StaticGet_s_TeamDefaultCharacterCount()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.GameCore", "BattleLineupData")->GetStaticField(0xDCD8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA_CCTOR_OFFSET))();
		}

		::System::Void SetCustomLevelPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA_SETCUSTOMLEVELPATH_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA_RESET_OFFSET))(this);
		}

		::RPG::GameCore::BattleLineupData* DeepCopy()
		{
			return ((::RPG::GameCore::BattleLineupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA_DEEPCOPY_OFFSET))(this);
		}

		::GNEBNHLMFAF* AddNewBattleExtraPropertyAddition(::RPG::GameCore::BattleExtraPropertyAddition a1, ::RPG::GameCore::FixPoint a2, ::Il2CppArray<::System::UInt32>* a3)
		{
			return ((::GNEBNHLMFAF*(*)(::PVOID, ::RPG::GameCore::BattleExtraPropertyAddition, ::RPG::GameCore::FixPoint, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA_ADDNEWBATTLEEXTRAPROPERTYADDITION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FillBattleExtraPropertyAddition(::DLIBCMNBLGF* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::DLIBCMNBLGF*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA_FILLBATTLEEXTRAPROPERTYADDITION_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* GetTemplateVariables()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA_GETTEMPLATEVARIABLES_OFFSET))(this);
		}

		::System::Void FillAliveLightTeam(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA_FILLALIVELIGHTTEAM_OFFSET))(this, a1);
		}

		::System::Boolean LineupContainsAvatarID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA_LINEUPCONTAINSAVATARID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::MazeBuffData*>* GetAllMazeBuffDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::MazeBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA_GETALLMAZEBUFFDATALIST_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetTotalExtraAvatarRank()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA_GETTOTALEXTRAAVATARRANK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::MazeBuffData*>* GetAllAvatarGlobalMazeBuffDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::MazeBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA_GETALLAVATARGLOBALMAZEBUFFDATALIST_OFFSET))(this);
		}

		::System::Void _FillTemplateVars(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA__FILLTEMPLATEVARS_OFFSET))(this, a1, a2);
		}

		::System::String* get_LevelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA_GET_LEVELPATH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::GNEBNHLMFAF*>* get_BattleExtraPropertyAdditionList()
		{
			return ((::System::Collections::Generic::List_1<::GNEBNHLMFAF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA_GET_BATTLEEXTRAPROPERTYADDITIONLIST_OFFSET))(this);
		}

		::System::Void set_BattleExtraPropertyAdditionList(::System::Collections::Generic::List_1<::GNEBNHLMFAF*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::GNEBNHLMFAF*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA_SET_BATTLEEXTRAPROPERTYADDITIONLIST_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelGraphConfig* get_LevelConfig()
		{
			return ((::RPG::GameCore::LevelGraphConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA_GET_LEVELCONFIG_OFFSET))(this);
		}

	};
}
