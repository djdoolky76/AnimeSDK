#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_AVATAR_REPLACEAVATARBYROBOTID_PROCESS_OFFSET UNITYSDK_OFFSET(0x130D6510)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_AVATAR_REPLACEAVATARBYROBOTID_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x130D63A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_AVATAR_REPLACEAVATARBYROBOTID__CTOR_OFFSET UNITYSDK_OFFSET(0x130D68F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_AVATAR_REPLACEAVATARBYROBOTID__REGISTERPORTS_B__6_0_OFFSET UNITYSDK_OFFSET(0x130D6930)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_Avatar_ReplaceAvatarByRobotID_TypeDefinitionIndex = 45971;

	class LD_Avatar_ReplaceAvatarByRobotID : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* flowOut; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Boolean>* IsMainCityPrefab; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Boolean>* IsKeepState; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Int32>* targetAvatarTemplateID; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Boolean>* IsHideHudBG; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Int32>* RobotID; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_AVATAR_REPLACEAVATARBYROBOTID__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_AVATAR_REPLACEAVATARBYROBOTID_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Process(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_AVATAR_REPLACEAVATARBYROBOTID_PROCESS_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__6_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_AVATAR_REPLACEAVATARBYROBOTID__REGISTERPORTS_B__6_0_OFFSET))(this, f);
		}
	};
}
