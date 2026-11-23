#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EFDFD8D59E1B8215_B2E35AC2C638E7C5.h"
#include "unitysdk/UnityEngine/InputSystem/HID/HID_HIDElementDescriptor.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class E891BA3236FD13E7; }

#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDLAYOUTBUILDER_F5628F8349D4A8A6_A04DD79FF52A6488_OFFSET UNITYSDK_OFFSET(0x40203B0)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDLAYOUTBUILDER_F5628F8349D4A8A6_E8B97FA2F8E3BBDE_OFFSET UNITYSDK_OFFSET(0x4020390)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDLAYOUTBUILDER_F5628F8349D4A8A6_EFFBF43967257C65_OFFSET UNITYSDK_OFFSET(0x4020370)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDLAYOUTBUILDER_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x40203F0)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDLAYOUTBUILDER_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::InputSystem::HID
{
	inline static constexpr unsigned int HID_HIDLayoutBuilder_F5628F8349D4A8A6_TypeDefinitionIndex = 14572;

	class HID_HIDLayoutBuilder_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(HID_HIDLayoutBuilder_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::E891BA3236FD13E7<::System::Object*>** StaticGet_B8CA52E4DE85C79A()
		{
			return (::System::E891BA3236FD13E7<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(HID_HIDLayoutBuilder_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::E891BA3236FD13E7<::System::Object*>** StaticGet_AE9C5ABBADFAED14()
		{
			return (::System::E891BA3236FD13E7<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(HID_HIDLayoutBuilder_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::System::Func_2<::System::Object*, ::System::String*>** StaticGet_ED33558639C36859()
		{
			return (::System::Func_2<::System::Object*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HID_HIDLayoutBuilder_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDLAYOUTBUILDER_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDLAYOUTBUILDER_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Boolean EFFBF43967257C65(::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor FDA7979CE82824CB)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDLAYOUTBUILDER_F5628F8349D4A8A6_EFFBF43967257C65_OFFSET))(this, FDA7979CE82824CB);
		}

		::System::Boolean E8B97FA2F8E3BBDE(::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor FDA7979CE82824CB)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDLAYOUTBUILDER_F5628F8349D4A8A6_E8B97FA2F8E3BBDE_OFFSET))(this, FDA7979CE82824CB);
		}

		::System::String* A04DD79FF52A6488(::EFDFD8D59E1B8215_B2E35AC2C638E7C5 BB8C609F76620E45)
		{
			return ((::System::String*(*)(::PVOID, ::EFDFD8D59E1B8215_B2E35AC2C638E7C5))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDLAYOUTBUILDER_F5628F8349D4A8A6_A04DD79FF52A6488_OFFSET))(this, BB8C609F76620E45);
		}
	};
}
