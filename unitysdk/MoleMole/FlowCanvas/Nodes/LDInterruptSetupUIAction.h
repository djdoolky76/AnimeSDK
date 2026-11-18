#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERRUPTSETUPUIACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x139DACB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERRUPTSETUPUIACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x139DAD30)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDInterruptSetupUIAction_TypeDefinitionIndex = 66046;

	class LDInterruptSetupUIAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERRUPTSETUPUIACTION__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean IgnoreFadeAnimation, ::System::String* SetupTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERRUPTSETUPUIACTION_INVOKE_OFFSET))(this, IgnoreFadeAnimation, SetupTag);
		}
	};
}
