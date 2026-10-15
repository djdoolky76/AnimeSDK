#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByPamCurrentActionAnyDirection; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPAMCURRENTACTIONANYDIRECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D52E130)
#define RPG_GAMECORE_BYPAMCURRENTACTIONANYDIRECTION_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D52E2B0)
#define RPG_GAMECORE_BYPAMCURRENTACTIONANYDIRECTION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D52E280)
#define RPG_GAMECORE_BYPAMCURRENTACTIONANYDIRECTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D52E140)
#define RPG_GAMECORE_BYPAMCURRENTACTIONANYDIRECTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D52E100)

namespace RPG::GameCore
{
	class ByPamCurrentActionAnyDirection : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMCURRENTACTIONANYDIRECTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByPamCurrentActionAnyDirection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByPamCurrentActionAnyDirection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMCURRENTACTIONANYDIRECTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByPamCurrentActionAnyDirection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByPamCurrentActionAnyDirection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMCURRENTACTIONANYDIRECTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamCurrentActionAnyDirection* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamCurrentActionAnyDirection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMCURRENTACTIONANYDIRECTION_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamCurrentActionAnyDirection* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamCurrentActionAnyDirection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMCURRENTACTIONANYDIRECTION_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
