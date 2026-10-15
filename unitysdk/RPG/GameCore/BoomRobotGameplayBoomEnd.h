#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BoomRobotGameplayBoomEnd; }

#define RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMEND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D476190)
#define RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMEND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4761A0)
#define RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMEND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4760D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoomRobotGameplayBoomEnd_TypeDefinitionIndex = 20230;

	class BoomRobotGameplayBoomEnd : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMEND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BoomRobotGameplayBoomEnd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BoomRobotGameplayBoomEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMEND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BoomRobotGameplayBoomEnd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BoomRobotGameplayBoomEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMEND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
