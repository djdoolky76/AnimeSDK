#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PingPongBoardCmptConfig; }

#define RPG_GAMECORE_PINGPONGBOARDCMPTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9152C0)
#define RPG_GAMECORE_PINGPONGBOARDCMPTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9152D0)
#define RPG_GAMECORE_PINGPONGBOARDCMPTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D915230)

namespace RPG::GameCore
{
	class PingPongBoardCmptConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGBOARDCMPTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongBoardCmptConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongBoardCmptConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGBOARDCMPTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongBoardCmptConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongBoardCmptConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGBOARDCMPTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
