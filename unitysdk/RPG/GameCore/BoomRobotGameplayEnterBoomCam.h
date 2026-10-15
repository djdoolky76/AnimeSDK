#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BoomRobotGameplayEnterBoomCam; }

#define RPG_GAMECORE_BOOMROBOTGAMEPLAYENTERBOOMCAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D449010)
#define RPG_GAMECORE_BOOMROBOTGAMEPLAYENTERBOOMCAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D449020)
#define RPG_GAMECORE_BOOMROBOTGAMEPLAYENTERBOOMCAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D448FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoomRobotGameplayEnterBoomCam_TypeDefinitionIndex = 21190;

	class BoomRobotGameplayEnterBoomCam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsEnter; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYENTERBOOMCAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BoomRobotGameplayEnterBoomCam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BoomRobotGameplayEnterBoomCam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYENTERBOOMCAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BoomRobotGameplayEnterBoomCam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BoomRobotGameplayEnterBoomCam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYENTERBOOMCAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
