#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKLOS_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1E9D5060)
#define NODECANVAS_TASKS_CONDITIONS_CHECKLOS_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1E9D50C0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKLOS_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1E9D5580)
#define NODECANVAS_TASKS_CONDITIONS_CHECKLOS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9D58E0)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckLOS_TypeDefinitionIndex = 29473;

	class CheckLOS
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::LayerMask>* layerMask; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* LOSTarget; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* saveDistanceAs; // 0x70
		::UnityEngine::RaycastHit hit; // 0x78
		::UnityEngine::Vector3 offset; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKLOS__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKLOS_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKLOS_ONCHECK_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKLOS_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}
	};
}
