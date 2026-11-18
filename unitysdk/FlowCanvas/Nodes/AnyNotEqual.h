#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class Object; }

#define FLOWCANVAS_NODES_ANYNOTEQUAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D5CFF70)
#define FLOWCANVAS_NODES_ANYNOTEQUAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CFF90)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int AnyNotEqual_TypeDefinitionIndex = 30561;

	class AnyNotEqual
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ANYNOTEQUAL__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Object* a, ::System::Object* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ANYNOTEQUAL_INVOKE_OFFSET))(this, a, b);
		}
	};
}
