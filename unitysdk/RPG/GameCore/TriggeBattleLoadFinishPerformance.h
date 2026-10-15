#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggeBattleLoadFinishPerformance; }

#define RPG_GAMECORE_TRIGGEBATTLELOADFINISHPERFORMANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC41E70)
#define RPG_GAMECORE_TRIGGEBATTLELOADFINISHPERFORMANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC41E80)
#define RPG_GAMECORE_TRIGGEBATTLELOADFINISHPERFORMANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC41E30)

namespace RPG::GameCore
{
	class TriggeBattleLoadFinishPerformance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean WaitFinish; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single ScreenTransferFadeOutTime; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEBATTLELOADFINISHPERFORMANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggeBattleLoadFinishPerformance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggeBattleLoadFinishPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEBATTLELOADFINISHPERFORMANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggeBattleLoadFinishPerformance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggeBattleLoadFinishPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEBATTLELOADFINISHPERFORMANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
