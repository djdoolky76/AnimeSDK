#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByPamNormalAction; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPAMNORMALACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1E223E00)
#define RPG_GAMECORE_BYPAMNORMALACTION_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E223F80)
#define RPG_GAMECORE_BYPAMNORMALACTION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E223F50)
#define RPG_GAMECORE_BYPAMNORMALACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E223E10)
#define RPG_GAMECORE_BYPAMNORMALACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E223DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPamNormalAction_TypeDefinitionIndex = 20347;

	class ByPamNormalAction : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMNORMALACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByPamNormalAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByPamNormalAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMNORMALACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByPamNormalAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByPamNormalAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMNORMALACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamNormalAction* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamNormalAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMNORMALACTION_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamNormalAction* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamNormalAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMNORMALACTION_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
