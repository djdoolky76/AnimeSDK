#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_TASKS_CONDITIONS_CANSEETARGET_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EF58A00)
#define NODECANVAS_TASKS_CONDITIONS_CANSEETARGET_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1EF58A40)
#define NODECANVAS_TASKS_CONDITIONS_CANSEETARGET_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1EF591D0)
#define NODECANVAS_TASKS_CONDITIONS_CANSEETARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF59B30)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CanSeeTarget_TypeDefinitionIndex = 30298;

	class CanSeeTarget
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* viewAngle; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* target; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* maxDistance; // 0x70
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* awarnessDistance; // 0x78
		::UnityEngine::RaycastHit hit; // 0x80
		::UnityEngine::Vector3 offset; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CANSEETARGET__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CANSEETARGET_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CANSEETARGET_ONCHECK_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CANSEETARGET_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}
	};
}
