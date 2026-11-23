#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputBinding_A70727AD923BF3E4.h"
#include "unitysdk/UnityEngine/InputSystem/InputBinding_B3DAC0195ED97FB6.h"
#include "unitysdk/UnityEngine/InputSystem/InputBinding_F907B2A1BCEFC788.h"
#include "unitysdk/System/Guid.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3F61BB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_EQUALS_OFFSET UNITYSDK_OFFSET(0x3F61AD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3F61C90)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x17395E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_EFFECTIVEINTERACTIONS_OFFSET UNITYSDK_OFFSET(0x3F62550)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_EFFECTIVEPATH_OFFSET UNITYSDK_OFFSET(0x3F62560)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_EFFECTIVEPROCESSORS_OFFSET UNITYSDK_OFFSET(0x3F62570)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_GROUPS_OFFSET UNITYSDK_OFFSET(0x169C070)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_ID_OFFSET UNITYSDK_OFFSET(0x3F62580)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_INTERACTIONS_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_ISCOMPOSITE_OFFSET UNITYSDK_OFFSET(0x3F625D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_ISPARTOFCOMPOSITE_OFFSET UNITYSDK_OFFSET(0x3F625E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_NAME_OFFSET UNITYSDK_OFFSET(0x184BDF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_OVERRIDEINTERACTIONS_OFFSET UNITYSDK_OFFSET(0x17A62C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_OVERRIDEPATH_OFFSET UNITYSDK_OFFSET(0x18249B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_OVERRIDEPROCESSORS_OFFSET UNITYSDK_OFFSET(0x1685600)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_PATH_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_PROCESSORS_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_MATCHES_1_OFFSET UNITYSDK_OFFSET(0x3F61DC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_MATCHES_OFFSET UNITYSDK_OFFSET(0x3F61DE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x3F625F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_ACTION_OFFSET UNITYSDK_OFFSET(0x1BF9BA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_GROUPS_OFFSET UNITYSDK_OFFSET(0x1962CA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_ID_OFFSET UNITYSDK_OFFSET(0x3F62640)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_INTERACTIONS_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_ISCOMPOSITE_OFFSET UNITYSDK_OFFSET(0x3F62670)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_ISPARTOFCOMPOSITE_OFFSET UNITYSDK_OFFSET(0x3F62690)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_NAME_OFFSET UNITYSDK_OFFSET(0x19FB3C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_OVERRIDEINTERACTIONS_OFFSET UNITYSDK_OFFSET(0x16E1590)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_PATH_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_PROCESSORS_OFFSET UNITYSDK_OFFSET(0x16BD3B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_TODISPLAYSTRING_OFFSET UNITYSDK_OFFSET(0x3F61F80)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3F623C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_TRIGGERSACTION_OFFSET UNITYSDK_OFFSET(0x3F624F0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputBinding_TypeDefinitionIndex = 14260;

	struct alignas(8) InputBinding
	{
		::System::String* m_Name; // 0x10
		::System::String* m_Id; // 0x18
		::System::String* m_Path; // 0x20
		::System::String* m_Interactions; // 0x28
		::System::String* m_Processors; // 0x30
		::System::String* m_Groups; // 0x38
		::System::String* m_Action; // 0x40
		::UnityEngine::InputSystem::InputBinding_A70727AD923BF3E4 m_Flags; // 0x48
		::System::Byte _padding0[0x4];
		::System::String* m_OverridePath; // 0x50
		::System::String* m_OverrideInteractions; // 0x58
		::System::String* m_OverrideProcessors; // 0x60

		::System::String* get_action()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_ACTION_OFFSET))(this);
		}

		::System::String* get_effectiveProcessors()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_EFFECTIVEPROCESSORS_OFFSET))(this);
		}

		::System::String* get_processors()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_PROCESSORS_OFFSET))(this);
		}

		::System::Void set_isPartOfComposite(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_ISPARTOFCOMPOSITE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_overrideInteractions(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_OVERRIDEINTERACTIONS_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Boolean get_isPartOfComposite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_ISPARTOFCOMPOSITE_OFFSET))(this);
		}

		::System::String* get_effectivePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_EFFECTIVEPATH_OFFSET))(this);
		}

		/*
		static ::System::Boolean op_Equality(::UnityEngine::InputSystem::InputBinding A11D4EC92205DAEE, ::UnityEngine::InputSystem::InputBinding F38046B0C91E49B1)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::InputBinding, ::UnityEngine::InputSystem::InputBinding))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_OP_EQUALITY_OFFSET))(A11D4EC92205DAEE, F38046B0C91E49B1);
		}
		*/

		::System::Void set_processors(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_PROCESSORS_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_isComposite(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_ISCOMPOSITE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::String* get_groups()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_GROUPS_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GETHASHCODE_OFFSET))(this);
		}

		::System::String* get_overrideProcessors()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_OVERRIDEPROCESSORS_OFFSET))(this);
		}

		::System::Void set_path(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_PATH_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Boolean Equals(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_EQUALS_OFFSET))(this, A86A90C31A146E9C);
		}

		::System::String* get_effectiveInteractions()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_EFFECTIVEINTERACTIONS_OFFSET))(this);
		}

		::System::String* get_path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_PATH_OFFSET))(this);
		}

		::System::String* get_overrideInteractions()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_OVERRIDEINTERACTIONS_OFFSET))(this);
		}

		::System::Guid get_id()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_ID_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean Matches(::UnityEngine::InputSystem::InputBinding& F14B4FF9E6D09320, ::UnityEngine::InputSystem::InputBinding_F907B2A1BCEFC788 FADED64AD3E99C03)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputBinding&, ::UnityEngine::InputSystem::InputBinding_F907B2A1BCEFC788))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_MATCHES_OFFSET))(this, F14B4FF9E6D09320, FADED64AD3E99C03);
		}
		*/

		::System::Void set_id(::System::Guid E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_ID_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_interactions(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_INTERACTIONS_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_name(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_NAME_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_NAME_OFFSET))(this);
		}

		::System::Boolean get_isComposite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_ISCOMPOSITE_OFFSET))(this);
		}

		::System::Boolean TriggersAction(::UnityEngine::InputSystem::InputAction* BC288918C940C7A6)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_TRIGGERSACTION_OFFSET))(this, BC288918C940C7A6);
		}

		/*
		::System::Boolean Matches_1(::UnityEngine::InputSystem::InputBinding F14B4FF9E6D09320)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputBinding))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_MATCHES_1_OFFSET))(this, F14B4FF9E6D09320);
		}
		*/

		/*
		::System::Boolean Equals_1(::UnityEngine::InputSystem::InputBinding BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputBinding))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_EQUALS_1_OFFSET))(this, BEEE7A5A60941632);
		}
		*/

		::System::String* get_interactions()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_INTERACTIONS_OFFSET))(this);
		}

		::System::Void set_groups(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_GROUPS_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_action(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_ACTION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::String* ToDisplayString(::System::String*& A6DF35433337B6DF, ::System::String*& AD735A62659B5116, ::UnityEngine::InputSystem::InputBinding_B3DAC0195ED97FB6 FADED64AD3E99C03, ::UnityEngine::InputSystem::InputControl* B35325D9541AD934)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*&, ::System::String*&, ::UnityEngine::InputSystem::InputBinding_B3DAC0195ED97FB6, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_TODISPLAYSTRING_OFFSET))(this, A6DF35433337B6DF, AD735A62659B5116, FADED64AD3E99C03, B35325D9541AD934);
		}

		::System::String* get_overridePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_OVERRIDEPATH_OFFSET))(this);
		}
	};
}
