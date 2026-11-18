#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"

#define UNITYENGINE_INPUTSYSTEM_COMMONUSAGES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFE4D70)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int CommonUsages_TypeDefinitionIndex = 31672;

	class CommonUsages : public ::System::Object
	{
	public:
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_SecondaryAction()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x28AC0);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Orientation()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x28AD0);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_PrimaryAction()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x28AE0);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Modifier()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x28AF0);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_PrimaryTrigger()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x28B00);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Point()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x28B10);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_HighFreqMotor()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x28B20);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Horizontal()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x28B30);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_ScrollVertical()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x28B40);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Vertical()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x28B50);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_SecondaryTrigger()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x28B60);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Pressure()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x28B70);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Cancel()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x28B80);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Forward()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x28B90);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Twist()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x28BA0);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_RightHand()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x28BB0);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Primary2DMotion()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x28BC0);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Secondary2DMotion()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x28BD0);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_LeftHand()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x28BE0);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Submit()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x28BF0);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_ScrollHorizontal()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x28C00);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Menu()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x28C10);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Back()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x28C20);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_LowFreqMotor()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x28C30);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Hatswitch()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x28C40);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Position()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x28C50);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_BatteryStrength()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x28C60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMMONUSAGES__CCTOR_OFFSET))();
		}
	};
}
