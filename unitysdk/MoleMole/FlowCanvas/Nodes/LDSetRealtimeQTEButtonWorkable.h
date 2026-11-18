#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETREALTIMEQTEBUTTONWORKABLE_INVOKE_OFFSET UNITYSDK_OFFSET(0x10D16140)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETREALTIMEQTEBUTTONWORKABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D161D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetRealtimeQTEButtonWorkable_TypeDefinitionIndex = 44918;

	class LDSetRealtimeQTEButtonWorkable
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETREALTIMEQTEBUTTONWORKABLE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean workable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETREALTIMEQTEBUTTONWORKABLE_INVOKE_OFFSET))(this, workable);
		}
	};
}
