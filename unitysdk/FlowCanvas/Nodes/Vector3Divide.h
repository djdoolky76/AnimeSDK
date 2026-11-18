#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLOWCANVAS_NODES_VECTOR3DIVIDE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EBADEB0)
#define FLOWCANVAS_NODES_VECTOR3DIVIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBADEE0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Vector3Divide_TypeDefinitionIndex = 30398;

	class Vector3Divide
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_VECTOR3DIVIDE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Invoke(::UnityEngine::Vector3 a, ::System::Single b)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_VECTOR3DIVIDE_INVOKE_OFFSET))(this, a, b);
		}
	};
}
