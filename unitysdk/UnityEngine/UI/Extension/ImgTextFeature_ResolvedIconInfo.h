#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UI/Extension/EImgTextIconType.h"
#include "unitysdk/UnityEngine/UI/Extension/ImgTextFeature_EIconSizingMode.h"

namespace System { class String; }

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int ImgTextFeature_ResolvedIconInfo_TypeDefinitionIndex = 40773;

	struct alignas(8) ImgTextFeature_ResolvedIconInfo
	{
		::UnityEngine::UI::Extension::EImgTextIconType type; // 0x10
		::UnityEngine::UI::Extension::ImgTextFeature_EIconSizingMode sizingMode; // 0x14
		::System::String* assetPath; // 0x18
		::System::String* keyText; // 0x20
	};
}
