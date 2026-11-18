#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UI/Extension/EImgTextIconType.h"
#include "unitysdk/UnityEngine/UI/Extension/ImgTextFeature_EIconSizingMode.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class ContentSizeFitter; }
namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_GET_IMAGE_OFFSET UNITYSDK_OFFSET(0x819320)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x8192B0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_HIDEVISUAL_OFFSET UNITYSDK_OFFSET(0x819460)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_INVALIDATEMASKCLIPPING_OFFSET UNITYSDK_OFFSET(0x819480)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_REFRESHITEMRECTBYSCALE_OFFSET UNITYSDK_OFFSET(0x819450)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_SETITEMSIZE_OFFSET UNITYSDK_OFFSET(0x8193B0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_SETSPRITE_OFFSET UNITYSDK_OFFSET(0x819390)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_SETTEXT_OFFSET UNITYSDK_OFFSET(0x8193A0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_SHOWVISUAL_OFFSET UNITYSDK_OFFSET(0x819470)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int ImgTextFeature_IconEntry_TypeDefinitionIndex = 40772;

	struct alignas(8) ImgTextFeature_IconEntry
	{
		::System::Boolean IsVisible; // 0x10
		::System::Byte _padding0[0x7];
		::UnityEngine::RectTransform* rect; // 0x18
		::UnityEngine::RectTransform* bgRect; // 0x20
		::UnityEngine::Vector2 bgSize; // 0x28
		::UnityEngine::UI::ContentSizeFitter* sizeFitter; // 0x30
		::UnityEngine::UI::Graphic* item; // 0x38
		::UnityEngine::UI::Extension::EImgTextIconType type; // 0x40
		::System::Single scale; // 0x44
		::UnityEngine::Vector2 itemSize; // 0x48
		::System::Single overrideHeight; // 0x50
		::UnityEngine::UI::Extension::ImgTextFeature_EIconSizingMode sizingMode; // 0x54
		::UnityEngine::Vector2 savedVertPos; // 0x58
		::System::Boolean hasValidPosition; // 0x60
		::System::Byte _padding1[0x3];
		::UnityEngine::Rect originalQuadBounds; // 0x64
		::System::Boolean hasBounds; // 0x74
		::System::Byte _padding2[0x3];
		::System::Int32 placeholderGi; // 0x78
		::System::Byte _padding3[0x4];
		::UnityEngine::Material* savedMat; // 0x80

		::UnityEngine::UI::Text* get_Text()
		{
			return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_GET_TEXT_OFFSET))(this);
		}

		::UnityEngine::UI::Image* get_Image()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_GET_IMAGE_OFFSET))(this);
		}

		::UnityEngine::Sprite* SetSprite(::UnityEngine::Sprite* sp)
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_SETSPRITE_OFFSET))(this, sp);
		}

		::UnityEngine::UI::Text* SetText(::System::String* text)
		{
			return ((::UnityEngine::UI::Text*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_SETTEXT_OFFSET))(this, text);
		}

		::System::Void SetItemSize(::System::Single itemWidth, ::System::Single itemHeight, ::System::Single newScale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_SETITEMSIZE_OFFSET))(this, itemWidth, itemHeight, newScale);
		}

		::System::Void RefreshItemRectByScale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_REFRESHITEMRECTBYSCALE_OFFSET))(this);
		}

		::System::Void HideVisual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_HIDEVISUAL_OFFSET))(this);
		}

		::System::Void ShowVisual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_SHOWVISUAL_OFFSET))(this);
		}

		::System::Void InvalidateMaskClipping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_INVALIDATEMASKCLIPPING_OFFSET))(this);
		}
	};
}
