#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEAVATARBYROBOTID_PROCESS_OFFSET UNITYSDK_OFFSET(0x16238FF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEAVATARBYROBOTID_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x16238E60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEAVATARBYROBOTID__CTOR_OFFSET UNITYSDK_OFFSET(0x162394F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEAVATARBYROBOTID__REGISTERPORTS_B__7_0_OFFSET UNITYSDK_OFFSET(0x16239530)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDReplaceAvatarByRobotID_TypeDefinitionIndex = 75847;

	class LDReplaceAvatarByRobotID : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::FlowOutput* flowOut; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Int32>* RobotID; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Int32>* TargetAvatarIndex; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Boolean>* forceRemoveSameAvatarID; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Boolean>* IsMainCityPrefab; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Boolean>* IsKeepState; // 0xD0
		::FlowCanvas::ValueInput_1<::System::Boolean>* IsHideHudBG; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEAVATARBYROBOTID__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEAVATARBYROBOTID_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Process(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEAVATARBYROBOTID_PROCESS_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__7_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEAVATARBYROBOTID__REGISTERPORTS_B__7_0_OFFSET))(this, f);
		}
	};
}
