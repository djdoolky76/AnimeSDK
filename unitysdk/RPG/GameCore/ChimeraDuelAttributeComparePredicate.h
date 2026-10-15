#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelPredicateBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelAttributeComparePredicate; }
namespace RPG::GameCore { class ChimeraDuelEntityPredicateBase; }

#define RPG_GAMECORE_CHIMERADUELATTRIBUTECOMPAREPREDICATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D56D4F0)
#define RPG_GAMECORE_CHIMERADUELATTRIBUTECOMPAREPREDICATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D56D500)
#define RPG_GAMECORE_CHIMERADUELATTRIBUTECOMPAREPREDICATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D56D4A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelAttributeComparePredicate_TypeDefinitionIndex = 15976;

	class ChimeraDuelAttributeComparePredicate : public ::RPG::GameCore::ChimeraDuelPredicateBase
	{
	public:
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* Target; // 0x10
		::RPG::GameCore::ChimeraDuelEntityPredicateBase* ComparePredicate; // 0x18
		::System::Boolean AllMatch; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELATTRIBUTECOMPAREPREDICATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelAttributeComparePredicate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelAttributeComparePredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELATTRIBUTECOMPAREPREDICATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelAttributeComparePredicate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelAttributeComparePredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELATTRIBUTECOMPAREPREDICATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
