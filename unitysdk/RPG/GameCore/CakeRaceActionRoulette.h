#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceActionRoulette; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CAKERACEACTIONROULETTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D51C310)
#define RPG_GAMECORE_CAKERACEACTIONROULETTE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D51C320)
#define RPG_GAMECORE_CAKERACEACTIONROULETTE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D51C2C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionRoulette_TypeDefinitionIndex = 18347;

	class CakeRaceActionRoulette : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* RouletteCountWeightMap; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONROULETTE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionRoulette* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionRoulette*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONROULETTE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionRoulette* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionRoulette*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONROULETTE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
