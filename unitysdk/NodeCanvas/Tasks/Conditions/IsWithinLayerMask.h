#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }

#define NODECANVAS_TASKS_CONDITIONS_ISWITHINLAYERMASK_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1EDD0CC0)
#define NODECANVAS_TASKS_CONDITIONS_ISWITHINLAYERMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDD0D50)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int IsWithinLayerMask_TypeDefinitionIndex = 29694;

	class IsWithinLayerMask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::LayerMask>* targetLayers; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_ISWITHINLAYERMASK__CTOR_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_ISWITHINLAYERMASK_ONCHECK_OFFSET))(this);
		}
	};
}
