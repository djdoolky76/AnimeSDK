#pragma once
#include "unitysdk/unitysdk.h"

#define FLOWCANVAS_NODES_FLOATGREATERTHAN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EDC40B0)
#define FLOWCANVAS_NODES_FLOATGREATERTHAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDC40C0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int FloatGreaterThan_TypeDefinitionIndex = 30682;

	class FloatGreaterThan
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATGREATERTHAN__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Single a, ::System::Single b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATGREATERTHAN_INVOKE_OFFSET))(this, a, b);
		}
	};
}
