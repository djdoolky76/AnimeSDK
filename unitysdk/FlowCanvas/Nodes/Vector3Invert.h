#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLOWCANVAS_NODES_VECTOR3INVERT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EF17860)
#define FLOWCANVAS_NODES_VECTOR3INVERT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF17890)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Vector3Invert_TypeDefinitionIndex = 29564;

	class Vector3Invert
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_VECTOR3INVERT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Invoke(::UnityEngine::Vector3 value)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_VECTOR3INVERT_INVOKE_OFFSET))(this, value);
		}
	};
}
