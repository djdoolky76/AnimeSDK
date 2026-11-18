#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETDYNAMICOVERRIDEWEATHERV2_POP_OFFSET UNITYSDK_OFFSET(0x10D1CC80)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETDYNAMICOVERRIDEWEATHERV2_PUSH_OFFSET UNITYSDK_OFFSET(0x10D1CA40)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETDYNAMICOVERRIDEWEATHERV2_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10D1C8F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETDYNAMICOVERRIDEWEATHERV2__CTOR_OFFSET UNITYSDK_OFFSET(0x10D1CF40)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETDYNAMICOVERRIDEWEATHERV2__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x10D1CF80)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETDYNAMICOVERRIDEWEATHERV2__REGISTERPORTS_B__3_1_OFFSET UNITYSDK_OFFSET(0x10D1CFB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SetDynamicOverrideWeatherV2_TypeDefinitionIndex = 75182;

	class LD_SetDynamicOverrideWeatherV2 : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Boolean>* immediateKey; // 0xA8
		::FlowCanvas::FlowOutput* Output; // 0xB0
		::FlowCanvas::ValueInput_1<::System::String*>* weatherKey; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETDYNAMICOVERRIDEWEATHERV2__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETDYNAMICOVERRIDEWEATHERV2_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Push(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETDYNAMICOVERRIDEWEATHERV2_PUSH_OFFSET))(this, f);
		}

		::System::Void Pop(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETDYNAMICOVERRIDEWEATHERV2_POP_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETDYNAMICOVERRIDEWEATHERV2__REGISTERPORTS_B__3_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__3_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETDYNAMICOVERRIDEWEATHERV2__REGISTERPORTS_B__3_1_OFFSET))(this, f);
		}
	};
}
