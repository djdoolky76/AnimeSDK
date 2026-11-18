#pragma once
#include "unitysdk/unitysdk.h"

#define FLOWCANVAS_NODES_AND_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D5CFF40)
#define FLOWCANVAS_NODES_AND__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CFF50)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int AND_TypeDefinitionIndex = 29942;

	class AND
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_AND__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Boolean a, ::System::Boolean b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_AND_INVOKE_OFFSET))(this, a, b);
		}
	};
}
