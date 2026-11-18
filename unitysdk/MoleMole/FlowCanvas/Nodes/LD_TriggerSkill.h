#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/FlowCanvas/Flow.h"

class DJAGNIDEICF;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_TRIGGERSKILL_BEGIN_OFFSET UNITYSDK_OFFSET(0x10D1D740)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_TRIGGERSKILL_INTERNALTRIGGERSKILL_OFFSET UNITYSDK_OFFSET(0x10D1D7E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_TRIGGERSKILL_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10D1D5F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_TRIGGERSKILL_UPDATESKILLINFO_OFFSET UNITYSDK_OFFSET(0x10D1DDE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_TRIGGERSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x10D1DE60)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_TRIGGERSKILL__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x10D1DEA0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_TriggerSkill_TypeDefinitionIndex = 57031;

	class LD_TriggerSkill : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Boolean>* ForceUpdateCD; // 0xA8
		::FlowCanvas::ValueInput_1<::MoleMole::EntityHandle>* Entity; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Int32>* SkillBtnIndex; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Boolean>* ForceTriggerSkill; // 0xC0
		::FlowCanvas::FlowOutput* Output; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_TRIGGERSKILL__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_TRIGGERSKILL_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_TRIGGERSKILL_BEGIN_OFFSET))(this, f);
		}

		::System::Boolean InternalTriggerSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_TRIGGERSKILL_INTERNALTRIGGERSKILL_OFFSET))(this);
		}

		::System::Void UpdateSkillInfo(::DJAGNIDEICF* skillComponent, ::System::Int32 skillBtnIndex)
		{
			return ((::System::Void(*)(::PVOID, ::DJAGNIDEICF*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_TRIGGERSKILL_UPDATESKILLINFO_OFFSET))(this, skillComponent, skillBtnIndex);
		}

		::System::Void _RegisterPorts_b__5_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_TRIGGERSKILL__REGISTERPORTS_B__5_0_OFFSET))(this, f);
		}
	};
}
