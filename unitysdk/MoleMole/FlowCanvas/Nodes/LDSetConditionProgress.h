#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/HMEOMKOOEJK.h"
#include "unitysdk/FlowCanvas/Flow.h"

class BGAPCMGOEPA;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETCONDITIONPROGRESS_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x119102C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETCONDITIONPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x11910430)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETCONDITIONPROGRESS__REGISTERPORTS_B__6_0_OFFSET UNITYSDK_OFFSET(0x11910470)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETCONDITIONPROGRESS__REGISTERPORTS_B__6_1_OFFSET UNITYSDK_OFFSET(0x11910930)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetConditionProgress_TypeDefinitionIndex = 48970;

	class LDSetConditionProgress : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _failure; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Int32>* _conditionID; // 0xB0
		::FlowCanvas::FlowOutput* _success; // 0xB8
		::FlowCanvas::ValueInput_1<::HMEOMKOOEJK>* _modifyType; // 0xC0
		::FlowCanvas::FlowOutput* _output; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Int32>* _progress; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETCONDITIONPROGRESS__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETCONDITIONPROGRESS_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__6_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETCONDITIONPROGRESS__REGISTERPORTS_B__6_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__6_1(::BGAPCMGOEPA* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::BGAPCMGOEPA*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETCONDITIONPROGRESS__REGISTERPORTS_B__6_1_OFFSET))(this, rsp);
		}
	};
}
