#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::InputSystem { class InputActionState; }

#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x97A520)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_GET_CONTROLS_OFFSET UNITYSDK_OFFSET(0x97A4C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_READVALUEASBUTTON_OFFSET UNITYSDK_OFFSET(0x97A550)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_READVALUEASOBJECT_OFFSET UNITYSDK_OFFSET(0x97A5E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_READVALUE_4_OFFSET UNITYSDK_OFFSET(0x97A5B0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputBindingCompositeContext_TypeDefinitionIndex = 31650;

	struct alignas(8) InputBindingCompositeContext
	{
		::UnityEngine::InputSystem::InputActionState* m_State; // 0x10
		::System::Int32 m_BindingIndex; // 0x18

		::System::Collections::Generic::IEnumerable_1<::System::Object*>* get_controls()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_GET_CONTROLS_OFFSET))(this);
		}

		::System::Single EvaluateMagnitude(::System::Int32 partNumber)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_EVALUATEMAGNITUDE_OFFSET))(this, partNumber);
		}

		::System::Boolean ReadValueAsButton(::System::Int32 partNumber)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_READVALUEASBUTTON_OFFSET))(this, partNumber);
		}

		::System::Void ReadValue_4(::System::Int32 partNumber, ::PVOID buffer, ::System::Int32 bufferSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_READVALUE_4_OFFSET))(this, partNumber, buffer, bufferSize);
		}

		::System::Object* ReadValueAsObject(::System::Int32 partNumber)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITECONTEXT_READVALUEASOBJECT_OFFSET))(this, partNumber);
		}
	};
}
