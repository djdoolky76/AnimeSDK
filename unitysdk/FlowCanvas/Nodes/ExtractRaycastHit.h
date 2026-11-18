#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }

#define FLOWCANVAS_NODES_EXTRACTRAYCASTHIT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D5D06B0)
#define FLOWCANVAS_NODES_EXTRACTRAYCASTHIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D0980)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ExtractRaycastHit_TypeDefinitionIndex = 29209;

	class ExtractRaycastHit
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTRAYCASTHIT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::UnityEngine::RaycastHit hit, ::UnityEngine::GameObject*& gameObject, ::System::Single& distance, ::UnityEngine::Vector3& normal, ::UnityEngine::Vector3& point)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit, ::UnityEngine::GameObject*&, ::System::Single&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTRAYCASTHIT_INVOKE_OFFSET))(this, hit, gameObject, distance, normal, point);
		}
	};
}
