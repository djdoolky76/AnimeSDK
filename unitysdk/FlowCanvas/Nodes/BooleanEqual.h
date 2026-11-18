#pragma once
#include "unitysdk/unitysdk.h"

#define FLOWCANVAS_NODES_BOOLEANEQUAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EF13530)
#define FLOWCANVAS_NODES_BOOLEANEQUAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF13540)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int BooleanEqual_TypeDefinitionIndex = 30135;

	class BooleanEqual
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_BOOLEANEQUAL__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Boolean a, ::System::Boolean b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_BOOLEANEQUAL_INVOKE_OFFSET))(this, a, b);
		}
	};
}
