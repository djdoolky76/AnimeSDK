#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class MatchThree1v1AIConfig; }
namespace RPG::GameCore::Match3 { class MatchThree1v1AILevelConfig; }
namespace RPG::GameCore::Match3 { class MatchThree1v1AIPropPriorityConfig; }
namespace RPG::GameCore::Match3 { class MatchThree1v1AIScoreAspectConfig; }

#define RPG_GAMECORE_MATCH3_MATCHTHREE1V1AICONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84EDC0)
#define RPG_GAMECORE_MATCH3_MATCHTHREE1V1AICONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D84E010)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int MatchThree1v1AIConfig_TypeDefinitionIndex = 24951;

	class MatchThree1v1AIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::Match3::MatchThree1v1AILevelConfig*>* LevelConfigs; // 0x10
		::Il2CppArray<::RPG::GameCore::Match3::MatchThree1v1AIScoreAspectConfig*>* AspectConfigs; // 0x18
		::Il2CppArray<::RPG::GameCore::Match3::MatchThree1v1AIPropPriorityConfig*>* PropPriorityConfigs; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCHTHREE1V1AICONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::MatchThree1v1AIConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::MatchThree1v1AIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCHTHREE1V1AICONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
