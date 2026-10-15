#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PauseGame; }

#define RPG_GAMECORE_PAUSEGAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8F2BF0)
#define RPG_GAMECORE_PAUSEGAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8F2C00)
#define RPG_GAMECORE_PAUSEGAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8F2BC0)

namespace RPG::GameCore
{
	class PauseGame : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Pause; // 0x18
		::System::Boolean ExcludeVoice; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSEGAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PauseGame* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PauseGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSEGAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PauseGame* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PauseGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSEGAME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
