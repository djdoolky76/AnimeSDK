#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

class GIFEKLIPAJD;
class ICIJJJLDLBM;
class OAEFGCLEHHO;
namespace MoleMole::FlowCanvas::Nodes { class LD_AbyssS2_ManualStartInteractionRpc; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MANUALSTARTINTERACTIONRPC___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10419510)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MANUALSTARTINTERACTIONRPC___C__DISPLAYCLASS3_0__REGISTERPORTS_B__1_OFFSET UNITYSDK_OFFSET(0x10419520)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MANUALSTARTINTERACTIONRPC___C__DISPLAYCLASS3_0__REGISTERPORTS_B__2_OFFSET UNITYSDK_OFFSET(0x10419590)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_ManualStartInteractionRpc___c__DisplayClass3_0_TypeDefinitionIndex = 74683;

	class LD_AbyssS2_ManualStartInteractionRpc___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Flow flow; // 0x10
		::ICIJJJLDLBM* interaction; // 0x38
		::MoleMole::FlowCanvas::Nodes::LD_AbyssS2_ManualStartInteractionRpc* __4__this; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MANUALSTARTINTERACTIONRPC___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__1(::GIFEKLIPAJD* msg)
		{
			return ((::System::Void(*)(::PVOID, ::GIFEKLIPAJD*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MANUALSTARTINTERACTIONRPC___C__DISPLAYCLASS3_0__REGISTERPORTS_B__1_OFFSET))(this, msg);
		}

		::System::Void _RegisterPorts_b__2(::OAEFGCLEHHO* msg)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MANUALSTARTINTERACTIONRPC___C__DISPLAYCLASS3_0__REGISTERPORTS_B__2_OFFSET))(this, msg);
		}
	};
}
