#pragma once
#include "unitysdk/unitysdk.h"

#define FLOWCANVAS_NODES_INTEGERDIVIDE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EF4E000)
#define FLOWCANVAS_NODES_INTEGERDIVIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF4E010)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int IntegerDivide_TypeDefinitionIndex = 30605;

	class IntegerDivide
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INTEGERDIVIDE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INTEGERDIVIDE_INVOKE_OFFSET))(this, a, b);
		}
	};
}
