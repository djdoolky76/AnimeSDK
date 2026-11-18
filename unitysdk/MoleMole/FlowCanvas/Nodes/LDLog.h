#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLOG_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A7C5270)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7C52C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLog_TypeDefinitionIndex = 69727;

	class LDLog
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLOG__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLOG_INVOKE_OFFSET))(this, content);
		}
	};
}
