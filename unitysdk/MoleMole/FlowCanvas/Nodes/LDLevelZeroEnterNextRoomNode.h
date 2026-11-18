#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

class ENGKPGFGGLM;
class IFFKIHMPGJK_PGPENLLCLDF;
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class Object; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x1A7C0C40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1A7C08D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1A7C0A40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A7C0340)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7C0D10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE__HANDLELEVELZEROROOMEND_OFFSET UNITYSDK_OFFSET(0x1A7C05E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE__ONNEXTROOMLOADFINISHEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A7C04F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE__REGISTERPORTS_B__11_0_OFFSET UNITYSDK_OFFSET(0x1A7C0D60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE__REGISTERPORTS_B__11_1_OFFSET UNITYSDK_OFFSET(0x1A7C0DC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1A7C0EC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1A7C0ED0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE___HANDLELEVELZEROROOMEND_B__13_0_OFFSET UNITYSDK_OFFSET(0x1A7C0E40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE___ONNEXTROOMLOADFINISHEDCALLBACK_B__12_0_OFFSET UNITYSDK_OFFSET(0x1A7C0E00)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelZeroEnterNextRoomNode_TypeDefinitionIndex = 82438;

	class LDLevelZeroEnterNextRoomNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Boolean>* _enableDelayExit; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Boolean>* _isSuccess; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Object*>* _performType; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Single>* _overrideDelayExitTime; // 0xC0
		::FlowCanvas::FlowInput* _transitIn; // 0xC8
		::FlowCanvas::FlowOutput* output; // 0xD0
		::FlowCanvas::FlowOutput* onNextRoomLoadFinishedFlowOutput; // 0xD8
		::System::Boolean _hasExecuted; // 0xE0
		::System::Boolean _hasTransitAvatar; // 0xE1
		::System::Boolean IsAutoTransit; // 0xE2
		::System::Byte _padding0[0x1];
		::System::Single delayRealLoadDuration; // 0xE4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _OnNextRoomLoadFinishedCallback(::System::Boolean isSameStage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE__ONNEXTROOMLOADFINISHEDCALLBACK_OFFSET))(this, isSameStage);
		}

		::System::Void _HandleLevelZeroRoomEnd(::System::Boolean isLastRoom)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE__HANDLELEVELZEROROOMEND_OFFSET))(this, isLastRoom);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Boolean OnEventFromAnyone(::ENGKPGFGGLM* evt)
		{
			return ((::System::Boolean(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void _RegisterPorts_b__11_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE__REGISTERPORTS_B__11_0_OFFSET))(this, flow);
		}

		::System::Void _RegisterPorts_b__11_1(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE__REGISTERPORTS_B__11_1_OFFSET))(this, flow);
		}

		::System::Void __OnNextRoomLoadFinishedCallback_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE___ONNEXTROOMLOADFINISHEDCALLBACK_B__12_0_OFFSET))(this);
		}

		::System::Void __HandleLevelZeroRoomEnd_b__13_0(::IFFKIHMPGJK_PGPENLLCLDF* tctx)
		{
			return ((::System::Void(*)(::PVOID, ::IFFKIHMPGJK_PGPENLLCLDF*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE___HANDLELEVELZEROROOMEND_B__13_0_OFFSET))(this, tctx);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERNEXTROOMNODE___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
