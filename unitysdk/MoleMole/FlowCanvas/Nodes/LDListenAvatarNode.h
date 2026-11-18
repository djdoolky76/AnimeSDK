#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

class ENGKPGFGGLM;
class HJDNNLKBHBA;
class LPKKPJLEOLN;
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_BINDEVENT_OFFSET UNITYSDK_OFFSET(0x1A0886B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_CHECKFINISH_OFFSET UNITYSDK_OFFSET(0x1A089BF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_CHECKHIGHTOLOW_OFFSET UNITYSDK_OFFSET(0x1A08A5D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_CHECKLOWTOHIGH_OFFSET UNITYSDK_OFFSET(0x1A08A3F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_CHECKSTARTVALUE_OFFSET UNITYSDK_OFFSET(0x1A089860)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_GETLOCALAVATARHPPERCENT_OFFSET UNITYSDK_OFFSET(0x1A089050)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_GETTEAMHPPERCENT_OFFSET UNITYSDK_OFFSET(0x1A0895D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_INITLOACLAVATARDATA_OFFSET UNITYSDK_OFFSET(0x1A088E10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_INITTEAMDATA_OFFSET UNITYSDK_OFFSET(0x1A089230)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x1A089DD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1A088660)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1A0888C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_ONLOCALAVATARCHANGE_OFFSET UNITYSDK_OFFSET(0x1A089E40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A088430)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_START_OFFSET UNITYSDK_OFFSET(0x1A088B30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_STOP_OFFSET UNITYSDK_OFFSET(0x1A089D70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_UNBINDEVENT_OFFSET UNITYSDK_OFFSET(0x1A088910)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A08A150)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A08A7B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE__REGISTERPORTS_B__21_0_OFFSET UNITYSDK_OFFSET(0x1A08A7F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1A08A820)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1A08A830)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDListenAvatarNode_TypeDefinitionIndex = 83358;

	class LDListenAvatarNode : public ::FlowCanvas::FlowNode
	{
	public:
		// static const ::System::Single tickSpan; // 0x0
		::System::Collections::Generic::List_1<::LPKKPJLEOLN*>* aliveStateList; // 0xA8
		::FlowCanvas::FlowOutput* reachedLowToHighOutput; // 0xB0
		::FlowCanvas::FlowOutput* flowOut; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Single>* highToLowInput; // 0xC0
		::FlowCanvas::FlowOutput* reachedHighToLowOutput; // 0xC8
		::HJDNNLKBHBA* localAvatarData; // 0xD0
		::FlowCanvas::ValueInput_1<::System::Single>* lowToHighInput; // 0xD8
		::FlowCanvas::ValueInput_1<::System::Object*>* listenTypeInput; // 0xE0
		::FlowCanvas::ValueInput_1<::System::Int32>* lowToHighTriggerCountInput; // 0xE8
		::System::Collections::Generic::List_1<::HJDNNLKBHBA*>* teamDataList; // 0xF0
		::FlowCanvas::ValueInput_1<::System::Int32>* highToLowTriggerCountInput; // 0xF8
		::LPKKPJLEOLN* aliveStateComponent; // 0x100
		::FlowCanvas::FlowInput* flowIn; // 0x108
		::System::Single lastHpPercent; // 0x110
		::System::Int32 lowToHightTriggerCnt; // 0x114
		::System::Int32 highToLowTriggerCnt; // 0x118
		::System::Boolean isStart; // 0x11C
		::System::Boolean bindEvent; // 0x11D
		::System::Byte _padding0[0x2];
		::System::Single tickDelta; // 0x120

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_START_OFFSET))(this, f);
		}

		::System::Void CheckStartValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_CHECKSTARTVALUE_OFFSET))(this);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_BINDEVENT_OFFSET))(this);
		}

		::System::Void UnBindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_UNBINDEVENT_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::ENGKPGFGGLM* evt)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Boolean CheckFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_CHECKFINISH_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_STOP_OFFSET))(this);
		}

		::System::Boolean CheckHighToLow(::System::Single cur, ::System::Single last)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_CHECKHIGHTOLOW_OFFSET))(this, cur, last);
		}

		::System::Boolean CheckLowToHigh(::System::Single cur, ::System::Single last)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_CHECKLOWTOHIGH_OFFSET))(this, cur, last);
		}

		::System::Void OnLocalAvatarChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_ONLOCALAVATARCHANGE_OFFSET))(this);
		}

		::System::Void InitLoaclAvatarData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_INITLOACLAVATARDATA_OFFSET))(this);
		}

		::System::Void InitTeamData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_INITTEAMDATA_OFFSET))(this);
		}

		::System::Single GetLocalAvatarHpPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_GETLOCALAVATARHPPERCENT_OFFSET))(this);
		}

		::System::Single GetTeamHpPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE_GETTEAMHPPERCENT_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__21_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE__REGISTERPORTS_B__21_0_OFFSET))(this, f);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENAVATARNODE___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
