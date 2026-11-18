#pragma once
#include "unitysdk/unitysdk.h"

#define FLOWCANVAS_NODES_INTEGERGREATEREQUALTHAN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E9C7970)
#define FLOWCANVAS_NODES_INTEGERGREATEREQUALTHAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C7980)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int IntegerGreaterEqualThan_TypeDefinitionIndex = 29676;

	class IntegerGreaterEqualThan
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INTEGERGREATEREQUALTHAN__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INTEGERGREATEREQUALTHAN_INVOKE_OFFSET))(this, a, b);
		}
	};
}
