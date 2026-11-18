#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class Object; }

#define FLOWCANVAS_NODES_ISNULL_INVOKE_OFFSET UNITYSDK_OFFSET(0x125BB430)
#define FLOWCANVAS_NODES_ISNULL__CTOR_OFFSET UNITYSDK_OFFSET(0x125BB480)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int IsNull_TypeDefinitionIndex = 54912;

	class IsNull
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ISNULL__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Object* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ISNULL_INVOKE_OFFSET))(this, a);
		}
	};
}
