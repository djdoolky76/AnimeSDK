#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/NameAndParameters.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/NamedValue.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F570900)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F570940)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON___C__FROMCONTROLITEMS_B__25_0_OFFSET UNITYSDK_OFFSET(0x1F570990)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON___C__FROMCONTROLITEMS_B__25_1_OFFSET UNITYSDK_OFFSET(0x1F570A20)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON___C__FROMCONTROLITEMS_B__25_2_OFFSET UNITYSDK_OFFSET(0x1F570A30)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON___C__FROMCONTROLITEMS_B__25_3_OFFSET UNITYSDK_OFFSET(0x1F570A50)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON___C__TOLAYOUT_B__24_0_OFFSET UNITYSDK_OFFSET(0x1F570950)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON___C__TOLAYOUT_B__24_1_OFFSET UNITYSDK_OFFSET(0x1F570970)

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputControlLayout_ControlItemJson___c_TypeDefinitionIndex = 32056;

	class InputControlLayout_ControlItemJson___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::String*>** StaticGet___9__25_2()
		{
			return (::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(InputControlLayout_ControlItemJson___c_TypeDefinitionIndex)->GetStaticField(0x284B0);
		}
		static ::System::Func_2<::System::String*, ::UnityEngine::InputSystem::Utilities::InternedString>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::System::String*, ::UnityEngine::InputSystem::Utilities::InternedString>**)Il2CppClass::FromTypeDefinitionIndex(InputControlLayout_ControlItemJson___c_TypeDefinitionIndex)->GetStaticField(0x284B8);
		}
		static ::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue, ::System::String*>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(InputControlLayout_ControlItemJson___c_TypeDefinitionIndex)->GetStaticField(0x284C0);
		}
		static ::System::Func_2<::UnityEngine::InputSystem::Utilities::NameAndParameters, ::System::String*>** StaticGet___9__25_1()
		{
			return (::System::Func_2<::UnityEngine::InputSystem::Utilities::NameAndParameters, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(InputControlLayout_ControlItemJson___c_TypeDefinitionIndex)->GetStaticField(0x284C8);
		}
		static ::System::Func_2<::System::String*, ::UnityEngine::InputSystem::Utilities::InternedString>** StaticGet___9__24_1()
		{
			return (::System::Func_2<::System::String*, ::UnityEngine::InputSystem::Utilities::InternedString>**)Il2CppClass::FromTypeDefinitionIndex(InputControlLayout_ControlItemJson___c_TypeDefinitionIndex)->GetStaticField(0x284D0);
		}
		static ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::String*>** StaticGet___9__25_3()
		{
			return (::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(InputControlLayout_ControlItemJson___c_TypeDefinitionIndex)->GetStaticField(0x284D8);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(InputControlLayout_ControlItemJson___c_TypeDefinitionIndex)->GetStaticField(0x284E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::InternedString _ToLayout_b__24_0(::System::String* x)
		{
			return ((::UnityEngine::InputSystem::Utilities::InternedString(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON___C__TOLAYOUT_B__24_0_OFFSET))(this, x);
		}

		::UnityEngine::InputSystem::Utilities::InternedString _ToLayout_b__24_1(::System::String* x)
		{
			return ((::UnityEngine::InputSystem::Utilities::InternedString(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON___C__TOLAYOUT_B__24_1_OFFSET))(this, x);
		}

		::System::String* _FromControlItems_b__25_0(::UnityEngine::InputSystem::Utilities::NamedValue x)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::NamedValue))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON___C__FROMCONTROLITEMS_B__25_0_OFFSET))(this, x);
		}

		::System::String* _FromControlItems_b__25_1(::UnityEngine::InputSystem::Utilities::NameAndParameters x)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::NameAndParameters))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON___C__FROMCONTROLITEMS_B__25_1_OFFSET))(this, x);
		}

		::System::String* _FromControlItems_b__25_2(::UnityEngine::InputSystem::Utilities::InternedString x)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON___C__FROMCONTROLITEMS_B__25_2_OFFSET))(this, x);
		}

		::System::String* _FromControlItems_b__25_3(::UnityEngine::InputSystem::Utilities::InternedString x)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON___C__FROMCONTROLITEMS_B__25_3_OFFSET))(this, x);
		}
	};
}
