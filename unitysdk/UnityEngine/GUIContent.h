#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_GUICONTENT_CLEARSTATICCACHE_OFFSET UNITYSDK_OFFSET(0x4192320)
#define UNITYENGINE_GUICONTENT_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x374BB70)
#define UNITYENGINE_GUICONTENT_GET_TOOLTIP_OFFSET UNITYSDK_OFFSET(0x3A4AA60)
#define UNITYENGINE_GUICONTENT_SET_IMAGE_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define UNITYENGINE_GUICONTENT_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x4192A00)
#define UNITYENGINE_GUICONTENT_SET_TOOLTIP_OFFSET UNITYSDK_OFFSET(0x16BD3B0)
#define UNITYENGINE_GUICONTENT_TEMP_OFFSET UNITYSDK_OFFSET(0x4192470)
#define UNITYENGINE_GUICONTENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4192530)
#define UNITYENGINE_GUICONTENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x4192560)
#define UNITYENGINE_GUICONTENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x41929A0)
#define UNITYENGINE_GUICONTENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x4192930)
#define UNITYENGINE_GUICONTENT__CTOR_3_OFFSET UNITYSDK_OFFSET(0x41927D0)
#define UNITYENGINE_GUICONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x41928C0)

namespace UnityEngine
{
	inline static constexpr unsigned int GUIContent_TypeDefinitionIndex = 20097;

	class GUIContent : public ::System::Object
	{
	public:
		static ::UnityEngine::GUIContent** StaticGet_s_Text()
		{
			return (::UnityEngine::GUIContent**)Il2CppClass::FromTypeDefinitionIndex(GUIContent_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::UnityEngine::GUIContent** StaticGet_s_Image()
		{
			return (::UnityEngine::GUIContent**)Il2CppClass::FromTypeDefinitionIndex(GUIContent_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::UnityEngine::GUIContent** StaticGet_s_TextImage()
		{
			return (::UnityEngine::GUIContent**)Il2CppClass::FromTypeDefinitionIndex(GUIContent_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::UnityEngine::GUIContent** StaticGet_none()
		{
			return (::UnityEngine::GUIContent**)Il2CppClass::FromTypeDefinitionIndex(GUIContent_TypeDefinitionIndex)->GetStaticField(0x18);
		}
		::System::String* m_Text; // 0x10
		::UnityEngine::Texture* m_Image; // 0x18
		::System::String* m_Tooltip; // 0x20
		::System::Action* OnTextChanged; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_TOSTRING_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT__CCTOR_OFFSET))();
		}

		::System::Void _ctor_1(::System::String* E97E8D008427A296)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT__CTOR_1_OFFSET))(this, E97E8D008427A296);
		}

		::System::Void set_text(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_SET_TEXT_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_image(::UnityEngine::Texture* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_SET_IMAGE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::String* get_tooltip()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_GET_TOOLTIP_OFFSET))(this);
		}

		::System::Void set_tooltip(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_SET_TOOLTIP_OFFSET))(this, E937D4885DAA1AE8);
		}

		static ::System::Void ClearStaticCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_CLEARSTATICCACHE_OFFSET))();
		}

		::System::Void _ctor_2(::UnityEngine::Texture* F49848274A97D1B6, ::System::String* F7E513B6AB30F4DB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT__CTOR_2_OFFSET))(this, F49848274A97D1B6, F7E513B6AB30F4DB);
		}

		static ::UnityEngine::GUIContent* Temp(::System::String* BBCFEC7DB309E927)
		{
			return ((::UnityEngine::GUIContent*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_TEMP_OFFSET))(BBCFEC7DB309E927);
		}

		::System::Void _ctor_3(::System::String* E97E8D008427A296, ::UnityEngine::Texture* F49848274A97D1B6, ::System::String* F7E513B6AB30F4DB)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Texture*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT__CTOR_3_OFFSET))(this, E97E8D008427A296, F49848274A97D1B6, F7E513B6AB30F4DB);
		}

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_GET_TEXT_OFFSET))(this);
		}
	};
}
