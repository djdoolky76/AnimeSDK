#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ResetTreasureChallenge; }

#define RPG_GAMECORE_RESETTREASURECHALLENGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D95E9E0)
#define RPG_GAMECORE_RESETTREASURECHALLENGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D95E9F0)
#define RPG_GAMECORE_RESETTREASURECHALLENGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D95E920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetTreasureChallenge_TypeDefinitionIndex = 20472;

	class ResetTreasureChallenge : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETTREASURECHALLENGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetTreasureChallenge* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetTreasureChallenge*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETTREASURECHALLENGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetTreasureChallenge* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetTreasureChallenge*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETTREASURECHALLENGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
