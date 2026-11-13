#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UniversalHotFixBasePredicate.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UniversalHotFixPredicateA; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED324D0)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEA_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1ED34BB0)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEA_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1ED337F0)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ED324E0)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ED34B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UniversalHotFixPredicateA_TypeDefinitionIndex = 23803;

	class UniversalHotFixPredicateA : public ::RPG::GameCore::UniversalHotFixBasePredicate
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UniversalHotFixPredicateA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UniversalHotFixPredicateA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UniversalHotFixPredicateA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UniversalHotFixPredicateA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixPredicateA* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixPredicateA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEA_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixPredicateA* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixPredicateA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEA_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
