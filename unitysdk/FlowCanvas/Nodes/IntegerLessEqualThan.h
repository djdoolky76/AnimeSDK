#pragma once
#include "unitysdk/unitysdk.h"

#define FLOWCANVAS_NODES_INTEGERLESSEQUALTHAN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EDC40E0)
#define FLOWCANVAS_NODES_INTEGERLESSEQUALTHAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDC40F0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int IntegerLessEqualThan_TypeDefinitionIndex = 29971;

	class IntegerLessEqualThan
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INTEGERLESSEQUALTHAN__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INTEGERLESSEQUALTHAN_INVOKE_OFFSET))(this, a, b);
		}
	};
}
