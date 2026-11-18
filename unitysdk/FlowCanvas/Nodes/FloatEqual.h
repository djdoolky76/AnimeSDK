#pragma once
#include "unitysdk/unitysdk.h"

#define FLOWCANVAS_NODES_FLOATEQUAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E3F2600)
#define FLOWCANVAS_NODES_FLOATEQUAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F2610)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int FloatEqual_TypeDefinitionIndex = 30371;

	class FloatEqual
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATEQUAL__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Single a, ::System::Single b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATEQUAL_INVOKE_OFFSET))(this, a, b);
		}
	};
}
