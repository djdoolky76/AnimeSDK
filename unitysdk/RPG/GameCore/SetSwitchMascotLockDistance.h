#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetSwitchMascotLockDistance; }

#define RPG_GAMECORE_SETSWITCHMASCOTLOCKDISTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC3FC0)
#define RPG_GAMECORE_SETSWITCHMASCOTLOCKDISTANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC3FD0)
#define RPG_GAMECORE_SETSWITCHMASCOTLOCKDISTANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC3F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetSwitchMascotLockDistance_TypeDefinitionIndex = 22002;

	class SetSwitchMascotLockDistance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsPushValue; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicFloat* LockDistance; // 0x20
		::RPG::GameCore::DynamicFloat* LockHeightLimit; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSWITCHMASCOTLOCKDISTANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetSwitchMascotLockDistance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetSwitchMascotLockDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSWITCHMASCOTLOCKDISTANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetSwitchMascotLockDistance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetSwitchMascotLockDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSWITCHMASCOTLOCKDISTANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
