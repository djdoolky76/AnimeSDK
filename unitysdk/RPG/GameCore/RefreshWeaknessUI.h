#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RefreshWeaknessUI; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REFRESHWEAKNESSUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D976F30)
#define RPG_GAMECORE_REFRESHWEAKNESSUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D976F40)
#define RPG_GAMECORE_REFRESHWEAKNESSUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D976F00)

namespace RPG::GameCore
{
	class RefreshWeaknessUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHWEAKNESSUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RefreshWeaknessUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RefreshWeaknessUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHWEAKNESSUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RefreshWeaknessUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RefreshWeaknessUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHWEAKNESSUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
