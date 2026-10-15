#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueGambleFuncShowUI; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ROGUEGAMBLEFUNCSHOWUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9CC730)
#define RPG_GAMECORE_ROGUEGAMBLEFUNCSHOWUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9CC740)
#define RPG_GAMECORE_ROGUEGAMBLEFUNCSHOWUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9CC700)

namespace RPG::GameCore
{
	class RogueGambleFuncShowUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnterUI; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnGacha; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExitUI; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEGAMBLEFUNCSHOWUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueGambleFuncShowUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueGambleFuncShowUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEGAMBLEFUNCSHOWUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueGambleFuncShowUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueGambleFuncShowUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEGAMBLEFUNCSHOWUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
