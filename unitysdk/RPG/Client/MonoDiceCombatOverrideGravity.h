#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MONODICECOMBATOVERRIDEGRAVITY_CTOR_OFFSET UNITYSDK_OFFSET(0xD793340)
#define RPG_CLIENT_MONODICECOMBATOVERRIDEGRAVITY_KEJLCGCFDDL_OFFSET UNITYSDK_OFFSET(0xD792DF0)
#define RPG_CLIENT_MONODICECOMBATOVERRIDEGRAVITY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD793270)
#define RPG_CLIENT_MONODICECOMBATOVERRIDEGRAVITY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD7930F0)
#define RPG_CLIENT_MONODICECOMBATOVERRIDEGRAVITY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD792FE0)
#define RPG_CLIENT_MONODICECOMBATOVERRIDEGRAVITY_OVERRIDEGRAVITY_OFFSET UNITYSDK_OFFSET(0xD792F00)
#define RPG_CLIENT_MONODICECOMBATOVERRIDEGRAVITY_RESETGRAVITY_OFFSET UNITYSDK_OFFSET(0xD7931C0)

namespace RPG::Client
{
	class MonoDiceCombatOverrideGravity : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean ChangeGravity; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single OverrideGravityValue; // 0x1C
		::System::Single NEPEEENELPG; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATOVERRIDEGRAVITY_CTOR_OFFSET))(this);
		}

		::System::Void KEJLCGCFDDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATOVERRIDEGRAVITY_KEJLCGCFDDL_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATOVERRIDEGRAVITY_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATOVERRIDEGRAVITY_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATOVERRIDEGRAVITY_ONDESTROY_OFFSET))(this);
		}

		::System::Void OverrideGravity(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATOVERRIDEGRAVITY_OVERRIDEGRAVITY_OFFSET))(this, a1);
		}

		::System::Void ResetGravity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATOVERRIDEGRAVITY_RESETGRAVITY_OFFSET))(this);
		}

	};
}
