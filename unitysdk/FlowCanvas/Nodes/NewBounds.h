#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLOWCANVAS_NODES_NEWBOUNDS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E954DD0)
#define FLOWCANVAS_NODES_NEWBOUNDS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E954E10)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int NewBounds_TypeDefinitionIndex = 29743;

	class NewBounds
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_NEWBOUNDS__CTOR_OFFSET))(this);
		}

		::UnityEngine::Bounds Invoke(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 size)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_NEWBOUNDS_INVOKE_OFFSET))(this, center, size);
		}
	};
}
