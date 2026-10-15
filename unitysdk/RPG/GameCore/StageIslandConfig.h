#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IslandStateConfig; }
namespace RPG::GameCore { class StageIslandConfig; }
namespace RPG::GameCore { class StageIslandHLODConfig; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_STAGEISLANDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB0FD00)
#define RPG_GAMECORE_STAGEISLANDCONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB0FD10)
#define RPG_GAMECORE_STAGEISLANDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB0FAE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageIslandConfig_TypeDefinitionIndex = 19131;

	class StageIslandConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 IslandID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* HLODPath; // 0x18
		::Il2CppArray<::RPG::GameCore::StageIslandHLODConfig*>* HLODConfigs; // 0x20
		::Il2CppArray<::RPG::GameCore::IslandStateConfig*>* StateConfig; // 0x28
		::Il2CppArray<::RPG::GameCore::StageIslandConfig*>* ChildIslandList; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEISLANDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageIslandConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageIslandConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEISLANDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageIslandConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageIslandConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEISLANDCONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
