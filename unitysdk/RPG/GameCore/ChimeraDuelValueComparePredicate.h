#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelCompareType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelPredicateBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }
namespace RPG::GameCore { class ChimeraDuelValueComparePredicate; }

#define RPG_GAMECORE_CHIMERADUELVALUECOMPAREPREDICATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A6E00)
#define RPG_GAMECORE_CHIMERADUELVALUECOMPAREPREDICATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A6E10)
#define RPG_GAMECORE_CHIMERADUELVALUECOMPAREPREDICATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5ABFB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelValueComparePredicate_TypeDefinitionIndex = 15975;

	class ChimeraDuelValueComparePredicate : public ::RPG::GameCore::ChimeraDuelPredicateBase
	{
	public:
		::RPG::GameCore::BaseChimeraDuelValueGetter* Left; // 0x10
		::RPG::GameCore::BaseChimeraDuelValueGetter* Right; // 0x18
		::RPG::GameCore::ChimeraDuelCompareType CompareType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELVALUECOMPAREPREDICATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelValueComparePredicate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelValueComparePredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELVALUECOMPAREPREDICATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelValueComparePredicate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelValueComparePredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELVALUECOMPAREPREDICATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
