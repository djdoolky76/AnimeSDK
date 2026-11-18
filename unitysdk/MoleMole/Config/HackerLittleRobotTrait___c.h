#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Collision; }

#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTTRAIT___C__BUILDENTITYCOMPONENT_B__11_0_OFFSET UNITYSDK_OFFSET(0x1278F430)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTTRAIT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1278F3E0)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTTRAIT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1278F420)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HackerLittleRobotTrait___c_TypeDefinitionIndex = 73170;

	class HackerLittleRobotTrait___c : public ::System::Object
	{
	public:
		static ::System::Action_2<::MoleMole::EntityHandle, ::UnityEngine::Collision*>** StaticGet___9__11_0()
		{
			return (::System::Action_2<::MoleMole::EntityHandle, ::UnityEngine::Collision*>**)Il2CppClass::FromTypeDefinitionIndex(HackerLittleRobotTrait___c_TypeDefinitionIndex)->GetStaticField(0x38870);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HackerLittleRobotTrait___c_TypeDefinitionIndex)->GetStaticField(0x38878);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTTRAIT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTTRAIT___C__CTOR_OFFSET))(this);
		}

		::System::Void _BuildEntityComponent_b__11_0(::MoleMole::EntityHandle entityHandle, ::UnityEngine::Collision* collision)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTTRAIT___C__BUILDENTITYCOMPONENT_B__11_0_OFFSET))(this, entityHandle, collision);
		}
	};
}
