#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UniversalHotFixBasePredicate.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UniversalHotFixPredicateB; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC744F0)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEB_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC76FD0)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEB_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC75620)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC74500)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC76FA0)

namespace RPG::GameCore
{
	class UniversalHotFixPredicateB : public ::RPG::GameCore::UniversalHotFixBasePredicate
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UniversalHotFixPredicateB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UniversalHotFixPredicateB*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UniversalHotFixPredicateB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UniversalHotFixPredicateB*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixPredicateB* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixPredicateB*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEB_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixPredicateB* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixPredicateB*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEB_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
