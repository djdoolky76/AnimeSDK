#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelPredicateBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelAreSelectionsEqualPredicate; }

#define RPG_GAMECORE_CHIMERADUELARESELECTIONSEQUALPREDICATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D59ACF0)
#define RPG_GAMECORE_CHIMERADUELARESELECTIONSEQUALPREDICATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D59AD00)
#define RPG_GAMECORE_CHIMERADUELARESELECTIONSEQUALPREDICATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D59ACA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelAreSelectionsEqualPredicate_TypeDefinitionIndex = 15977;

	class ChimeraDuelAreSelectionsEqualPredicate : public ::RPG::GameCore::ChimeraDuelPredicateBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* Selections; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELARESELECTIONSEQUALPREDICATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelAreSelectionsEqualPredicate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelAreSelectionsEqualPredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELARESELECTIONSEQUALPREDICATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelAreSelectionsEqualPredicate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelAreSelectionsEqualPredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELARESELECTIONSEQUALPREDICATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
