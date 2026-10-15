#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MatchThreePropType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class MatchThree1v1AIPropPriorityConfig; }

#define RPG_GAMECORE_MATCH3_MATCHTHREE1V1AIPROPPRIORITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D821980)
#define RPG_GAMECORE_MATCH3_MATCHTHREE1V1AIPROPPRIORITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D821850)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int MatchThree1v1AIPropPriorityConfig_TypeDefinitionIndex = 24950;

	class MatchThree1v1AIPropPriorityConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::MatchThreePropType PropType; // 0x10
		::System::UInt32 Priority; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCHTHREE1V1AIPROPPRIORITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::MatchThree1v1AIPropPriorityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::MatchThree1v1AIPropPriorityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCHTHREE1V1AIPROPPRIORITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
