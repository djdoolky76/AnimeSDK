#pragma once
#include "unitysdk/unitysdk.h"

#define FLOWCANVAS_NODES_FLOATNOTEQUAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F2F85B0)
#define FLOWCANVAS_NODES_FLOATNOTEQUAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2F85C0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int FloatNotEqual_TypeDefinitionIndex = 29197;

	class FloatNotEqual
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATNOTEQUAL__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Single a, ::System::Single b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATNOTEQUAL_INVOKE_OFFSET))(this, a, b);
		}
	};
}
