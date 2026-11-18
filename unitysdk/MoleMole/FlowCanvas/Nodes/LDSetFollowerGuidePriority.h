#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETFOLLOWERGUIDEPRIORITY_INVOKE_OFFSET UNITYSDK_OFFSET(0x104130C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETFOLLOWERGUIDEPRIORITY_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10412F80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETFOLLOWERGUIDEPRIORITY__CTOR_OFFSET UNITYSDK_OFFSET(0x104132E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETFOLLOWERGUIDEPRIORITY__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x10413320)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETFOLLOWERGUIDEPRIORITY__REGISTERPORTS_B__4_1_OFFSET UNITYSDK_OFFSET(0x10413330)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetFollowerGuidePriority_TypeDefinitionIndex = 67525;

	class LDSetFollowerGuidePriority : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::String* currTarget; // 0xA8
		::FlowCanvas::FlowOutput* output; // 0xB0
		::FlowCanvas::ValueOutput_1<::System::String*>* targetValueOutput; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::System::String*>*>* paramInput; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETFOLLOWERGUIDEPRIORITY__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETFOLLOWERGUIDEPRIORITY_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETFOLLOWERGUIDEPRIORITY_INVOKE_OFFSET))(this);
		}

		::System::String* _RegisterPorts_b__4_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETFOLLOWERGUIDEPRIORITY__REGISTERPORTS_B__4_0_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__4_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETFOLLOWERGUIDEPRIORITY__REGISTERPORTS_B__4_1_OFFSET))(this, f);
		}
	};
}
