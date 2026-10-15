#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class MatchThree1v1AIPriorityRetainConfig; }

#define RPG_GAMECORE_MATCH3_MATCHTHREE1V1AIPRIORITYRETAINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8216E0)
#define RPG_GAMECORE_MATCH3_MATCHTHREE1V1AIPRIORITYRETAINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D821590)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int MatchThree1v1AIPriorityRetainConfig_TypeDefinitionIndex = 24946;

	class MatchThree1v1AIPriorityRetainConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 ScoreBehind; // 0x10
		::System::UInt32 Percentage; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCHTHREE1V1AIPRIORITYRETAINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::MatchThree1v1AIPriorityRetainConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::MatchThree1v1AIPriorityRetainConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCHTHREE1V1AIPRIORITYRETAINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
