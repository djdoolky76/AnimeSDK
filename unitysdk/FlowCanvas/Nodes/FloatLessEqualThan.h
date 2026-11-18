#pragma once
#include "unitysdk/unitysdk.h"

#define FLOWCANVAS_NODES_FLOATLESSEQUALTHAN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E3F2630)
#define FLOWCANVAS_NODES_FLOATLESSEQUALTHAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F2640)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int FloatLessEqualThan_TypeDefinitionIndex = 29748;

	class FloatLessEqualThan
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATLESSEQUALTHAN__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Single a, ::System::Single b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATLESSEQUALTHAN_INVOKE_OFFSET))(this, a, b);
		}
	};
}
