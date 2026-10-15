#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MissionCustomValueRewardConfig; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_MISSIONCUSTOMVALUEREWARDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D858510)
#define RPG_GAMECORE_MISSIONCUSTOMVALUEREWARDCONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D858520)
#define RPG_GAMECORE_MISSIONCUSTOMVALUEREWARDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D858390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionCustomValueRewardConfig_TypeDefinitionIndex = 18991;

	class MissionCustomValueRewardConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Index; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* Name; // 0x18
		::System::UInt32 Value; // 0x20
		::System::UInt32 RewardID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCUSTOMVALUEREWARDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MissionCustomValueRewardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MissionCustomValueRewardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCUSTOMVALUEREWARDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionCustomValueRewardConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionCustomValueRewardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCUSTOMVALUEREWARDCONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
