#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLOWCANVAS_NODES_DELTATIMEDVECTOR3_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EF4DAF0)
#define FLOWCANVAS_NODES_DELTATIMEDVECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF4DB50)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int DeltaTimedVector3_TypeDefinitionIndex = 30651;

	class DeltaTimedVector3
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DELTATIMEDVECTOR3__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Invoke(::UnityEngine::Vector3 value, ::System::Single multiplier)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DELTATIMEDVECTOR3_INVOKE_OFFSET))(this, value, multiplier);
		}
	};
}
