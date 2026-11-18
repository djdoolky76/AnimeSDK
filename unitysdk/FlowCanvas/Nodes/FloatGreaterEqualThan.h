#pragma once
#include "unitysdk/unitysdk.h"

#define FLOWCANVAS_NODES_FLOATGREATEREQUALTHAN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EB7D160)
#define FLOWCANVAS_NODES_FLOATGREATEREQUALTHAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB7D170)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int FloatGreaterEqualThan_TypeDefinitionIndex = 30202;

	class FloatGreaterEqualThan
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATGREATEREQUALTHAN__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Single a, ::System::Single b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATGREATEREQUALTHAN_INVOKE_OFFSET))(this, a, b);
		}
	};
}
