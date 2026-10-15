#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsInfiniteBattle; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISINFINITEBATTLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D51B510)
#define RPG_GAMECORE_BYISINFINITEBATTLE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D51B690)
#define RPG_GAMECORE_BYISINFINITEBATTLE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D51B660)
#define RPG_GAMECORE_BYISINFINITEBATTLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D51B520)
#define RPG_GAMECORE_BYISINFINITEBATTLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D51B4E0)

namespace RPG::GameCore
{
	class ByIsInfiniteBattle : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINFINITEBATTLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsInfiniteBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsInfiniteBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINFINITEBATTLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsInfiniteBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsInfiniteBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINFINITEBATTLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInfiniteBattle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInfiniteBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINFINITEBATTLE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInfiniteBattle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInfiniteBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINFINITEBATTLE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
