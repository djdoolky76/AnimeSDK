#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/TypeTable.h"
#include "unitysdk/UnityEngine/InputSystem/InputBindingCompositeContext.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_CALLFINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1F5ED2D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1F5ED2B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1F5ED2C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_GETDISPLAYFORMATSTRING_OFFSET UNITYSDK_OFFSET(0x1F5ED520)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_GETEXPECTEDCONTROLLAYOUTNAME_OFFSET UNITYSDK_OFFSET(0x1F5ED3A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_GETPARTNAMES_OFFSET UNITYSDK_OFFSET(0x1F5ED4C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_GETVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1F5ED2E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5ED5C0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputBindingComposite_TypeDefinitionIndex = 31647;

	class InputBindingComposite : public ::System::Object
	{
	public:
		static ::UnityEngine::InputSystem::Utilities::TypeTable* StaticGet_s_Composites()
		{
			return (::UnityEngine::InputSystem::Utilities::TypeTable*)Il2CppClass::FromTypeDefinitionIndex(InputBindingComposite_TypeDefinitionIndex)->GetStaticField(0x28C70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE__CTOR_OFFSET))(this);
		}

		::System::Single EvaluateMagnitude(::UnityEngine::InputSystem::InputBindingCompositeContext& context)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::InputSystem::InputBindingCompositeContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_EVALUATEMAGNITUDE_OFFSET))(this, context);
		}

		::System::Void FinishSetup(::UnityEngine::InputSystem::InputBindingCompositeContext& context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputBindingCompositeContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_FINISHSETUP_OFFSET))(this, context);
		}

		::System::Void CallFinishSetup(::UnityEngine::InputSystem::InputBindingCompositeContext& context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputBindingCompositeContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_CALLFINISHSETUP_OFFSET))(this, context);
		}

		static ::System::Type* GetValueType(::System::String* composite)
		{
			return ((::System::Type*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_GETVALUETYPE_OFFSET))(composite);
		}

		static ::System::String* GetExpectedControlLayoutName(::System::String* composite, ::System::String* part)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_GETEXPECTEDCONTROLLAYOUTNAME_OFFSET))(composite, part);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* GetPartNames(::System::String* composite)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_GETPARTNAMES_OFFSET))(composite);
		}

		static ::System::String* GetDisplayFormatString(::System::String* composite)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_GETDISPLAYFORMATSTRING_OFFSET))(composite);
		}
	};
}
