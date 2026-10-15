#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceActionTransportToFrontRandomCat; }

#define RPG_GAMECORE_CAKERACEACTIONTRANSPORTTOFRONTRANDOMCAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D51CB60)
#define RPG_GAMECORE_CAKERACEACTIONTRANSPORTTOFRONTRANDOMCAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D51CB70)
#define RPG_GAMECORE_CAKERACEACTIONTRANSPORTTOFRONTRANDOMCAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D51CAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionTransportToFrontRandomCat_TypeDefinitionIndex = 18342;

	class CakeRaceActionTransportToFrontRandomCat : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONTRANSPORTTOFRONTRANDOMCAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionTransportToFrontRandomCat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionTransportToFrontRandomCat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONTRANSPORTTOFRONTRANDOMCAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionTransportToFrontRandomCat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionTransportToFrontRandomCat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONTRANSPORTTOFRONTRANDOMCAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
