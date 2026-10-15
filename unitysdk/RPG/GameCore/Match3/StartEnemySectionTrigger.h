#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3TriggerBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class StartEnemySectionTrigger; }

#define RPG_GAMECORE_MATCH3_STARTENEMYSECTIONTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D821360)
#define RPG_GAMECORE_MATCH3_STARTENEMYSECTIONTRIGGER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D821370)
#define RPG_GAMECORE_MATCH3_STARTENEMYSECTIONTRIGGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D823F40)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int StartEnemySectionTrigger_TypeDefinitionIndex = 24880;

	class StartEnemySectionTrigger : public ::RPG::GameCore::Match3::Match3TriggerBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STARTENEMYSECTIONTRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::StartEnemySectionTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::StartEnemySectionTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STARTENEMYSECTIONTRIGGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::StartEnemySectionTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::StartEnemySectionTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STARTENEMYSECTIONTRIGGER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
