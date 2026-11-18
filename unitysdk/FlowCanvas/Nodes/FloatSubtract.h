#pragma once
#include "unitysdk/unitysdk.h"

#define FLOWCANVAS_NODES_FLOATSUBTRACT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EF4DBA0)
#define FLOWCANVAS_NODES_FLOATSUBTRACT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF4DBB0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int FloatSubtract_TypeDefinitionIndex = 29723;

	class FloatSubtract
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATSUBTRACT__CTOR_OFFSET))(this);
		}

		::System::Single Invoke(::System::Single a, ::System::Single b)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATSUBTRACT_INVOKE_OFFSET))(this, a, b);
		}
	};
}
