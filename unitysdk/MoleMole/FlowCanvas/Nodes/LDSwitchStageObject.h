#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

class AKFCOMPHBLJ_IAGPNNHDDPN;
class GNIGOLCCAEH;
namespace FlowCanvas { class FlowOutput; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1623B530)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__BEFORESWITCHHANDLE_OFFSET UNITYSDK_OFFSET(0x1623BDE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__CHANGESTAGEWEATHERANDTIME_OFFSET UNITYSDK_OFFSET(0x1623C2E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1623C5F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__DELAYCALLSTAGEFINISH_OFFSET UNITYSDK_OFFSET(0x1623BEA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__DOSWITCHGAMEWEATHERANDTIME_OFFSET UNITYSDK_OFFSET(0x1623C290)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__HANDLEAVATARS_OFFSET UNITYSDK_OFFSET(0x1623BE20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__ONSTAGELOADEND_OFFSET UNITYSDK_OFFSET(0x1623BF20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__REGISTERPORTS_B__10_0_OFFSET UNITYSDK_OFFSET(0x1623C640)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__STARTLOAD_OFFSET UNITYSDK_OFFSET(0x1623B6A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT___STARTLOAD_B__11_0_OFFSET UNITYSDK_OFFSET(0x1623C650)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT___STARTLOAD_B__11_1_OFFSET UNITYSDK_OFFSET(0x1623C730)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT___STARTLOAD_B__11_2_OFFSET UNITYSDK_OFFSET(0x1623CA60)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSwitchStageObject_TypeDefinitionIndex = 43355;

	class LDSwitchStageObject : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		// static const ::System::String* MUTE_TAG; // 0x0
		::FlowCanvas::FlowOutput* finishOutput; // 0xA8
		::System::String* currentStageName; // 0xB0
		::GNIGOLCCAEH* _infoObject; // 0xB8
		::FlowCanvas::FlowOutput* output; // 0xC0
		::UnityEngine::Coroutine* _waitFadingAfterLoadFinishCo; // 0xC8
		::System::Boolean IsSetBySubArea; // 0xD0
		::System::Boolean _isFinishStageLoading; // 0xD1
		::System::Boolean _isStartLoad; // 0xD2
		::System::Byte _padding0[0x1];
		::System::Single MAX_WAIT_TIME; // 0xD4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _StartLoad(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__STARTLOAD_OFFSET))(this, f);
		}

		::System::Void _BeforeSwitchHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__BEFORESWITCHHANDLE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* _HandleAvatars()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__HANDLEAVATARS_OFFSET))(this);
		}

		::System::Collections::IEnumerator* _DelayCallStageFinish()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__DELAYCALLSTAGEFINISH_OFFSET))(this);
		}

		::System::Void _OnStageLoadEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__ONSTAGELOADEND_OFFSET))(this);
		}

		::System::Void _DoSwitchGameWeatherAndTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__DOSWITCHGAMEWEATHERANDTIME_OFFSET))(this);
		}

		::System::Void _ChangeStageWeatherAndTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__CHANGESTAGEWEATHERANDTIME_OFFSET))(this);
		}

		::System::String* _RegisterPorts_b__10_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT__REGISTERPORTS_B__10_0_OFFSET))(this);
		}

		::System::Void __StartLoad_b__11_0(::AKFCOMPHBLJ_IAGPNNHDDPN* o)
		{
			return ((::System::Void(*)(::PVOID, ::AKFCOMPHBLJ_IAGPNNHDDPN*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT___STARTLOAD_B__11_0_OFFSET))(this, o);
		}

		::System::Void __StartLoad_b__11_1(::AKFCOMPHBLJ_IAGPNNHDDPN* o)
		{
			return ((::System::Void(*)(::PVOID, ::AKFCOMPHBLJ_IAGPNNHDDPN*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT___STARTLOAD_B__11_1_OFFSET))(this, o);
		}

		::System::Void __StartLoad_b__11_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT___STARTLOAD_B__11_2_OFFSET))(this);
		}
	};
}
