#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYTRIGGERANYSTATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B4AB790)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYTRIGGERANYSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4AB960)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowEntityTriggerAnyState_TypeDefinitionIndex = 65475;

	class HollowEntityTriggerAnyState
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYTRIGGERANYSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::UInt32 entityRuntimeID, ::System::String* triggerName)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYTRIGGERANYSTATE_INVOKE_OFFSET))(this, entityRuntimeID, triggerName);
		}
	};
}
