#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowHeartDialUI; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SHOWHEARTDIALUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE08E0)
#define RPG_GAMECORE_SHOWHEARTDIALUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE08F0)
#define RPG_GAMECORE_SHOWHEARTDIALUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE08B0)

namespace RPG::GameCore
{
	class ShowHeartDialUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHEARTDIALUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowHeartDialUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowHeartDialUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHEARTDIALUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowHeartDialUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowHeartDialUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHEARTDIALUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
