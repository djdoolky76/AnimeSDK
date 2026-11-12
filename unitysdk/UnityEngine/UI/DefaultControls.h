#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/UI/DefaultControls_Resources.h"
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class DefaultControls_IFactoryControls; }
namespace UnityEngine::UI { class Selectable; }
namespace UnityEngine::UI { class Text; }

#define UNITYENGINE_UI_DEFAULTCONTROLS_CCTOR_OFFSET UNITYSDK_OFFSET(0x2079FA50)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATEBUTTON_OFFSET UNITYSDK_OFFSET(0x20798540)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATEDROPDOWN_OFFSET UNITYSDK_OFFSET(0x2079C370)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATEIMAGE_OFFSET UNITYSDK_OFFSET(0x20798D90)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATEINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x2079B2F0)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATEPANEL_OFFSET UNITYSDK_OFFSET(0x20797FD0)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATERAWIMAGE_OFFSET UNITYSDK_OFFSET(0x20798EA0)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATESCROLLBAR_OFFSET UNITYSDK_OFFSET(0x20799E10)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATESCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x2079EC20)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATESLIDER_OFFSET UNITYSDK_OFFSET(0x20798FB0)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATETEXT_OFFSET UNITYSDK_OFFSET(0x20798B70)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATETOGGLE_OFFSET UNITYSDK_OFFSET(0x2079A640)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATEUIELEMENTROOT_OFFSET UNITYSDK_OFFSET(0x20797830)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATEUIOBJECT_OFFSET UNITYSDK_OFFSET(0x20797AA0)
#define UNITYENGINE_UI_DEFAULTCONTROLS_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0x207977D0)
#define UNITYENGINE_UI_DEFAULTCONTROLS_SETDEFAULTCOLORTRANSITIONVALUES_OFFSET UNITYSDK_OFFSET(0x20797EC0)
#define UNITYENGINE_UI_DEFAULTCONTROLS_SETDEFAULTTEXTVALUES_OFFSET UNITYSDK_OFFSET(0x20797CC0)
#define UNITYENGINE_UI_DEFAULTCONTROLS_SETLAYERRECURSIVELY_OFFSET UNITYSDK_OFFSET(0x20797EE0)
#define UNITYENGINE_UI_DEFAULTCONTROLS_SETPARENTANDALIGN_OFFSET UNITYSDK_OFFSET(0x20797C10)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int DefaultControls_TypeDefinitionIndex = 6714;

	class DefaultControls : public ::System::Object
	{
	public:
		static ::UnityEngine::UI::DefaultControls_IFactoryControls** StaticGet_m_CurrentFactory()
		{
			return (::UnityEngine::UI::DefaultControls_IFactoryControls**)UnitySDK::FromName("UnityEngine.UI", "DefaultControls")->GetStaticField(0x393E0);
		}

		static ::UnityEngine::Color* StaticGet_s_PanelColor()
		{
			return (::UnityEngine::Color*)UnitySDK::FromName("UnityEngine.UI", "DefaultControls")->GetStaticField(0xC810);
		}

		static ::UnityEngine::Vector2* StaticGet_s_ImageElementSize()
		{
			return (::UnityEngine::Vector2*)UnitySDK::FromName("UnityEngine.UI", "DefaultControls")->GetStaticField(0xC820);
		}

		static ::UnityEngine::Color* StaticGet_s_TextColor()
		{
			return (::UnityEngine::Color*)UnitySDK::FromName("UnityEngine.UI", "DefaultControls")->GetStaticField(0xC828);
		}

		static ::UnityEngine::Color* StaticGet_s_DefaultSelectableColor()
		{
			return (::UnityEngine::Color*)UnitySDK::FromName("UnityEngine.UI", "DefaultControls")->GetStaticField(0xC838);
		}

		static ::UnityEngine::Vector2* StaticGet_s_ThickElementSize()
		{
			return (::UnityEngine::Vector2*)UnitySDK::FromName("UnityEngine.UI", "DefaultControls")->GetStaticField(0xC848);
		}

		static ::UnityEngine::Vector2* StaticGet_s_ThinElementSize()
		{
			return (::UnityEngine::Vector2*)UnitySDK::FromName("UnityEngine.UI", "DefaultControls")->GetStaticField(0xC850);
		}

		// static const ::System::Object kWidth; // 0x0
		// static const ::System::Object kThickHeight; // 0x0
		// static const ::System::Object kThinHeight; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CCTOR_OFFSET))();
		}

		static ::UnityEngine::UI::DefaultControls_IFactoryControls* get_factory()
		{
			return ((::UnityEngine::UI::DefaultControls_IFactoryControls*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_GET_FACTORY_OFFSET))();
		}

		static ::UnityEngine::GameObject* CreateUIElementRoot(::System::String* a1, ::UnityEngine::Vector2 a2, ::Il2CppArray<::System::Type*>* a3)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::Vector2, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATEUIELEMENTROOT_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::GameObject* CreateUIObject(::System::String* a1, ::UnityEngine::GameObject* a2, ::Il2CppArray<::System::Type*>* a3)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::GameObject*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATEUIOBJECT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetDefaultTextValues(::UnityEngine::UI::Text* a1)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_SETDEFAULTTEXTVALUES_OFFSET))(a1);
		}

		static ::System::Void SetDefaultColorTransitionValues(::UnityEngine::UI::Selectable* a1)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Selectable*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_SETDEFAULTCOLORTRANSITIONVALUES_OFFSET))(a1);
		}

		static ::System::Void SetParentAndAlign(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_SETPARENTANDALIGN_OFFSET))(a1, a2);
		}

		static ::System::Void SetLayerRecursively(::UnityEngine::GameObject* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_SETLAYERRECURSIVELY_OFFSET))(a1, a2);
		}

		static ::UnityEngine::GameObject* CreatePanel(::UnityEngine::UI::DefaultControls_Resources a1)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::DefaultControls_Resources))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATEPANEL_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* CreateButton(::UnityEngine::UI::DefaultControls_Resources a1)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::DefaultControls_Resources))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATEBUTTON_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* CreateText(::UnityEngine::UI::DefaultControls_Resources a1)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::DefaultControls_Resources))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATETEXT_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* CreateImage(::UnityEngine::UI::DefaultControls_Resources a1)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::DefaultControls_Resources))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATEIMAGE_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* CreateRawImage(::UnityEngine::UI::DefaultControls_Resources a1)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::DefaultControls_Resources))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATERAWIMAGE_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* CreateSlider(::UnityEngine::UI::DefaultControls_Resources a1)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::DefaultControls_Resources))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATESLIDER_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* CreateScrollbar(::UnityEngine::UI::DefaultControls_Resources a1)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::DefaultControls_Resources))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATESCROLLBAR_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* CreateToggle(::UnityEngine::UI::DefaultControls_Resources a1)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::DefaultControls_Resources))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATETOGGLE_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* CreateInputField(::UnityEngine::UI::DefaultControls_Resources a1)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::DefaultControls_Resources))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATEINPUTFIELD_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* CreateDropdown(::UnityEngine::UI::DefaultControls_Resources a1)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::DefaultControls_Resources))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATEDROPDOWN_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* CreateScrollView(::UnityEngine::UI::DefaultControls_Resources a1)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::DefaultControls_Resources))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATESCROLLVIEW_OFFSET))(a1);
		}

	};
}
