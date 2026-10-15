#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BoomRobotGameplayBoomHit; }

#define RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMHIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D476320)
#define RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMHIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D476330)
#define RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMHIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D476260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoomRobotGameplayBoomHit_TypeDefinitionIndex = 21807;

	class BoomRobotGameplayBoomHit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMHIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BoomRobotGameplayBoomHit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BoomRobotGameplayBoomHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMHIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BoomRobotGameplayBoomHit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BoomRobotGameplayBoomHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYBOOMHIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
