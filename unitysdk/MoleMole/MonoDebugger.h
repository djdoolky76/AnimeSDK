#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONODEBUGGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x12473240)
#define MOLEMOLE_MONODEBUGGER_GETHIERARCHYPATH_1_OFFSET UNITYSDK_OFFSET(0x12473720)
#define MOLEMOLE_MONODEBUGGER_GETHIERARCHYPATH_OFFSET UNITYSDK_OFFSET(0x124735B0)
#define MOLEMOLE_MONODEBUGGER_KEKLAGDIEHP_OFFSET UNITYSDK_OFFSET(0x124732E0)
#define MOLEMOLE_MONODEBUGGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12473510)
#define MOLEMOLE_MONODEBUGGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12473470)
#define MOLEMOLE_MONODEBUGGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12473330)
#define MOLEMOLE_MONODEBUGGER_START_OFFSET UNITYSDK_OFFSET(0x124733D0)
#define MOLEMOLE_MONODEBUGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x12473B00)

namespace MoleMole
{
	inline static constexpr unsigned int MonoDebugger_TypeDefinitionIndex = 55052;

	class MonoDebugger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODEBUGGER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODEBUGGER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODEBUGGER_ONENABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODEBUGGER_START_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODEBUGGER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODEBUGGER_ONDESTROY_OFFSET))(this);
		}

		static ::System::String* GetHierarchyPath(::UnityEngine::GameObject* IMLLDOHDCNC)
		{
			return ((::System::String*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODEBUGGER_GETHIERARCHYPATH_OFFSET))(IMLLDOHDCNC);
		}

		static ::System::String* GetHierarchyPath_1(::UnityEngine::Transform* IMLLDOHDCNC)
		{
			return ((::System::String*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODEBUGGER_GETHIERARCHYPATH_1_OFFSET))(IMLLDOHDCNC);
		}

		::System::Void KEKLAGDIEHP(::System::String* INLHHOMFLAB)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODEBUGGER_KEKLAGDIEHP_OFFSET))(this, INLHHOMFLAB);
		}
	};
}
