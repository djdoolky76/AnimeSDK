#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3TriggerBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class BeforeInputTrigger; }

#define RPG_GAMECORE_MATCH3_BEFOREINPUTTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84A6B0)
#define RPG_GAMECORE_MATCH3_BEFOREINPUTTRIGGER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D84A6C0)
#define RPG_GAMECORE_MATCH3_BEFOREINPUTTRIGGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D84A620)

namespace RPG::GameCore::Match3
{
	class BeforeInputTrigger : public ::RPG::GameCore::Match3::Match3TriggerBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BEFOREINPUTTRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::BeforeInputTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::BeforeInputTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BEFOREINPUTTRIGGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::BeforeInputTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::BeforeInputTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BEFOREINPUTTRIGGER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
