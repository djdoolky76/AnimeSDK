#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFELGAIGHAP.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
#include "unitysdk/KPHINJGCEAO.h"
class EEJNNOAEEFO;
class KFELGAIGHAP;
class LPNPMKNMMOK;
class PCIHDBPNDEC;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SequenceConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AA036B0)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_CTOR_OFFSET UNITYSDK_OFFSET(0x1AA05D70)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A9F4FF0)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1AA037F0)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_GET_EXECUTEPREDICATE_OFFSET UNITYSDK_OFFSET(0x1AA05F80)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_GET_MODIFIER_OFFSET UNITYSDK_OFFSET(0x1AA05ED0)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_GET_NEXT_OFFSET UNITYSDK_OFFSET(0x1AA05F10)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_GET_OWNERREF_OFFSET UNITYSDK_OFFSET(0x1AA05EE0)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_GET_PREV_OFFSET UNITYSDK_OFFSET(0x1AA05EF0)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1AA05F30)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_RPG_ILINKABLENODE_RPG_GAMECORE_IDOTTURNBASEDMODIFIEREVENTPROCESSOR__GET_NEXT_OFFSET UNITYSDK_OFFSET(0x1AA05F60)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_RPG_ILINKABLENODE_RPG_GAMECORE_IDOTTURNBASEDMODIFIEREVENTPROCESSOR__GET_PREV_OFFSET UNITYSDK_OFFSET(0x1AA05F40)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_RPG_ILINKABLENODE_RPG_GAMECORE_IDOTTURNBASEDMODIFIEREVENTPROCESSOR__SET_NEXT_OFFSET UNITYSDK_OFFSET(0x1AA05F70)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_RPG_ILINKABLENODE_RPG_GAMECORE_IDOTTURNBASEDMODIFIEREVENTPROCESSOR__SET_PREV_OFFSET UNITYSDK_OFFSET(0x1AA05F50)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_SET_EXECUTEPREDICATE_OFFSET UNITYSDK_OFFSET(0x1AA05F90)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_SET_NEXT_OFFSET UNITYSDK_OFFSET(0x1AA05F20)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_SET_PREV_OFFSET UNITYSDK_OFFSET(0x1AA05F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedModifierInstance_ModifierSequenceComposite_TypeDefinitionIndex = 56014;

	class TurnBasedModifierInstance_ModifierSequenceComposite : public ::KFELGAIGHAP
	{
	public:
		::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>* _TaskConfig; // 0x30
		::PCIHDBPNDEC* _RPG_ILinkableNode_RPG_GameCore_IDotTurnBasedModifierEventProcessor__Prev_k__BackingField; // 0x38
		::EEJNNOAEEFO* _Prev_k__BackingField; // 0x40
		::PCIHDBPNDEC* _RPG_ILinkableNode_RPG_GameCore_IDotTurnBasedModifierEventProcessor__Next_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::KFELGAIGHAP*>* _RecallSeqs; // 0x50
		::EEJNNOAEEFO* _Next_k__BackingField; // 0x58
		::RPG::GameCore::TurnBasedModifierInstance* _ModifierInst; // 0x60
		::System::Func_3<::RPG::GameCore::TurnBasedModifierInstance*, ::LPNPMKNMMOK*, ::System::Boolean>* _ExecutePredicate_k__BackingField; // 0x68
		::RPG::GameCore::GameEntity* _OwnerRef; // 0x70
		::System::Int32 _CallCount; // 0x78
		::System::Boolean _CanRecall; // 0x7C
		::System::Boolean _IsGlobalEvent; // 0x7D
		::System::Byte _padding0[0x2];
		::RPG::GameCore::TurnBasedModifierEvent _CurEventType; // 0x80
		::System::Int32 _Priority; // 0x84
		::System::Void _ctor(::RPG::GameCore::TurnBasedModifierInstance* a1, ::System::Boolean a2, ::RPG::GameCore::TaskContext* a3, ::RPG::GameCore::SequenceConfig* a4, ::RPG::GameCore::TurnBasedModifierEvent a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SequenceConfig*, ::RPG::GameCore::TurnBasedModifierEvent, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _ctor_1(::RPG::GameCore::TurnBasedModifierInstance* a1, ::System::Boolean a2, ::RPG::GameCore::TaskContext* a3, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>* a4, ::RPG::GameCore::TurnBasedModifierEvent a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>*, ::RPG::GameCore::TurnBasedModifierEvent, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::TurnBasedModifierInstance* get_Modifier()
		{
			return ((::RPG::GameCore::TurnBasedModifierInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_GET_MODIFIER_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_OwnerRef()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_GET_OWNERREF_OFFSET))(this);
		}

		::EEJNNOAEEFO* get_Prev()
		{
			return ((::EEJNNOAEEFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_GET_PREV_OFFSET))(this);
		}

		::System::Void set_Prev(::EEJNNOAEEFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEJNNOAEEFO*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_SET_PREV_OFFSET))(this, a1);
		}

		::EEJNNOAEEFO* get_Next()
		{
			return ((::EEJNNOAEEFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_GET_NEXT_OFFSET))(this);
		}

		::System::Void set_Next(::EEJNNOAEEFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEJNNOAEEFO*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_SET_NEXT_OFFSET))(this, a1);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_GET_PRIORITY_OFFSET))(this);
		}

		::PCIHDBPNDEC* RPG_ILinkableNode_RPG_GameCore_IDotTurnBasedModifierEventProcessor__get_Prev()
		{
			return ((::PCIHDBPNDEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_RPG_ILINKABLENODE_RPG_GAMECORE_IDOTTURNBASEDMODIFIEREVENTPROCESSOR__GET_PREV_OFFSET))(this);
		}

		::System::Void RPG_ILinkableNode_RPG_GameCore_IDotTurnBasedModifierEventProcessor__set_Prev(::PCIHDBPNDEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCIHDBPNDEC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_RPG_ILINKABLENODE_RPG_GAMECORE_IDOTTURNBASEDMODIFIEREVENTPROCESSOR__SET_PREV_OFFSET))(this, a1);
		}

		::PCIHDBPNDEC* RPG_ILinkableNode_RPG_GameCore_IDotTurnBasedModifierEventProcessor__get_Next()
		{
			return ((::PCIHDBPNDEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_RPG_ILINKABLENODE_RPG_GAMECORE_IDOTTURNBASEDMODIFIEREVENTPROCESSOR__GET_NEXT_OFFSET))(this);
		}

		::System::Void RPG_ILinkableNode_RPG_GameCore_IDotTurnBasedModifierEventProcessor__set_Next(::PCIHDBPNDEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCIHDBPNDEC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_RPG_ILINKABLENODE_RPG_GAMECORE_IDOTTURNBASEDMODIFIEREVENTPROCESSOR__SET_NEXT_OFFSET))(this, a1);
		}

		::System::Func_3<::RPG::GameCore::TurnBasedModifierInstance*, ::LPNPMKNMMOK*, ::System::Boolean>* get_ExecutePredicate()
		{
			return ((::System::Func_3<::RPG::GameCore::TurnBasedModifierInstance*, ::LPNPMKNMMOK*, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_GET_EXECUTEPREDICATE_OFFSET))(this);
		}

		::System::Void set_ExecutePredicate(::System::Func_3<::RPG::GameCore::TurnBasedModifierInstance*, ::LPNPMKNMMOK*, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_3<::RPG::GameCore::TurnBasedModifierInstance*, ::LPNPMKNMMOK*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_SET_EXECUTEPREDICATE_OFFSET))(this, a1);
		}

		::System::Void Execute(::KPHINJGCEAO a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPHINJGCEAO))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_MODIFIERSEQUENCECOMPOSITE_EXECUTE_OFFSET))(this, a1);
		}

	};
}
