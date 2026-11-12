#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsInfiniteBattle; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISINFINITEBATTLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E72C290)
#define RPG_GAMECORE_BYISINFINITEBATTLE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E72C410)
#define RPG_GAMECORE_BYISINFINITEBATTLE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E72C3E0)
#define RPG_GAMECORE_BYISINFINITEBATTLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E72C2A0)
#define RPG_GAMECORE_BYISINFINITEBATTLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E72C260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsInfiniteBattle_TypeDefinitionIndex = 23492;

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
