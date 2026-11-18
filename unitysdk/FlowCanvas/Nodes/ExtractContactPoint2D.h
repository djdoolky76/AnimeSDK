#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ContactPoint2D.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Collider2D; }

#define FLOWCANVAS_NODES_EXTRACTCONTACTPOINT2D_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E9C6B80)
#define FLOWCANVAS_NODES_EXTRACTCONTACTPOINT2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C6CD0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ExtractContactPoint2D_TypeDefinitionIndex = 29821;

	class ExtractContactPoint2D
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTCONTACTPOINT2D__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::UnityEngine::ContactPoint2D contactPoint, ::UnityEngine::Vector2& normal, ::UnityEngine::Vector2& point, ::UnityEngine::Collider2D*& colliderA, ::UnityEngine::Collider2D*& colliderB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ContactPoint2D, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Collider2D*&, ::UnityEngine::Collider2D*&))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTCONTACTPOINT2D_INVOKE_OFFSET))(this, contactPoint, normal, point, colliderA, colliderB);
		}
	};
}
