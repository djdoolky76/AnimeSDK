#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetTargetAlwaysAutoBattle; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTARGETALWAYSAUTOBATTLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC4300)
#define RPG_GAMECORE_SETTARGETALWAYSAUTOBATTLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC4310)
#define RPG_GAMECORE_SETTARGETALWAYSAUTOBATTLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC42D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTargetAlwaysAutoBattle_TypeDefinitionIndex = 22480;

	class SetTargetAlwaysAutoBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean AutoBattle; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETALWAYSAUTOBATTLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTargetAlwaysAutoBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTargetAlwaysAutoBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETALWAYSAUTOBATTLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTargetAlwaysAutoBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTargetAlwaysAutoBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETALWAYSAUTOBATTLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
