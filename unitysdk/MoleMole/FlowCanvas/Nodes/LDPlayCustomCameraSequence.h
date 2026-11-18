#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/InLevelCustomPerformerRunnerEnvironment.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/FlowCanvas/Flow.h"

class FOJONDIPFFL;
class MOHMFDKOJJH;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }
namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCUSTOMCAMERASEQUENCE_CLEARWHENGAMEEND_OFFSET UNITYSDK_OFFSET(0x14303C30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCUSTOMCAMERASEQUENCE_INVOKEKILLLEVELPERFORM_OFFSET UNITYSDK_OFFSET(0x14303BA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCUSTOMCAMERASEQUENCE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x143039A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCUSTOMCAMERASEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x14303CF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCUSTOMCAMERASEQUENCE__REGISTERPORTS_B__10_0_OFFSET UNITYSDK_OFFSET(0x14303D30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCUSTOMCAMERASEQUENCE__REGISTERPORTS_B__10_1_OFFSET UNITYSDK_OFFSET(0x14304160)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPlayCustomCameraSequence_TypeDefinitionIndex = 46373;

	class LDPlayCustomCameraSequence : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::String*>* _sectionName; // 0xA8
		::FOJONDIPFFL* _performer; // 0xB0
		::FlowCanvas::ValueInput_1<::System::String*>* _config; // 0xB8
		::FlowCanvas::FlowOutput* _onJumpFailed; // 0xC0
		::FlowCanvas::ValueInput_1<::System::String*>* _graphName; // 0xC8
		::FlowCanvas::FlowOutput* _onInFailed; // 0xD0
		::FlowCanvas::FlowOutput* _out; // 0xD8
		::FlowCanvas::FlowOutput* _jumpOut; // 0xE0
		::FlowCanvas::ValueInput_1<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* _environment; // 0xE8
		::FlowCanvas::FlowOutput* _onFinished; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCUSTOMCAMERASEQUENCE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCUSTOMCAMERASEQUENCE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* InvokeKillLevelPerform()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCUSTOMCAMERASEQUENCE_INVOKEKILLLEVELPERFORM_OFFSET))(this);
		}

		static ::Cysharp::Threading::Tasks::UniTask ClearWhenGameEnd(::System::WeakReference_1<::MOHMFDKOJJH*>* performer, ::Cysharp::Threading::Tasks::UniTask finishEventTask)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::WeakReference_1<::MOHMFDKOJJH*>*, ::Cysharp::Threading::Tasks::UniTask))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCUSTOMCAMERASEQUENCE_CLEARWHENGAMEEND_OFFSET))(performer, finishEventTask);
		}

		::System::Void _RegisterPorts_b__10_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCUSTOMCAMERASEQUENCE__REGISTERPORTS_B__10_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__10_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCUSTOMCAMERASEQUENCE__REGISTERPORTS_B__10_1_OFFSET))(this, f);
		}
	};
}
