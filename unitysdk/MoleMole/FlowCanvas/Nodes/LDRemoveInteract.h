#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEINTERACT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A08B580)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEINTERACT_STARTREMOVE_OFFSET UNITYSDK_OFFSET(0x1A08B6B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEINTERACT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A08BD80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEINTERACT__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1A08BDC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDRemoveInteract_TypeDefinitionIndex = 88724;

	class LDRemoveInteract : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::String*>* interactTag; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Int32>* interactID; // 0xB0
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* ownerEntity; // 0xB8
		::FlowCanvas::FlowOutput* output; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEINTERACT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEINTERACT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void StartRemove(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEINTERACT_STARTREMOVE_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEINTERACT__REGISTERPORTS_B__4_0_OFFSET))(this, f);
		}
	};
}
