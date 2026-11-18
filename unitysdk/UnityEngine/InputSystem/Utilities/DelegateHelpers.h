#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/CallbackArray_1.h"

namespace System { class Action; }
namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_DELEGATEHELPERS_INVOKECALLBACKSSAFE_OFFSET UNITYSDK_OFFSET(0x1EA07790)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int DelegateHelpers_TypeDefinitionIndex = 32112;

	class DelegateHelpers : public ::System::Object
	{
	public:
		static ::System::Void InvokeCallbacksSafe(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>& callbacks, ::System::String* callbackName, ::System::Object* context)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*>&, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_DELEGATEHELPERS_INVOKECALLBACKSSAFE_OFFSET))(callbacks, callbackName, context);
		}
	};
}
