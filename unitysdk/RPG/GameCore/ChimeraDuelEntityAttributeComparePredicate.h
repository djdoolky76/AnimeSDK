#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelAttributeSelectorType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelCompareType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelEntityPredicateBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }
namespace RPG::GameCore { class ChimeraDuelEntityAttributeComparePredicate; }

#define RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTECOMPAREPREDICATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D59F910)
#define RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTECOMPAREPREDICATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D59F920)
#define RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTECOMPAREPREDICATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D59F8C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEntityAttributeComparePredicate_TypeDefinitionIndex = 15926;

	class ChimeraDuelEntityAttributeComparePredicate : public ::RPG::GameCore::ChimeraDuelEntityPredicateBase
	{
	public:
		::RPG::GameCore::ChimeraDuelAttributeSelectorType Left; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::BaseChimeraDuelValueGetter* Right; // 0x18
		::RPG::GameCore::ChimeraDuelCompareType CompareType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTECOMPAREPREDICATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelEntityAttributeComparePredicate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelEntityAttributeComparePredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTECOMPAREPREDICATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelEntityAttributeComparePredicate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelEntityAttributeComparePredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTECOMPAREPREDICATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
