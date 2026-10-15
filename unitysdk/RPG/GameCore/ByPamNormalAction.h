#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByPamNormalAction; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPAMNORMALACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D52EAB0)
#define RPG_GAMECORE_BYPAMNORMALACTION_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D52EC30)
#define RPG_GAMECORE_BYPAMNORMALACTION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D52EC00)
#define RPG_GAMECORE_BYPAMNORMALACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D52EAC0)
#define RPG_GAMECORE_BYPAMNORMALACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D52EA80)

namespace RPG::GameCore
{
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
