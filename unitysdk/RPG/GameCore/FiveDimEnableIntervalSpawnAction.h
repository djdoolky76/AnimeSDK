#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimEnableIntervalSpawnAction; }

#define RPG_GAMECORE_FIVEDIMENABLEINTERVALSPAWNACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C7A70)
#define RPG_GAMECORE_FIVEDIMENABLEINTERVALSPAWNACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E8C7A80)
#define RPG_GAMECORE_FIVEDIMENABLEINTERVALSPAWNACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E8C7A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEnableIntervalSpawnAction_TypeDefinitionIndex = 18833;

	class FiveDimEnableIntervalSpawnAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Enabled; // 0x10
		::System::Boolean OverrideInterval; // 0x11
		::System::Byte _padding0[0x2];
		::System::Single SpawnInterval; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENABLEINTERVALSPAWNACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEnableIntervalSpawnAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEnableIntervalSpawnAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENABLEINTERVALSPAWNACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEnableIntervalSpawnAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEnableIntervalSpawnAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENABLEINTERVALSPAWNACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
