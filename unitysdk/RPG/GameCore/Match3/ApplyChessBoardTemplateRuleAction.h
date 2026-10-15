#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class ApplyChessBoardTemplateRuleAction; }
namespace System { class String; }

#define RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATERULEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84A3E0)
#define RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATERULEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D84A3F0)
#define RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATERULEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D84A390)

namespace RPG::GameCore::Match3
{
	class ApplyChessBoardTemplateRuleAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::String* Mode; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATERULEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::ApplyChessBoardTemplateRuleAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::ApplyChessBoardTemplateRuleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATERULEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::ApplyChessBoardTemplateRuleAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::ApplyChessBoardTemplateRuleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATERULEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
