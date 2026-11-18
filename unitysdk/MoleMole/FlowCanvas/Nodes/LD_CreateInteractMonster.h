#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDCreateMonsterSyncNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

class NEFCGMNEJEI_DAGKFKHLNJK;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Config { class InteractEntry; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER_GETINTERACTFLOATPARAM_OFFSET UNITYSDK_OFFSET(0x1041A560)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER_ONEVENT_OFFSET UNITYSDK_OFFSET(0x1041A620)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x10419720)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER_PREPAREINTERACTOBJECTS_OFFSET UNITYSDK_OFFSET(0x1041A320)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10419600)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER_START_INTERACT_OFFSET UNITYSDK_OFFSET(0x10419CA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__CALLMONSTEROUTPUT_OFFSET UNITYSDK_OFFSET(0x10419C40)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1041AC40)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1041AB60)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__ONSUCCESS_OFFSET UNITYSDK_OFFSET(0x1041A930)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__REGISTERINTERACTPORTS_OFFSET UNITYSDK_OFFSET(0x104197A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__REGISTERMONSTERPORTS_OFFSET UNITYSDK_OFFSET(0x10419760)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__REGISTERPORTS_B__1_0_OFFSET UNITYSDK_OFFSET(0x1041AC50)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__START_INTERACT_B__26_0_OFFSET UNITYSDK_OFFSET(0x1041AD30)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__START_INTERACT_B__26_1_OFFSET UNITYSDK_OFFSET(0x1041AD70)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER___BASE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1041AE70)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER___BASE__CALLMONSTEROUTPUT_OFFSET UNITYSDK_OFFSET(0x1041ADB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER___REGISTERINTERACTPORTS_B__24_0_OFFSET UNITYSDK_OFFSET(0x1041AD00)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER___REGISTERINTERACTPORTS_B__24_1_OFFSET UNITYSDK_OFFSET(0x1041AD20)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_CreateInteractMonster_TypeDefinitionIndex = 50011;

	class LD_CreateInteractMonster : public ::MoleMole::FlowCanvas::Nodes::LDCreateMonsterSyncNode
	{
	public:
		static ::System::Int32* StaticGet___InteractIDKEY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LD_CreateInteractMonster_TypeDefinitionIndex)->GetStaticField(0xDB80);
		}
		// static const ::System::Int32 UPDATE_VALUE_MAGIC_NUMBER = 0x699; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::FlowCanvas::FlowOutput*>* _interactMsgDict; // 0xF8
		::FlowCanvas::ValueInput_1<::System::String*>* interactGroupName; // 0x100
		::NEFCGMNEJEI_DAGKFKHLNJK* _interactParam; // 0x108
		::FlowCanvas::FlowOutput* onInteractForbidden; // 0x110
		::System::Collections::Generic::List_1<::System::String*>* abilityNameList; // 0x118
		::MoleMole::Config::InteractEntry* entry; // 0x120
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _overrideAbilityMap; // 0x128
		::FlowCanvas::FlowOutput* onInteract; // 0x130
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* _interactValueDict; // 0x138
		::FlowCanvas::ValueInput_1<::System::String*>* interactTagName; // 0x140
		::System::String* inputInteractKey; // 0x148
		::FlowCanvas::ValueInput_1<::System::Boolean>* isGlobalMonopoly; // 0x150
		::FlowCanvas::FlowOutput* output; // 0x158
		::System::String* _GroupName; // 0x160
		::System::Boolean isBindEvent; // 0x168
		::System::Byte _padding0[0x3];
		::System::Single _lastUpdateResource; // 0x16C
		::System::Int32 _GroupItemID; // 0x170
		::System::Single _InteractStartTime; // 0x174

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__CCTOR_OFFSET))();
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void PrepareData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER_PREPAREDATA_OFFSET))(this);
		}

		::System::Void _RegisterMonsterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__REGISTERMONSTERPORTS_OFFSET))(this);
		}

		::System::Void _CallMonsterOutput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__CALLMONSTEROUTPUT_OFFSET))(this);
		}

		::System::Void _RegisterInteractPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__REGISTERINTERACTPORTS_OFFSET))(this);
		}

		::System::Void PrepareInteractObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER_PREPAREINTERACTOBJECTS_OFFSET))(this);
		}

		::System::Void Start_Interact(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER_START_INTERACT_OFFSET))(this, f);
		}

		::System::Single GetInteractFloatParam(::System::String* key)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER_GETINTERACTFLOATPARAM_OFFSET))(this, key);
		}

		::System::Void OnEvent(::System::UInt32 from, ::System::UInt32 to, ::System::String* msg, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER_ONEVENT_OFFSET))(this, from, to, msg, value);
		}

		::System::Void _OnSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__ONSUCCESS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__1_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__REGISTERPORTS_B__1_0_OFFSET))(this, flow);
		}

		::System::Int32 __RegisterInteractPorts_b__24_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER___REGISTERINTERACTPORTS_B__24_0_OFFSET))(this);
		}

		::NEFCGMNEJEI_DAGKFKHLNJK* __RegisterInteractPorts_b__24_1()
		{
			return ((::NEFCGMNEJEI_DAGKFKHLNJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER___REGISTERINTERACTPORTS_B__24_1_OFFSET))(this);
		}

		::System::Void _Start_Interact_b__26_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__START_INTERACT_B__26_0_OFFSET))(this);
		}

		::System::Void _Start_Interact_b__26_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER__START_INTERACT_B__26_1_OFFSET))(this);
		}

		::System::Void __base__CallMonsterOutput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER___BASE__CALLMONSTEROUTPUT_OFFSET))(this);
		}

		::System::Void __base_RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER___BASE_REGISTERPORTS_OFFSET))(this);
		}
	};
}
