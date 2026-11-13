#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/Key.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/KeyCode.h"
namespace InControl { class KeyboardLayoutWatcher; }
namespace System { class Object; }
namespace System { class String; }

#define INCONTROL_UNITYKEYBOARDPROVIDER_ANYKEYISPRESSED_OFFSET UNITYSDK_OFFSET(0xC6ADF60)
#define INCONTROL_UNITYKEYBOARDPROVIDER_CCTOR_OFFSET UNITYSDK_OFFSET(0xC6AE370)
#define INCONTROL_UNITYKEYBOARDPROVIDER_CTOR_OFFSET UNITYSDK_OFFSET(0xC6AE360)
#define INCONTROL_UNITYKEYBOARDPROVIDER_GETKEYBOARDLAYOUTTYPE_OFFSET UNITYSDK_OFFSET(0xC6AE330)
#define INCONTROL_UNITYKEYBOARDPROVIDER_GETKEYISPRESSED_OFFSET UNITYSDK_OFFSET(0xC6ADF70)
#define INCONTROL_UNITYKEYBOARDPROVIDER_GETKEYWASPRESSED_OFFSET UNITYSDK_OFFSET(0xC6AE120)
#define INCONTROL_UNITYKEYBOARDPROVIDER_GETNAMEFORKEY_OFFSET UNITYSDK_OFFSET(0xC6AE050)
#define INCONTROL_UNITYKEYBOARDPROVIDER_GETUINTYKEY_OFFSET UNITYSDK_OFFSET(0xC6AE200)
#define INCONTROL_UNITYKEYBOARDPROVIDER_ONKEYBOARDCHANGED_OFFSET UNITYSDK_OFFSET(0xC6AE270)
#define INCONTROL_UNITYKEYBOARDPROVIDER_RESET_OFFSET UNITYSDK_OFFSET(0xC6ADF40)
#define INCONTROL_UNITYKEYBOARDPROVIDER_SETUP_OFFSET UNITYSDK_OFFSET(0xC6ADE70)
#define INCONTROL_UNITYKEYBOARDPROVIDER_UPDATE_OFFSET UNITYSDK_OFFSET(0xC6ADF50)

namespace InControl
{
	inline static constexpr unsigned int UnityKeyboardProvider_TypeDefinitionIndex = 41833;

	class UnityKeyboardProvider : public ::System::Object
	{
	public:
		static ::InControl::KeyboardLayoutWatcher** StaticGet_LayoutWatcher()
		{
			return (::InControl::KeyboardLayoutWatcher**)UnitySDK::FromName("InControl", "UnityKeyboardProvider")->GetStaticField(0x231B0);
		}

		static ::Il2CppArray<::System::Object*>** StaticGet_FrenchKeyMappings()
		{
			return (::Il2CppArray<::System::Object*>**)UnitySDK::FromName("InControl", "UnityKeyboardProvider")->GetStaticField(0x231B8);
		}

		static ::Il2CppArray<::System::Object*>** StaticGet_GermanKeyMappings()
		{
			return (::Il2CppArray<::System::Object*>**)UnitySDK::FromName("InControl", "UnityKeyboardProvider")->GetStaticField(0x231C0);
		}

		static ::Il2CppArray<::System::Object*>** StaticGet_KeyMappings()
		{
			return (::Il2CppArray<::System::Object*>**)UnitySDK::FromName("InControl", "UnityKeyboardProvider")->GetStaticField(0x231C8);
		}

		static ::Il2CppArray<::System::Object*>** StaticGet__CurrentKeyMappings()
		{
			return (::Il2CppArray<::System::Object*>**)UnitySDK::FromName("InControl", "UnityKeyboardProvider")->GetStaticField(0x231D0);
		}

		static ::System::Int32* StaticGet__CurrentLayout()
		{
			return (::System::Int32*)UnitySDK::FromName("InControl", "UnityKeyboardProvider")->GetStaticField(0x7F00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_CCTOR_OFFSET))();
		}

		::System::Void Setup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_SETUP_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_RESET_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_UPDATE_OFFSET))(this);
		}

		::System::Boolean AnyKeyIsPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_ANYKEYISPRESSED_OFFSET))(this);
		}

		::System::Boolean GetKeyIsPressed(::InControl::Key a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::Key))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_GETKEYISPRESSED_OFFSET))(this, a1);
		}

		::System::String* GetNameForKey(::InControl::Key a1)
		{
			return ((::System::String*(*)(::PVOID, ::InControl::Key))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_GETNAMEFORKEY_OFFSET))(this, a1);
		}

		::System::Boolean GetKeyWasPressed(::InControl::Key a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::Key))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_GETKEYWASPRESSED_OFFSET))(this, a1);
		}

		::UnityEngine::KeyCode GetUintyKey(::InControl::Key a1)
		{
			return ((::UnityEngine::KeyCode(*)(::PVOID, ::InControl::Key))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_GETUINTYKEY_OFFSET))(this, a1);
		}

		::System::Void OnKeyboardChanged(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_ONKEYBOARDCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetKeyboardLayoutType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYKEYBOARDPROVIDER_GETKEYBOARDLAYOUTTYPE_OFFSET))(this);
		}

	};
}
