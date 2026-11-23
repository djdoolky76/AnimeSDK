#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TapTap::Sdk { class UIElement; }
namespace UnityEngine { class GameObject; }

#define TAPTAP_SDK_UIMANAGER_A885A10C19C54538_OFFSET UNITYSDK_OFFSET(0x3F0FEA0)
#define TAPTAP_SDK_UIMANAGER_B448863962C0ABC5_OFFSET UNITYSDK_OFFSET(0x3F0F660)
#define TAPTAP_SDK_UIMANAGER_BC5599CD80909EE7_OFFSET UNITYSDK_OFFSET(0x3F0FB90)
#define TAPTAP_SDK_UIMANAGER_BF21230FDB86C27C_OFFSET UNITYSDK_OFFSET(0x3F0F9F0)
#define TAPTAP_SDK_UIMANAGER_F49A4C405991CB5B_OFFSET UNITYSDK_OFFSET(0x3F0FEB0)
#define TAPTAP_SDK_UIMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x3F0FF20)
#define TAPTAP_SDK_UIMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x3F0FF90)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int UIManager_TypeDefinitionIndex = 20887;

	class UIManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_E04411A48F23AF5B()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Int32* StaticGet_A2668CE7BC8508FA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x4);
		}
		static ::System::Int32* StaticGet_BF61C84A13C4F908()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Int32* StaticGet_A1A3E9B3A63794B1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIManager_TypeDefinitionIndex)->GetStaticField(0xC);
		}
		::UnityEngine::GameObject* E8FC43D7F666A962; // 0x20
		::System::Collections::Generic::List_1<::TapTap::Sdk::UIElement*>* B3F817886A2E802B; // 0x28

		::System::Void B448863962C0ABC5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIMANAGER_B448863962C0ABC5_OFFSET))(this);
		}

		::System::Void BC5599CD80909EE7(::System::String* A840046D94B72E88)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIMANAGER_BC5599CD80909EE7_OFFSET))(this, A840046D94B72E88);
		}

		::System::Void A885A10C19C54538()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIMANAGER_A885A10C19C54538_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIMANAGER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void BF21230FDB86C27C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIMANAGER_BF21230FDB86C27C_OFFSET))(this);
		}

		::System::Void F49A4C405991CB5B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIMANAGER_F49A4C405991CB5B_OFFSET))(this);
		}
	};
}
