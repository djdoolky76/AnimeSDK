#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElationActivityActionBarAbilityChange; }

#define RPG_GAMECORE_ELATIONACTIVITYACTIONBARABILITYCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6040C0)
#define RPG_GAMECORE_ELATIONACTIVITYACTIONBARABILITYCHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6040D0)
#define RPG_GAMECORE_ELATIONACTIVITYACTIONBARABILITYCHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D604080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElationActivityActionBarAbilityChange_TypeDefinitionIndex = 22830;

	class ElationActivityActionBarAbilityChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 CharacterID; // 0x18
		::System::UInt32 BattleEventID; // 0x1C
		::System::Boolean IsAdd; // 0x20
		::System::Boolean AddToFirst; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONACTIVITYACTIONBARABILITYCHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElationActivityActionBarAbilityChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElationActivityActionBarAbilityChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONACTIVITYACTIONBARABILITYCHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElationActivityActionBarAbilityChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElationActivityActionBarAbilityChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONACTIVITYACTIONBARABILITYCHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
