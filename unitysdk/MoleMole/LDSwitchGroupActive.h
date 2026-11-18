#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_LDSWITCHGROUPACTIVE_INPUT_OFFSET UNITYSDK_OFFSET(0x1A90B060)
#define MOLEMOLE_LDSWITCHGROUPACTIVE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A90AF30)
#define MOLEMOLE_LDSWITCHGROUPACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A90B4C0)

namespace MoleMole
{
	inline static constexpr unsigned int LDSwitchGroupActive_TypeDefinitionIndex = 41609;

	class LDSwitchGroupActive : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _flowOutput; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Boolean>* _isActive; // 0xB0
		::FlowCanvas::ValueInput_1<::System::UInt32>* _suiteId; // 0xB8
		::FlowCanvas::ValueInput_1<::System::UInt32>* _groupId; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LDSWITCHGROUPACTIVE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LDSWITCHGROUPACTIVE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Input(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_LDSWITCHGROUPACTIVE_INPUT_OFFSET))(this, f);
		}
	};
}
