#pragma once
#include "unitysdk/unitysdk.h"

#define FLOWCANVAS_NODES_INTEGERMULTIPLY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D5D09D0)
#define FLOWCANVAS_NODES_INTEGERMULTIPLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D09E0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int IntegerMultiply_TypeDefinitionIndex = 29815;

	class IntegerMultiply
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INTEGERMULTIPLY__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INTEGERMULTIPLY_INVOKE_OFFSET))(this, a, b);
		}
	};
}
