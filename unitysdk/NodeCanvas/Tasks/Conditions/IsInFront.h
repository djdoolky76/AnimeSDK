#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_TASKS_CONDITIONS_ISINFRONT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1F304030)
#define NODECANVAS_TASKS_CONDITIONS_ISINFRONT_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1F304070)
#define NODECANVAS_TASKS_CONDITIONS_ISINFRONT_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1F3043B0)
#define NODECANVAS_TASKS_CONDITIONS_ISINFRONT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3046A0)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int IsInFront_TypeDefinitionIndex = 30282;

	class IsInFront
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* viewAngle; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* checkTarget; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_ISINFRONT__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_ISINFRONT_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_ISINFRONT_ONCHECK_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_ISINFRONT_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}
	};
}
