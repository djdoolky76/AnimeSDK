#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_BATTLE_PINBALLABILITYCONFIGDATA_GET_HASANYABILITYID_OFFSET UNITYSDK_OFFSET(0x6D5220)
#define MOLEMOLE_BATTLE_PINBALLABILITYCONFIGDATA_OHJFDIAEGIC_OFFSET UNITYSDK_OFFSET(0x1218DEA0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int PinballAbilityConfigData_TypeDefinitionIndex = 87836;

	struct alignas(8) PinballAbilityConfigData
	{
		::Il2CppArray<::System::Int32>* DefaultAbilityIds; // 0x10
		::Il2CppArray<::System::Int32>* EnterAbilityIds; // 0x18
		::Il2CppArray<::System::Int32>* ExitAbilityIds; // 0x20
		::Il2CppArray<::System::Int32>* InitialLaunchAbilityIds; // 0x28
		::Il2CppArray<::System::Int32>* PaddleEjectAbilityIds; // 0x30
		::Il2CppArray<::System::Int32>* DashAbilityIds; // 0x38
		::System::Int32 SkillAbilityId; // 0x40

		::System::Boolean get_HasAnyAbilityId()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PINBALLABILITYCONFIGDATA_GET_HASANYABILITYID_OFFSET))(this);
		}

		static ::System::Boolean OHJFDIAEGIC(::Il2CppArray<::System::Int32>* IGAPKICBCPD)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PINBALLABILITYCONFIGDATA_OHJFDIAEGIC_OFFSET))(IGAPKICBCPD);
		}
	};
}
