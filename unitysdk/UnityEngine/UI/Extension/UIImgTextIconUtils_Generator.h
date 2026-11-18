#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJDLKFAMLAC_PAANKEAOJEI.h"
#include "unitysdk/UnityEngine/UI/Extension/UIImgTextIconUtils_EIconType.h"

#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_GENERATOR_ADDICON_OFFSET UNITYSDK_OFFSET(0x1CB710E0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_GENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB711E0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIImgTextIconUtils_Generator_TypeDefinitionIndex = 91536;

	class UIImgTextIconUtils_Generator : public ::GJDLKFAMLAC_PAANKEAOJEI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_GENERATOR__CTOR_OFFSET))(this);
		}

		::System::Void AddIcon(::UnityEngine::UI::Extension::UIImgTextIconUtils_EIconType type, ::System::Char wildcardEnd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UIImgTextIconUtils_EIconType, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_GENERATOR_ADDICON_OFFSET))(this, type, wildcardEnd);
		}
	};
}
