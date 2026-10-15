#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByNot; }
namespace RPG::GameCore { class PredicateConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYNOT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D52D170)
#define RPG_GAMECORE_BYNOT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D52D330)
#define RPG_GAMECORE_BYNOT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D52D300)
#define RPG_GAMECORE_BYNOT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D52D180)
#define RPG_GAMECORE_BYNOT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D52D140)

namespace RPG::GameCore
{
	class ByNot : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYNOT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByNot* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByNot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYNOT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByNot* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByNot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYNOT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByNot* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByNot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYNOT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByNot* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByNot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYNOT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
