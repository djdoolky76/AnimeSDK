#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3TriggerBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class AfterStepTrigger; }

#define RPG_GAMECORE_MATCH3_AFTERSTEPTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D81C7E0)
#define RPG_GAMECORE_MATCH3_AFTERSTEPTRIGGER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D81C7F0)
#define RPG_GAMECORE_MATCH3_AFTERSTEPTRIGGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D81C750)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int AfterStepTrigger_TypeDefinitionIndex = 24875;

	class AfterStepTrigger : public ::RPG::GameCore::Match3::Match3TriggerBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_AFTERSTEPTRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::AfterStepTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::AfterStepTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_AFTERSTEPTRIGGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::AfterStepTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::AfterStepTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_AFTERSTEPTRIGGER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
