#pragma once
#include "unitysdk/unitysdk.h"

#define FLOWCANVAS_NODES_XOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E3F51E0)
#define FLOWCANVAS_NODES_XOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F51F0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int XOR_TypeDefinitionIndex = 30080;

	class XOR
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_XOR__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Boolean a, ::System::Boolean b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_XOR_INVOKE_OFFSET))(this, a, b);
		}
	};
}
