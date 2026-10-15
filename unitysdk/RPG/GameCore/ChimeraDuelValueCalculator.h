#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelValueGetter.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelValueCalculateType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }
namespace RPG::GameCore { class ChimeraDuelValueCalculator; }

#define RPG_GAMECORE_CHIMERADUELVALUECALCULATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57E3C0)
#define RPG_GAMECORE_CHIMERADUELVALUECALCULATOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D57E3D0)
#define RPG_GAMECORE_CHIMERADUELVALUECALCULATOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D57E370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelValueCalculator_TypeDefinitionIndex = 15995;

	class ChimeraDuelValueCalculator : public ::RPG::GameCore::BaseChimeraDuelValueGetter
	{
	public:
		::RPG::GameCore::ChimeraDuelValueCalculateType CalculateType; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelValueGetter*>* ValueGetters; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELVALUECALCULATOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelValueCalculator* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelValueCalculator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELVALUECALCULATOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelValueCalculator* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelValueCalculator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELVALUECALCULATOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
