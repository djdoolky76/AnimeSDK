#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3TriggerBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class StartRoundTrigger; }

#define RPG_GAMECORE_MATCH3_STARTROUNDTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D824160)
#define RPG_GAMECORE_MATCH3_STARTROUNDTRIGGER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D824170)
#define RPG_GAMECORE_MATCH3_STARTROUNDTRIGGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8240D0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int StartRoundTrigger_TypeDefinitionIndex = 24877;

	class StartRoundTrigger : public ::RPG::GameCore::Match3::Match3TriggerBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STARTROUNDTRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::StartRoundTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::StartRoundTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STARTROUNDTRIGGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::StartRoundTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::StartRoundTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STARTROUNDTRIGGER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
