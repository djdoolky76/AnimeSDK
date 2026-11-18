#pragma once
#include "unitysdk/unitysdk.h"

#define FLOWCANVAS_NODES_BOOLEANNOTEQUAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EB7C290)
#define FLOWCANVAS_NODES_BOOLEANNOTEQUAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB7C2A0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int BooleanNotEqual_TypeDefinitionIndex = 29565;

	class BooleanNotEqual
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_BOOLEANNOTEQUAL__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Boolean a, ::System::Boolean b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_BOOLEANNOTEQUAL_INVOKE_OFFSET))(this, a, b);
		}
	};
}
