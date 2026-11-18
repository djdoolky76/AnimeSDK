#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

class AGJFJGEMIPB_ABMKPFAONMD;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_BEGIN_OFFSET UNITYSDK_OFFSET(0x162C4660)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_CLOSE_OFFSET UNITYSDK_OFFSET(0x162C4140)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_FAIL_OFFSET UNITYSDK_OFFSET(0x162C3FD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x162C3BF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_ONFINISH_OFFSET UNITYSDK_OFFSET(0x162C4840)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x162C3C00)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_SHOWCOUNTDOWNUI_OFFSET UNITYSDK_OFFSET(0x162C41C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_SUCCESS_OFFSET UNITYSDK_OFFSET(0x162C3E60)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x162C48C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY__REGISTERPORTS_B__7_0_OFFSET UNITYSDK_OFFSET(0x162C4900)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY__REGISTERPORTS_B__7_1_OFFSET UNITYSDK_OFFSET(0x162C4920)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_ShowCountDownUIByKey_TypeDefinitionIndex = 57190;

	class LD_ShowCountDownUIByKey : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::String*>* linkTimerKey; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Boolean>* showWhenMidText; // 0xB0
		::FlowCanvas::FlowOutput* finish; // 0xB8
		::FlowCanvas::FlowOutput* update; // 0xC0
		::AGJFJGEMIPB_ABMKPFAONMD* _LTimer; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY__CTOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_GET_NAME_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Success(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_SUCCESS_OFFSET))(this, f);
		}

		::System::Void Fail(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_FAIL_OFFSET))(this, f);
		}

		::System::Void Close(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_CLOSE_OFFSET))(this, f);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_BEGIN_OFFSET))(this, f);
		}

		::System::Void ShowCountDownUI(::System::Boolean showState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_SHOWCOUNTDOWNUI_OFFSET))(this, showState);
		}

		::System::Void OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY_ONFINISH_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__7_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY__REGISTERPORTS_B__7_0_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__7_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWCOUNTDOWNUIBYKEY__REGISTERPORTS_B__7_1_OFFSET))(this);
		}
	};
}
