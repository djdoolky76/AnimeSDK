#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3TriggerBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class StartSectionTrigger; }

#define RPG_GAMECORE_MATCH3_STARTSECTIONTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D851C50)
#define RPG_GAMECORE_MATCH3_STARTSECTIONTRIGGER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D851C60)
#define RPG_GAMECORE_MATCH3_STARTSECTIONTRIGGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D851BC0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int StartSectionTrigger_TypeDefinitionIndex = 24879;

	class StartSectionTrigger : public ::RPG::GameCore::Match3::Match3TriggerBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STARTSECTIONTRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::StartSectionTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::StartSectionTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STARTSECTIONTRIGGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::StartSectionTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::StartSectionTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STARTSECTIONTRIGGER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
