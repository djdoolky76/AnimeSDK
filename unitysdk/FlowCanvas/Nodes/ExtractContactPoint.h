#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ContactPoint.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Collider; }

#define FLOWCANVAS_NODES_EXTRACTCONTACTPOINT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EB7CA60)
#define FLOWCANVAS_NODES_EXTRACTCONTACTPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB7CAB0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ExtractContactPoint_TypeDefinitionIndex = 29854;

	class ExtractContactPoint
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTCONTACTPOINT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::UnityEngine::ContactPoint contactPoint, ::UnityEngine::Vector3& normal, ::UnityEngine::Vector3& point, ::UnityEngine::Collider*& colliderA, ::UnityEngine::Collider*& colliderB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ContactPoint, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Collider*&, ::UnityEngine::Collider*&))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTCONTACTPOINT_INVOKE_OFFSET))(this, contactPoint, normal, point, colliderA, colliderB);
		}
	};
}
