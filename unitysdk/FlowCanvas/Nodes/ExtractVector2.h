#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define FLOWCANVAS_NODES_EXTRACTVECTOR2_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EA56B90)
#define FLOWCANVAS_NODES_EXTRACTVECTOR2__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA56BA0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ExtractVector2_TypeDefinitionIndex = 30692;

	class ExtractVector2
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTVECTOR2__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::UnityEngine::Vector2 vector, ::System::Single& x, ::System::Single& y)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTVECTOR2_INVOKE_OFFSET))(this, vector, x, y);
		}
	};
}
