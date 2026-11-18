#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ContactPoint2D.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Collision2D; }
namespace UnityEngine { class GameObject; }

#define FLOWCANVAS_NODES_EXTRACTCOLLISION2D_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EDC3E70)
#define FLOWCANVAS_NODES_EXTRACTCOLLISION2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDC3FC0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ExtractCollision2D_TypeDefinitionIndex = 29371;

	class ExtractCollision2D
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTCOLLISION2D__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::UnityEngine::Collision2D* collision, ::Il2CppArray<::UnityEngine::ContactPoint2D>*& contacts, ::UnityEngine::ContactPoint2D& firstContact, ::UnityEngine::GameObject*& gameObject, ::UnityEngine::Vector2& velocity)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision2D*, ::Il2CppArray<::UnityEngine::ContactPoint2D>*&, ::UnityEngine::ContactPoint2D&, ::UnityEngine::GameObject*&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTCOLLISION2D_INVOKE_OFFSET))(this, collision, contacts, firstContact, gameObject, velocity);
		}
	};
}
