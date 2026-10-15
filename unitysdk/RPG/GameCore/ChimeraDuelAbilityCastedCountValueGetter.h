#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelValueGetter.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelAbilityCastedCountValueGetter; }

#define RPG_GAMECORE_CHIMERADUELABILITYCASTEDCOUNTVALUEGETTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D56CE50)
#define RPG_GAMECORE_CHIMERADUELABILITYCASTEDCOUNTVALUEGETTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D56CE60)
#define RPG_GAMECORE_CHIMERADUELABILITYCASTEDCOUNTVALUEGETTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D56CDC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelAbilityCastedCountValueGetter_TypeDefinitionIndex = 15997;

	class ChimeraDuelAbilityCastedCountValueGetter : public ::RPG::GameCore::BaseChimeraDuelValueGetter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELABILITYCASTEDCOUNTVALUEGETTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelAbilityCastedCountValueGetter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelAbilityCastedCountValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELABILITYCASTEDCOUNTVALUEGETTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelAbilityCastedCountValueGetter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelAbilityCastedCountValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELABILITYCASTEDCOUNTVALUEGETTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
