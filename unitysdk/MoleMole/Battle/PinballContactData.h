#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMFAMPOOKKC.h"
#include "unitysdk/MoleMole/Battle/PinballAbilityReference.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int PinballContactData_TypeDefinitionIndex = 47792;

	struct alignas(8) PinballContactData
	{
		::MoleMole::Battle::PinballAbilityReference EnterAbility; // 0x10
		::MoleMole::Battle::PinballAbilityReference ExitAbility; // 0x20
		::Il2CppArray<::MoleMole::Battle::PinballAbilityReference>* ExtraEnterAbilities; // 0x30
		::Il2CppArray<::MoleMole::Battle::PinballAbilityReference>* ExtraExitAbilities; // 0x38
		::MoleMole::Battle::PinballAbilityReference InitialLaunchAbility; // 0x40
		::MoleMole::Battle::PinballAbilityReference PaddleEjectAbility; // 0x50
		::Il2CppArray<::MoleMole::Battle::PinballAbilityReference>* ExtraPaddleEjectAbilities; // 0x60
		::FMFAMPOOKKC CollisionFlags; // 0x68
	};
}
