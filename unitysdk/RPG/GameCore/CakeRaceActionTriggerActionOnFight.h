#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
#include "unitysdk/RPG/GameCore/CakeRaceFightStateType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceActionBase; }
namespace RPG::GameCore { class CakeRaceActionTriggerActionOnFight; }

#define RPG_GAMECORE_CAKERACEACTIONTRIGGERACTIONONFIGHT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54A670)
#define RPG_GAMECORE_CAKERACEACTIONTRIGGERACTIONONFIGHT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D54A680)
#define RPG_GAMECORE_CAKERACEACTIONTRIGGERACTIONONFIGHT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D54A640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionTriggerActionOnFight_TypeDefinitionIndex = 18358;

	class CakeRaceActionTriggerActionOnFight : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::RPG::GameCore::CakeRaceFightStateType TriggerType; // 0x10
		::System::UInt32 ShowDurationMs; // 0x14
		::System::Boolean OnlyExecuteOnce; // 0x18
		::System::Boolean ExecuteBeforeBeginDelay; // 0x19
		::System::Byte _padding0[0x6];
		::RPG::GameCore::CakeRaceActionBase* Action; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONTRIGGERACTIONONFIGHT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionTriggerActionOnFight* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionTriggerActionOnFight*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONTRIGGERACTIONONFIGHT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionTriggerActionOnFight* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionTriggerActionOnFight*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONTRIGGERACTIONONFIGHT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
