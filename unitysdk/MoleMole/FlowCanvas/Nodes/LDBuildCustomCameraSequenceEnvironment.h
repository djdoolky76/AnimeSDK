#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/InLevelCustomPerformerRunnerEnvironment.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDBUILDCUSTOMCAMERASEQUENCEENVIRONMENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x139D6F40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDBUILDCUSTOMCAMERASEQUENCEENVIRONMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x139D70B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDBUILDCUSTOMCAMERASEQUENCEENVIRONMENT__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x139D70F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDBUILDCUSTOMCAMERASEQUENCEENVIRONMENT__REGISTERPORTS_B__5_1_OFFSET UNITYSDK_OFFSET(0x139D7100)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDBuildCustomCameraSequenceEnvironment_TypeDefinitionIndex = 57066;

	class LDBuildCustomCameraSequenceEnvironment : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::MoleMole::InLevelCustomPerformerRunnerEnvironment _environment; // 0xA8
		::FlowCanvas::ValueInput_1<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* _environmentIn; // 0xB0
		::FlowCanvas::FlowOutput* _out; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Object*>* _value; // 0xC0
		::FlowCanvas::ValueInput_1<::System::String*>* _key; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDBUILDCUSTOMCAMERASEQUENCEENVIRONMENT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDBUILDCUSTOMCAMERASEQUENCEENVIRONMENT_REGISTERPORTS_OFFSET))(this);
		}

		::MoleMole::InLevelCustomPerformerRunnerEnvironment _RegisterPorts_b__5_0()
		{
			return ((::MoleMole::InLevelCustomPerformerRunnerEnvironment(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDBUILDCUSTOMCAMERASEQUENCEENVIRONMENT__REGISTERPORTS_B__5_0_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__5_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDBUILDCUSTOMCAMERASEQUENCEENVIRONMENT__REGISTERPORTS_B__5_1_OFFSET))(this, f);
		}
	};
}
