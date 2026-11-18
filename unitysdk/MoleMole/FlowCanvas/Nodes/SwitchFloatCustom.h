#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/LOGDECKDOMP.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_SWITCHFLOATCUSTOM_BETWEENPROCESS_OFFSET UNITYSDK_OFFSET(0x14311280)
#define MOLEMOLE_FLOWCANVAS_NODES_SWITCHFLOATCUSTOM_EQUALPROCESS_OFFSET UNITYSDK_OFFSET(0x14310E40)
#define MOLEMOLE_FLOWCANVAS_NODES_SWITCHFLOATCUSTOM_GREATEREQUALBREAKPROCESS_OFFSET UNITYSDK_OFFSET(0x143115F0)
#define MOLEMOLE_FLOWCANVAS_NODES_SWITCHFLOATCUSTOM_GREATEREQUALPROCESS_OFFSET UNITYSDK_OFFSET(0x14311060)
#define MOLEMOLE_FLOWCANVAS_NODES_SWITCHFLOATCUSTOM_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x14310BC0)
#define MOLEMOLE_FLOWCANVAS_NODES_SWITCHFLOATCUSTOM__CTOR_OFFSET UNITYSDK_OFFSET(0x143117F0)
#define MOLEMOLE_FLOWCANVAS_NODES_SWITCHFLOATCUSTOM__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x14311890)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int SwitchFloatCustom_TypeDefinitionIndex = 86773;

	class SwitchFloatCustom : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::Il2CppArray<::FlowCanvas::FlowOutput*>* cases; // 0xA8
		::FlowCanvas::ValueInput_1<::LOGDECKDOMP>* compareType; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Single>* selector; // 0xB8
		::System::Collections::Generic::List_1<::System::Single>* floatCases; // 0xC0
		::FlowCanvas::FlowOutput* defaultCase; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_SWITCHFLOATCUSTOM__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_SWITCHFLOATCUSTOM_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void EqualProcess(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_SWITCHFLOATCUSTOM_EQUALPROCESS_OFFSET))(this, f);
		}

		::System::Void GreaterEqualProcess(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_SWITCHFLOATCUSTOM_GREATEREQUALPROCESS_OFFSET))(this, f);
		}

		::System::Void BetweenProcess(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_SWITCHFLOATCUSTOM_BETWEENPROCESS_OFFSET))(this, f);
		}

		::System::Void GreaterEqualBreakProcess(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_SWITCHFLOATCUSTOM_GREATEREQUALBREAKPROCESS_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__5_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_SWITCHFLOATCUSTOM__REGISTERPORTS_B__5_0_OFFSET))(this, f);
		}
	};
}
