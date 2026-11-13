#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BoomRobotGameplayTriggerStart; }

#define RPG_GAMECORE_BOOMROBOTGAMEPLAYTRIGGERSTART_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF4FC20)
#define RPG_GAMECORE_BOOMROBOTGAMEPLAYTRIGGERSTART_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DF4FC30)
#define RPG_GAMECORE_BOOMROBOTGAMEPLAYTRIGGERSTART_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DF4FB60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoomRobotGameplayTriggerStart_TypeDefinitionIndex = 21532;

	class BoomRobotGameplayTriggerStart : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYTRIGGERSTART_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BoomRobotGameplayTriggerStart* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BoomRobotGameplayTriggerStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYTRIGGERSTART_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BoomRobotGameplayTriggerStart* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BoomRobotGameplayTriggerStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYTRIGGERSTART_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
