#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole { class UIMiddleTip; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWMIDDLETIP_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x162C49B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWMIDDLETIP__CTOR_OFFSET UNITYSDK_OFFSET(0x162C4C50)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWMIDDLETIP__GETCREATEDTIPOBJECT_OFFSET UNITYSDK_OFFSET(0x162C4C00)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWMIDDLETIP__REGISTERPORTS_B__11_0_OFFSET UNITYSDK_OFFSET(0x162C4C90)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWMIDDLETIP__REGISTERPORTS_B__11_1_OFFSET UNITYSDK_OFFSET(0x162C5150)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWMIDDLETIP__REGISTERPORTS_B__11_2_OFFSET UNITYSDK_OFFSET(0x162C51B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_ShowMiddleTip_TypeDefinitionIndex = 50391;

	class LD_ShowMiddleTip : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Boolean>* show; // 0xA8
		::FlowCanvas::FlowOutput* HideOutput; // 0xB0
		::FlowCanvas::FlowOutput* ShowOutput; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Int32>* showPage; // 0xC0
		::FlowCanvas::FlowInput* Hide; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Boolean>* showIcon; // 0xD0
		::FlowCanvas::ValueInput_1<::System::String*>* debugText; // 0xD8
		::FlowCanvas::ValueInput_1<::System::Int32>* tipID; // 0xE0
		::FlowCanvas::ValueInput_1<::System::String*>* updateText; // 0xE8
		::MoleMole::UIMiddleTip* _middleTip; // 0xF0
		::FlowCanvas::FlowInput* Show; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWMIDDLETIP__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWMIDDLETIP_REGISTERPORTS_OFFSET))(this);
		}

		::MoleMole::UIMiddleTip* _GetCreatedTipObject()
		{
			return ((::MoleMole::UIMiddleTip*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWMIDDLETIP__GETCREATEDTIPOBJECT_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__11_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWMIDDLETIP__REGISTERPORTS_B__11_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__11_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWMIDDLETIP__REGISTERPORTS_B__11_1_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__11_2(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SHOWMIDDLETIP__REGISTERPORTS_B__11_2_OFFSET))(this, f);
		}
	};
}
