#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EntityDieCheckType.h"
#include "unitysdk/FlowCanvas/Flow.h"

class ENGKPGFGGLM;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::FlowCanvas::Nodes { class EntitySaveDataMap; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_BINDEVENT_OFFSET UNITYSDK_OFFSET(0x1356C0B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_CHECKDIECOUNT_OFFSET UNITYSDK_OFFSET(0x1356B5E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1356B120)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x1356C2C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1356C060)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1356C270)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_ONMONSTERDIE_OFFSET UNITYSDK_OFFSET(0x1356C3C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1356AF90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_UNBINDEVENT_OFFSET UNITYSDK_OFFSET(0x1356BEC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1356C8E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE__REGISTERPORTS_B__9_0_OFFSET UNITYSDK_OFFSET(0x1356C920)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1356C9D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1356C9E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMonsterDieCheckNode_TypeDefinitionIndex = 92402;

	class LDMonsterDieCheckNode : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::FlowOutput* Reached; // 0xA8
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::EntitySaveDataMap*>* inputEntityMap; // 0xB0
		::FlowCanvas::FlowOutput* raised; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Boolean>* inputAllDie; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Int32>* inputNumber; // 0xC8
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* inputDeathCheckType; // 0xD0
		::System::Boolean goalReached; // 0xD8
		::System::Boolean bindEvent; // 0xD9
		::System::Boolean nodeEnter; // 0xDA

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_INVOKE_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_BINDEVENT_OFFSET))(this);
		}

		::System::Void UnBindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_UNBINDEVENT_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::ENGKPGFGGLM* evt)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void OnMonsterDie(::System::UInt32 fighterID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_ONMONSTERDIE_OFFSET))(this, fighterID);
		}

		::System::Int32 CheckDieCount(::System::UInt32 deathEntityId)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_CHECKDIECOUNT_OFFSET))(this, deathEntityId);
		}

		::System::Void _RegisterPorts_b__9_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE__REGISTERPORTS_B__9_0_OFFSET))(this, f);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
