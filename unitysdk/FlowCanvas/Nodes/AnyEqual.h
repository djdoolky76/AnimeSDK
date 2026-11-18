#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class Object; }

#define FLOWCANVAS_NODES_ANYEQUAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EF5EA80)
#define FLOWCANVAS_NODES_ANYEQUAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF5EA90)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int AnyEqual_TypeDefinitionIndex = 30174;

	class AnyEqual
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ANYEQUAL__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Object* a, ::System::Object* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ANYEQUAL_INVOKE_OFFSET))(this, a, b);
		}
	};
}
