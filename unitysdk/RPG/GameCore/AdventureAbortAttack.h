#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureAbortAttack; }

#define RPG_GAMECORE_ADVENTUREABORTATTACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8EA300)
#define RPG_GAMECORE_ADVENTUREABORTATTACK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E8EA310)
#define RPG_GAMECORE_ADVENTUREABORTATTACK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E8EA240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureAbortAttack_TypeDefinitionIndex = 20535;

	class AdventureAbortAttack : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABORTATTACK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureAbortAttack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureAbortAttack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABORTATTACK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureAbortAttack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureAbortAttack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABORTATTACK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
