#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERRUPTINPUTENABLEACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A7C0110)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERRUPTINPUTENABLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7C0210)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDInterruptInputEnableAction_TypeDefinitionIndex = 48112;

	class LDInterruptInputEnableAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERRUPTINPUTENABLEACTION__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERRUPTINPUTENABLEACTION_INVOKE_OFFSET))(this, tag);
		}
	};
}
