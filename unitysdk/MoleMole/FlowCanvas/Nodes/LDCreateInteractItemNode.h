#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_BINDEVENT_OFFSET UNITYSDK_OFFSET(0x1244B4C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_ENTITYONREADY_OFFSET UNITYSDK_OFFSET(0x1244B410)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_ONEVENT_OFFSET UNITYSDK_OFFSET(0x1244B820)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1244B470)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1244B640)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x1244AEB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_PREPAREINTERACTMSG_OFFSET UNITYSDK_OFFSET(0x1244AEF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_PREPAREINTERACTVALUE_OFFSET UNITYSDK_OFFSET(0x1244B050)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1244A990)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_TRYCREATEINTERACT_OFFSET UNITYSDK_OFFSET(0x1244B1B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_UNBINDEVENT_OFFSET UNITYSDK_OFFSET(0x1244B690)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1244BA10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE__REGISTERPORTS_B__11_0_OFFSET UNITYSDK_OFFSET(0x1244BA50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE__REGISTERPORTS_B__11_1_OFFSET UNITYSDK_OFFSET(0x1244BA90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1244BAA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1244BAB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCreateInteractItemNode_TypeDefinitionIndex = 76139;

	class LDCreateInteractItemNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::String* inputSpawnPoint; // 0xA8
		::FlowCanvas::ValueOutput_1<::MoleMole::Battle::Entity*>* entityOutPut; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::FlowCanvas::FlowOutput*>* _interactMsgDict; // 0xB8
		::System::String* inputInteractKey; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _overrideAbilityMap; // 0xC8
		::MoleMole::Battle::Entity* createEntity; // 0xD0
		::FlowCanvas::FlowOutput* output; // 0xD8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* _interactValueDict; // 0xE0
		::System::Boolean isWaitingEntityReady; // 0xE8
		::System::Boolean isBindEvent; // 0xE9
		::System::Byte _padding0[0x2];
		::System::Int32 inputInteractItemID; // 0xEC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void TryCreateInteract(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_TRYCREATEINTERACT_OFFSET))(this, f);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void EntityOnReady(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_ENTITYONREADY_OFFSET))(this, entity);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_BINDEVENT_OFFSET))(this);
		}

		::System::Void UnBindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_UNBINDEVENT_OFFSET))(this);
		}

		::System::Void OnEvent(::System::String* msg, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_ONEVENT_OFFSET))(this, msg, value);
		}

		::System::Void PrepareInteractMsg()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_PREPAREINTERACTMSG_OFFSET))(this);
		}

		::System::Void PrepareInteractValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_PREPAREINTERACTVALUE_OFFSET))(this);
		}

		::System::Void PrepareData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE_PREPAREDATA_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__11_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE__REGISTERPORTS_B__11_0_OFFSET))(this, f);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__11_1()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE__REGISTERPORTS_B__11_1_OFFSET))(this);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEINTERACTITEMNODE___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
