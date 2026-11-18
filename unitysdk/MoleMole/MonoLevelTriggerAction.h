#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoLevelTriggerAction_ActionSettings.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOLEVELTRIGGERACTION_ADPHACKJAOE_OFFSET UNITYSDK_OFFSET(0x139F6DF0)
#define MOLEMOLE_MONOLEVELTRIGGERACTION_KHLHEDNPCOD_OFFSET UNITYSDK_OFFSET(0x139F69A0)
#define MOLEMOLE_MONOLEVELTRIGGERACTION_NMPCNANMPJH_OFFSET UNITYSDK_OFFSET(0x139F6840)
#define MOLEMOLE_MONOLEVELTRIGGERACTION_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x139F6A80)
#define MOLEMOLE_MONOLEVELTRIGGERACTION_ONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0x139F6AF0)
#define MOLEMOLE_MONOLEVELTRIGGERACTION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x139F6B60)
#define MOLEMOLE_MONOLEVELTRIGGERACTION_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x139F67D0)
#define MOLEMOLE_MONOLEVELTRIGGERACTION_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x139F6930)
#define MOLEMOLE_MONOLEVELTRIGGERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x139F6BA0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLevelTriggerAction_TypeDefinitionIndex = 53625;

	class MonoLevelTriggerAction : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::LayerMask m_LayerMask; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* m_WithTag; // 0x20
		::System::String* m_WithoutTag; // 0x28
		::System::Int32 m_SkipFirst; // 0x30
		::System::Boolean m_Repeating; // 0x34
		::System::Byte _padding1[0x3];
		::MoleMole::MonoLevelTriggerAction_ActionSettings m_OnObjectEnter; // 0x38
		::MoleMole::MonoLevelTriggerAction_ActionSettings m_OnObjectExit; // 0x60
		::System::Collections::Generic::HashSet_1<::UnityEngine::GameObject*>* EEFKPABEIFF; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELTRIGGERACTION__CTOR_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* LIBPKNHDIGP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELTRIGGERACTION_ONTRIGGERENTER_OFFSET))(this, LIBPKNHDIGP);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* LIBPKNHDIGP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELTRIGGERACTION_ONTRIGGEREXIT_OFFSET))(this, LIBPKNHDIGP);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* LIBPKNHDIGP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELTRIGGERACTION_ONCOLLISIONENTER_OFFSET))(this, LIBPKNHDIGP);
		}

		::System::Void OnCollisionExit(::UnityEngine::Collision* LIBPKNHDIGP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELTRIGGERACTION_ONCOLLISIONEXIT_OFFSET))(this, LIBPKNHDIGP);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELTRIGGERACTION_ONENABLE_OFFSET))(this);
		}

		::System::Boolean ADPHACKJAOE(::UnityEngine::GameObject* LIBPKNHDIGP)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELTRIGGERACTION_ADPHACKJAOE_OFFSET))(this, LIBPKNHDIGP);
		}

		::System::Void NMPCNANMPJH(::UnityEngine::GameObject* LIBPKNHDIGP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELTRIGGERACTION_NMPCNANMPJH_OFFSET))(this, LIBPKNHDIGP);
		}

		::System::Void KHLHEDNPCOD(::UnityEngine::GameObject* LIBPKNHDIGP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELTRIGGERACTION_KHLHEDNPCOD_OFFSET))(this, LIBPKNHDIGP);
		}
	};
}
