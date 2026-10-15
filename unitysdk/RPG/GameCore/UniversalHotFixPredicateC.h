#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UniversalHotFixBasePredicate.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UniversalHotFixPredicateC; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC46E60)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC49D40)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC47DA0)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC46E70)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC49D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UniversalHotFixPredicateC_TypeDefinitionIndex = 23363;

	class UniversalHotFixPredicateC : public ::RPG::GameCore::UniversalHotFixBasePredicate
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UniversalHotFixPredicateC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UniversalHotFixPredicateC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UniversalHotFixPredicateC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UniversalHotFixPredicateC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixPredicateC* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixPredicateC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixPredicateC* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixPredicateC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEC_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
