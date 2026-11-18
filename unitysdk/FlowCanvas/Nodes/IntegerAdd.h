#pragma once
#include "unitysdk/unitysdk.h"

#define FLOWCANVAS_NODES_INTEGERADD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E9C7940)
#define FLOWCANVAS_NODES_INTEGERADD__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C7950)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int IntegerAdd_TypeDefinitionIndex = 30746;

	class IntegerAdd
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INTEGERADD__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INTEGERADD_INVOKE_OFFSET))(this, a, b);
		}
	};
}
