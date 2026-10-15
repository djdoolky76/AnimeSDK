#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarblePauseGame; }

#define RPG_GAMECORE_MARBLEPAUSEGAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D843210)
#define RPG_GAMECORE_MARBLEPAUSEGAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D843220)
#define RPG_GAMECORE_MARBLEPAUSEGAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8431E0)

namespace RPG::GameCore
{
	class MarblePauseGame : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsPause; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPAUSEGAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarblePauseGame* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarblePauseGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPAUSEGAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarblePauseGame* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarblePauseGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPAUSEGAME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
