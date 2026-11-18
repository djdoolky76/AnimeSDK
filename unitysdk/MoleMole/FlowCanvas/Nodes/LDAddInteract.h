#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Nullable_1.h"

class NEFCGMNEJEI_DAGKFKHLNJK;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class InteractEntry; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDADDINTERACT_GETINTERACTFLOATPARAM_OFFSET UNITYSDK_OFFSET(0x1A8E53B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDADDINTERACT_ONEVENT_OFFSET UNITYSDK_OFFSET(0x1A8E5470)
#define MOLEMOLE_FLOWCANVAS_NODES_LDADDINTERACT_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x1A8E5130)
#define MOLEMOLE_FLOWCANVAS_NODES_LDADDINTERACT_PREPAREINTERACTOBJECTS_OFFSET UNITYSDK_OFFSET(0x1A8E5170)
#define MOLEMOLE_FLOWCANVAS_NODES_LDADDINTERACT_PROCESSINTERACTCNT_OFFSET UNITYSDK_OFFSET(0x1A8E63C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDADDINTERACT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A8E4B80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDADDINTERACT_START_INTERACT_OFFSET UNITYSDK_OFFSET(0x1A8E5A60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDADDINTERACT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A8E66B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDADDINTERACT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8E6630)
#define MOLEMOLE_FLOWCANVAS_NODES_LDADDINTERACT__ONSUCCESS_OFFSET UNITYSDK_OFFSET(0x1A8E5780)
#define MOLEMOLE_FLOWCANVAS_NODES_LDADDINTERACT__REGISTERPORTS_B__23_0_OFFSET UNITYSDK_OFFSET(0x1A8E66C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDADDINTERACT__REGISTERPORTS_B__23_1_OFFSET UNITYSDK_OFFSET(0x1A8E6730)
#define MOLEMOLE_FLOWCANVAS_NODES_LDADDINTERACT__REGISTERPORTS_B__23_2_OFFSET UNITYSDK_OFFSET(0x1A8E67D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDADDINTERACT__START_INTERACT_B__29_0_OFFSET UNITYSDK_OFFSET(0x1A8E67E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDADDINTERACT__START_INTERACT_B__29_1_OFFSET UNITYSDK_OFFSET(0x1A8E6820)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDAddInteract_TypeDefinitionIndex = 46605;

	class LDAddInteract : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		static ::System::Int32* StaticGet___InteractIDKEY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LDAddInteract_TypeDefinitionIndex)->GetStaticField(0x12940);
		}
		// static const ::System::Int32 UPDATE_VALUE_MAGIC_NUMBER = 0x699; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::FlowCanvas::FlowOutput*>* _interactMsgDict; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Int32>* _overrideInteractionCnt; // 0xB0
		::FlowCanvas::ValueInput_1<::System::String*>* interactGroupName; // 0xB8
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* ownerEntity; // 0xC0
		::System::String* usingKey; // 0xC8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* _interactValueDict; // 0xD0
		::System::String* _GroupName; // 0xD8
		::FlowCanvas::ValueInput_1<::System::String*>* dynamicInputInteractKey; // 0xE0
		::FlowCanvas::FlowOutput* onInteractForbidden; // 0xE8
		::NEFCGMNEJEI_DAGKFKHLNJK* _interactParam; // 0xF0
		::System::String* inputInteractKey; // 0xF8
		::FlowCanvas::FlowOutput* output; // 0x100
		::FlowCanvas::ValueInput_1<::System::Boolean>* isGlobalMonopoly; // 0x108
		::FlowCanvas::ValueInput_1<::System::String*>* interactTagName; // 0x110
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _overrideAbilityMap; // 0x118
		::FlowCanvas::FlowOutput* onInteract; // 0x120
		::MoleMole::Config::InteractEntry* entry; // 0x128
		::System::Single _InteractStartTime; // 0x130
		::System::Single _lastUpdateResource; // 0x134
		::System::Int32 _GroupItemID; // 0x138
		::System::Boolean isBindEvent; // 0x13C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDADDINTERACT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDADDINTERACT__CCTOR_OFFSET))();
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDADDINTERACT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void PrepareData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDADDINTERACT_PREPAREDATA_OFFSET))(this);
		}

		::System::Void PrepareInteractObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDADDINTERACT_PREPAREINTERACTOBJECTS_OFFSET))(this);
		}

		::System::Single GetInteractFloatParam(::System::String* key)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDADDINTERACT_GETINTERACTFLOATPARAM_OFFSET))(this, key);
		}

		::System::Void OnEvent(::System::UInt32 from, ::System::UInt32 to, ::System::String* msg, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDADDINTERACT_ONEVENT_OFFSET))(this, from, to, msg, value);
		}

		::System::Void _OnSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDADDINTERACT__ONSUCCESS_OFFSET))(this);
		}

		::System::Void Start_Interact(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDADDINTERACT_START_INTERACT_OFFSET))(this, f);
		}

		::System::Nullable_1<::System::Int32> ProcessInteractCnt()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDADDINTERACT_PROCESSINTERACTCNT_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__23_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDADDINTERACT__REGISTERPORTS_B__23_0_OFFSET))(this, f);
		}

		::System::Int32 _RegisterPorts_b__23_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDADDINTERACT__REGISTERPORTS_B__23_1_OFFSET))(this);
		}

		::NEFCGMNEJEI_DAGKFKHLNJK* _RegisterPorts_b__23_2()
		{
			return ((::NEFCGMNEJEI_DAGKFKHLNJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDADDINTERACT__REGISTERPORTS_B__23_2_OFFSET))(this);
		}

		::System::Void _Start_Interact_b__29_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDADDINTERACT__START_INTERACT_B__29_0_OFFSET))(this);
		}

		::System::Void _Start_Interact_b__29_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDADDINTERACT__START_INTERACT_B__29_1_OFFSET))(this);
		}
	};
}
