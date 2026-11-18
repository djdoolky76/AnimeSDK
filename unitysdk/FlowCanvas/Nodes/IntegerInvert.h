#pragma once
#include "unitysdk/unitysdk.h"

#define FLOWCANVAS_NODES_INTEGERINVERT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E9C79A0)
#define FLOWCANVAS_NODES_INTEGERINVERT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C79B0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int IntegerInvert_TypeDefinitionIndex = 30076;

	class IntegerInvert
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INTEGERINVERT__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Int32 value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INTEGERINVERT_INVOKE_OFFSET))(this, value);
		}
	};
}
