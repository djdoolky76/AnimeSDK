#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }
namespace RPG::GameCore { class ChimeraDuelProbilityComparePredicate; }

#define RPG_GAMECORE_CHIMERADUELPROBILITYCOMPAREPREDICATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D579F70)
#define RPG_GAMECORE_CHIMERADUELPROBILITYCOMPAREPREDICATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D579E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelProbilityComparePredicate_TypeDefinitionIndex = 15978;

	class ChimeraDuelProbilityComparePredicate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::BaseChimeraDuelValueGetter* ValueGetter; // 0x10
		::System::Boolean IsStationaryProbabilities; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPROBILITYCOMPAREPREDICATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelProbilityComparePredicate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelProbilityComparePredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPROBILITYCOMPAREPREDICATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
