#pragma once
#include "unitysdk/unitysdk.h"

#define FLOWCANVAS_NODES_INTEGEREQUAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E7AA620)
#define FLOWCANVAS_NODES_INTEGEREQUAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7AA630)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int IntegerEqual_TypeDefinitionIndex = 29998;

	class IntegerEqual
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INTEGEREQUAL__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INTEGEREQUAL_INVOKE_OFFSET))(this, a, b);
		}
	};
}
