#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsInCharmAction; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISINCHARMACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E9D80)
#define RPG_GAMECORE_BYISINCHARMACTION_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4E9F00)
#define RPG_GAMECORE_BYISINCHARMACTION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4E9ED0)
#define RPG_GAMECORE_BYISINCHARMACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4E9D90)
#define RPG_GAMECORE_BYISINCHARMACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4E9D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsInCharmAction_TypeDefinitionIndex = 23494;

	class ByIsInCharmAction : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCHARMACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsInCharmAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsInCharmAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCHARMACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsInCharmAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsInCharmAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCHARMACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInCharmAction* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInCharmAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCHARMACTION_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInCharmAction* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInCharmAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCHARMACTION_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
