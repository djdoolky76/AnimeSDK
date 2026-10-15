#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRacePauseGame; }

#define RPG_GAMECORE_CAKERACEPAUSEGAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D551CB0)
#define RPG_GAMECORE_CAKERACEPAUSEGAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D551CC0)
#define RPG_GAMECORE_CAKERACEPAUSEGAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D551C80)

namespace RPG::GameCore
{
	class CakeRacePauseGame : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsPause; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEPAUSEGAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRacePauseGame* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRacePauseGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEPAUSEGAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRacePauseGame* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRacePauseGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEPAUSEGAME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
