#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define FLOWCANVAS_NODES_LOGTEXT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EB7D810)
#define FLOWCANVAS_NODES_LOGTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB7D820)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int LogText_TypeDefinitionIndex = 30377;

	class LogText
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LOGTEXT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LOGTEXT_INVOKE_OFFSET))(this, text);
		}
	};
}
