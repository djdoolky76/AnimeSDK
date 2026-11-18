#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define FLOWCANVAS_NODES_NEWVECTOR2_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EDC4490)
#define FLOWCANVAS_NODES_NEWVECTOR2__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDC44A0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int NewVector2_TypeDefinitionIndex = 30822;

	class NewVector2
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_NEWVECTOR2__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 Invoke(::System::Single x, ::System::Single y)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_NEWVECTOR2_INVOKE_OFFSET))(this, x, y);
		}
	};
}
