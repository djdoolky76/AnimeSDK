#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/RaycastHit2D.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_TASKS_CONDITIONS_CANSEETARGET2D_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EB8B2D0)
#define NODECANVAS_TASKS_CONDITIONS_CANSEETARGET2D_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1EB8B310)
#define NODECANVAS_TASKS_CONDITIONS_CANSEETARGET2D_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1EB8B9A0)
#define NODECANVAS_TASKS_CONDITIONS_CANSEETARGET2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB8C370)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CanSeeTarget2D_TypeDefinitionIndex = 30400;

	class CanSeeTarget2D
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* target; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* maxDistance; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* viewAngle; // 0x70
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* awarnessDistance; // 0x78
		::UnityEngine::RaycastHit2D hit; // 0x80
		::UnityEngine::Vector2 offset; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CANSEETARGET2D__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CANSEETARGET2D_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CANSEETARGET2D_ONCHECK_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CANSEETARGET2D_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}
	};
}
