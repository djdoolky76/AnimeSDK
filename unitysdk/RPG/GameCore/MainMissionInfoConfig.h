#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AssistWayPointPack; }
namespace RPG::GameCore { class MainMissionInfoConfig; }
namespace RPG::GameCore { class MissionCustomValue; }
namespace RPG::GameCore { class MissionCustomValueGroupConfigPack; }
namespace RPG::GameCore { class SubMissionInfoConfig; }
namespace RPG::GameCore { class SubMissionRelationConfig; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_MAINMISSIONINFOCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7CC800)
#define RPG_GAMECORE_MAINMISSIONINFOCONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D7CC810)
#define RPG_GAMECORE_MAINMISSIONINFOCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7CC2E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MainMissionInfoConfig_TypeDefinitionIndex = 19021;

	class MainMissionInfoConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MainMissionID; // 0x10
		::System::UInt32 PrologueSubMssionID; // 0x14
		::Il2CppArray<::System::UInt32>* StartSubMissionList; // 0x18
		::Il2CppArray<::System::UInt32>* FinishSubMissionList; // 0x20
		::Il2CppArray<::RPG::GameCore::SubMissionInfoConfig*>* SubMissionList; // 0x28
		::Il2CppArray<::RPG::GameCore::MissionCustomValue*>* MissionCustomValueList; // 0x30
		::Il2CppArray<::System::String*>* CustomValueSaveIndexList; // 0x38
		::Il2CppArray<::RPG::GameCore::SubMissionRelationConfig*>* SubMissionRelationList; // 0x40
		::System::Boolean IsAllowInOnlineRoom; // 0x48
		::System::Boolean IsShow; // 0x49
		::System::Boolean UseAssistWayPoint; // 0x4A
		::System::Boolean IsLegacyAssistWayPoint; // 0x4B
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::AssistWayPointPack*>* AssistWayPointPackList; // 0x50
		::RPG::GameCore::MissionCustomValueGroupConfigPack* MissionCustomValueGroupConfigPack; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONINFOCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MainMissionInfoConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MainMissionInfoConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONINFOCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MainMissionInfoConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MainMissionInfoConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONINFOCONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
