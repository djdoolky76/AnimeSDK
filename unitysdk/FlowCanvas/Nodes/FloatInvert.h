#pragma once
#include "unitysdk/unitysdk.h"

#define FLOWCANVAS_NODES_FLOATINVERT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D5D09A0)
#define FLOWCANVAS_NODES_FLOATINVERT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D09B0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int FloatInvert_TypeDefinitionIndex = 29410;

	class FloatInvert
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATINVERT__CTOR_OFFSET))(this);
		}

		::System::Single Invoke(::System::Single value)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOATINVERT_INVOKE_OFFSET))(this, value);
		}
	};
}
