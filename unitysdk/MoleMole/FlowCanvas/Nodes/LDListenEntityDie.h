#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EntityDieCheckType.h"
#include "unitysdk/FlowCanvas/Flow.h"

class ENGKPGFGGLM;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENENTITYDIE_BINDEVENT_OFFSET UNITYSDK_OFFSET(0x1040D8C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENENTITYDIE_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x1040DB10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENENTITYDIE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x1040DED0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENENTITYDIE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1040DDD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENENTITYDIE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1040DE20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENENTITYDIE_ONLATETICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x1040DE70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENENTITYDIE_ONMONSTERDIE_OFFSET UNITYSDK_OFFSET(0x1040DFD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENENTITYDIE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1040D470)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENENTITYDIE_START_OFFSET UNITYSDK_OFFSET(0x1040D5E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENENTITYDIE_UNBINDEVENT_OFFSET UNITYSDK_OFFSET(0x1040DB90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENENTITYDIE__CTOR_OFFSET UNITYSDK_OFFSET(0x1040E620)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENENTITYDIE__REGISTERPORTS_B__7_0_OFFSET UNITYSDK_OFFSET(0x1040E660)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENENTITYDIE__REGISTERPORTS_B__7_1_OFFSET UNITYSDK_OFFSET(0x1040E690)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENENTITYDIE___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1040E730)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENENTITYDIE___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1040E740)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDListenEntityDie_TypeDefinitionIndex = 44602;

	class LDListenEntityDie : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* output; // 0xA8
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* inputDeathCheckType; // 0xB0
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* entityInput; // 0xB8
		::FlowCanvas::FlowOutput* Reached; // 0xC0
		::System::Boolean bindEvent; // 0xC8
		::System::Boolean nodeEnter; // 0xC9
		::System::Byte _padding0[0x2];
		::System::UInt32 listenEntityId; // 0xCC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENENTITYDIE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENENTITYDIE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENENTITYDIE_START_OFFSET))(this, f);
		}

		::System::Void Interrupt(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENENTITYDIE_INTERRUPT_OFFSET))(this, f);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENENTITYDIE_BINDEVENT_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENENTITYDIE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENENTITYDIE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void UnBindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENENTITYDIE_UNBINDEVENT_OFFSET))(this);
		}

		::System::Void OnLateTickCallback(::System::Single delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENENTITYDIE_ONLATETICKCALLBACK_OFFSET))(this, delta);
		}

		::System::Void OnEventFromAnyone(::ENGKPGFGGLM* evt)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENENTITYDIE_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void OnMonsterDie(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENENTITYDIE_ONMONSTERDIE_OFFSET))(this, entityId);
		}

		::System::Void _RegisterPorts_b__7_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENENTITYDIE__REGISTERPORTS_B__7_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__7_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENENTITYDIE__REGISTERPORTS_B__7_1_OFFSET))(this, f);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENENTITYDIE___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENENTITYDIE___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
