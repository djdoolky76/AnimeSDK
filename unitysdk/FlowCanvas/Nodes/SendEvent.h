#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework { class GraphOwner; }
namespace System { class String; }

#define FLOWCANVAS_NODES_SENDEVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D5D2560)
#define FLOWCANVAS_NODES_SENDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D2590)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SendEvent_TypeDefinitionIndex = 30040;

	class SendEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SENDEVENT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::NodeCanvas::Framework::GraphOwner* target, ::System::String* eventName)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::GraphOwner*, ::System::String*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SENDEVENT_INVOKE_OFFSET))(this, target, eventName);
		}
	};
}
