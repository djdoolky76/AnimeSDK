#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3TriggerBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class AfterInputTrigger; }

#define RPG_GAMECORE_MATCH3_AFTERINPUTTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D81C6D0)
#define RPG_GAMECORE_MATCH3_AFTERINPUTTRIGGER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D81C6E0)
#define RPG_GAMECORE_MATCH3_AFTERINPUTTRIGGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D81C640)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int AfterInputTrigger_TypeDefinitionIndex = 24874;

	class AfterInputTrigger : public ::RPG::GameCore::Match3::Match3TriggerBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_AFTERINPUTTRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::AfterInputTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::AfterInputTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_AFTERINPUTTRIGGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::AfterInputTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::AfterInputTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_AFTERINPUTTRIGGER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
