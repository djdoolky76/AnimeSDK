#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/PCBJHAOEOEN.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDStartRealtimeQTE; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTREALTIMEQTE___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B67B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTREALTIMEQTE___C__DISPLAYCLASS7_0__STARTREALTIMEQTE_B__0_OFFSET UNITYSDK_OFFSET(0x1B4B67C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDStartRealtimeQTE___c__DisplayClass7_0_TypeDefinitionIndex = 73078;

	class LDStartRealtimeQTE___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Flow f; // 0x10
		::MoleMole::FlowCanvas::Nodes::LDStartRealtimeQTE* __4__this; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTREALTIMEQTE___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartRealtimeQTE_b__0(::PCBJHAOEOEN finishType)
		{
			return ((::System::Void(*)(::PVOID, ::PCBJHAOEOEN))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTREALTIMEQTE___C__DISPLAYCLASS7_0__STARTREALTIMEQTE_B__0_OFFSET))(this, finishType);
		}
	};
}
