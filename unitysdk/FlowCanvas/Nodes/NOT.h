#pragma once
#include "unitysdk/unitysdk.h"

#define FLOWCANVAS_NODES_NOT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E3F30E0)
#define FLOWCANVAS_NODES_NOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F30F0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int NOT_TypeDefinitionIndex = 30105;

	class NOT
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_NOT__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Boolean value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_NOT_INVOKE_OFFSET))(this, value);
		}
	};
}
