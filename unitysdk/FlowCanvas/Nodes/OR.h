#pragma once
#include "unitysdk/unitysdk.h"

#define FLOWCANVAS_NODES_OR_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F2F9310)
#define FLOWCANVAS_NODES_OR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2F9320)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int OR_TypeDefinitionIndex = 30125;

	class OR
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_OR__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Boolean a, ::System::Boolean b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_OR_INVOKE_OFFSET))(this, a, b);
		}
	};
}
