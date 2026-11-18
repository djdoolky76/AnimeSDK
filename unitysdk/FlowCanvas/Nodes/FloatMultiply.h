#pragma once
#include "unitysdk/unitysdk.h"

#define FLOWCANVAS_NODES_FLOATMULTIPLY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EF4DB70)
#define FLOWCANVAS_NODES_FLOATMULTIPLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF4DB80)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int FloatMultiply_TypeDefinitionIndex = 30056;

	class FloatMultiply
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATMULTIPLY__CTOR_OFFSET))(this);
		}

		::System::Single Invoke(::System::Single a, ::System::Single b)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATMULTIPLY_INVOKE_OFFSET))(this, a, b);
		}
	};
}
