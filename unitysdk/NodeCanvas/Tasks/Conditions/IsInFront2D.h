#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_TASKS_CONDITIONS_ISINFRONT2D_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EB8D650)
#define NODECANVAS_TASKS_CONDITIONS_ISINFRONT2D_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1EB8D690)
#define NODECANVAS_TASKS_CONDITIONS_ISINFRONT2D_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1EB8D970)
#define NODECANVAS_TASKS_CONDITIONS_ISINFRONT2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB8DC50)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int IsInFront2D_TypeDefinitionIndex = 29359;

	class IsInFront2D
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* viewAngle; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* checkTarget; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_ISINFRONT2D__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_ISINFRONT2D_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_ISINFRONT2D_ONCHECK_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_ISINFRONT2D_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}
	};
}
