#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowPhaseUI; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SHOWPHASEUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE26B0)
#define RPG_GAMECORE_SHOWPHASEUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE26C0)
#define RPG_GAMECORE_SHOWPHASEUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE2680)

namespace RPG::GameCore
{
	class ShowPhaseUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsShow; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPHASEUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowPhaseUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowPhaseUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPHASEUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowPhaseUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowPhaseUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPHASEUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
