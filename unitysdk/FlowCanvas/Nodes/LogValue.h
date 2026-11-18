#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class Object; }

#define FLOWCANVAS_NODES_LOGVALUE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E9C7B60)
#define FLOWCANVAS_NODES_LOGVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C7B70)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int LogValue_TypeDefinitionIndex = 29711;

	class LogValue
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LOGVALUE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LOGVALUE_INVOKE_OFFSET))(this, obj);
		}
	};
}
