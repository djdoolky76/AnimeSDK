#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASUREADDTOOLABILITY_DO_OFFSET UNITYSDK_OFFSET(0x14AE70D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASUREADDTOOLABILITY_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x14AE7010)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASUREADDTOOLABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x14AE7230)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SummerTideTreasureAddToolAbility_TypeDefinitionIndex = 60111;

	class LD_SummerTideTreasureAddToolAbility : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _out; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASUREADDTOOLABILITY__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASUREADDTOOLABILITY_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Do(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASUREADDTOOLABILITY_DO_OFFSET))(this, f);
		}
	};
}
