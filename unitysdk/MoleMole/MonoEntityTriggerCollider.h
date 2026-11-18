#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Collider; }

#define MOLEMOLE_MONOENTITYTRIGGERCOLLIDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x12474C40)
#define MOLEMOLE_MONOENTITYTRIGGERCOLLIDER_FGBLCLAHEFE_OFFSET UNITYSDK_OFFSET(0x12474ED0)
#define MOLEMOLE_MONOENTITYTRIGGERCOLLIDER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x12474E80)
#define MOLEMOLE_MONOENTITYTRIGGERCOLLIDER_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x12474C30)
#define MOLEMOLE_MONOENTITYTRIGGERCOLLIDER_SET_ENTITY_OFFSET UNITYSDK_OFFSET(0x12474C20)
#define MOLEMOLE_MONOENTITYTRIGGERCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x12475300)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEntityTriggerCollider_TypeDefinitionIndex = 43383;

	class MonoEntityTriggerCollider : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Collider* triggerCollider; // 0x18
		::MoleMole::Battle::Entity* LEOKEOFNDLH; // 0x20
		::UnityEngine::RaycastHit LCLPFNMJIJK; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYTRIGGERCOLLIDER__CTOR_OFFSET))(this);
		}

		::System::Void set_Entity(::MoleMole::Battle::Entity* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYTRIGGERCOLLIDER_SET_ENTITY_OFFSET))(this, EGEGIMGMJHN);
		}

		::MoleMole::Battle::Entity* get_Entity()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYTRIGGERCOLLIDER_GET_ENTITY_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYTRIGGERCOLLIDER_AWAKE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYTRIGGERCOLLIDER_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void FGBLCLAHEFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYTRIGGERCOLLIDER_FGBLCLAHEFE_OFFSET))(this);
		}
	};
}
