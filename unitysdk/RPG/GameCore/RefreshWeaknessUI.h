#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RefreshWeaknessUI; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REFRESHWEAKNESSUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9495C0)
#define RPG_GAMECORE_REFRESHWEAKNESSUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9495D0)
#define RPG_GAMECORE_REFRESHWEAKNESSUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D949590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RefreshWeaknessUI_TypeDefinitionIndex = 22635;

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
