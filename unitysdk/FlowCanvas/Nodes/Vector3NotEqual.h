#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLOWCANVAS_NODES_VECTOR3NOTEQUAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D476130)
#define FLOWCANVAS_NODES_VECTOR3NOTEQUAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D476180)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Vector3NotEqual_TypeDefinitionIndex = 30907;

	class Vector3NotEqual
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_VECTOR3NOTEQUAL__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_VECTOR3NOTEQUAL_INVOKE_OFFSET))(this, a, b);
		}
	};
}
