#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3TriggerBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class StartGameTrigger; }

#define RPG_GAMECORE_MATCH3_STARTGAMETRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D824060)
#define RPG_GAMECORE_MATCH3_STARTGAMETRIGGER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D824070)
#define RPG_GAMECORE_MATCH3_STARTGAMETRIGGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D823FD0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int StartGameTrigger_TypeDefinitionIndex = 24876;

	class StartGameTrigger : public ::RPG::GameCore::Match3::Match3TriggerBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STARTGAMETRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::StartGameTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::StartGameTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STARTGAMETRIGGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::StartGameTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::StartGameTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STARTGAMETRIGGER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
