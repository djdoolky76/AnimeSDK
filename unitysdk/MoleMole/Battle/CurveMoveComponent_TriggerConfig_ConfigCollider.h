#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class ColliderEventDispatcher; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_BATTLE_CURVEMOVECOMPONENT_TRIGGERCONFIG_CONFIGCOLLIDER_NOKHDIBCBPN_OFFSET UNITYSDK_OFFSET(0x11A37100)
#define MOLEMOLE_BATTLE_CURVEMOVECOMPONENT_TRIGGERCONFIG_CONFIGCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x11A370F0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int CurveMoveComponent_TriggerConfig_ConfigCollider_TypeDefinitionIndex = 65613;

	class CurveMoveComponent_TriggerConfig_ConfigCollider : public ::System::Object
	{
	public:
		::MoleMole::Battle::ColliderEventDispatcher* colliderEventDispatcher; // 0x10
		::Il2CppArray<::MoleMole::Battle::ColliderEventDispatcher*>* mutilColliderEventDispatchers; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVECOMPONENT_TRIGGERCONFIG_CONFIGCOLLIDER__CTOR_OFFSET))(this);
		}

		::System::Void NOKHDIBCBPN(::System::Action_1<::MoleMole::Battle::ColliderEventDispatcher*>* EJGDHCIBCJH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Battle::ColliderEventDispatcher*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVECOMPONENT_TRIGGERCONFIG_CONFIGCOLLIDER_NOKHDIBCBPN_OFFSET))(this, EJGDHCIBCJH);
		}
	};
}
