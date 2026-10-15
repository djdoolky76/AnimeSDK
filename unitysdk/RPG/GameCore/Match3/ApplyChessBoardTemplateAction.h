#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class ApplyChessBoardTemplateAction; }
namespace System { class String; }

#define RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84A290)
#define RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D84A2A0)
#define RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D84A240)

namespace RPG::GameCore::Match3
{
	class ApplyChessBoardTemplateAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::String* TemplatePath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::ApplyChessBoardTemplateAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::ApplyChessBoardTemplateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::ApplyChessBoardTemplateAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::ApplyChessBoardTemplateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_APPLYCHESSBOARDTEMPLATEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
