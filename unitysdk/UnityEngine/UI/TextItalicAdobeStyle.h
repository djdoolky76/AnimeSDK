#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/CanvasUpdate.h"
#include "unitysdk/UnityEngine/UI/UIText.h"

#define UNITYENGINE_UI_TEXTITALICADOBESTYLE_GET_ITALICADOBESTYLE_OFFSET UNITYSDK_OFFSET(0x1D64E640)
#define UNITYENGINE_UI_TEXTITALICADOBESTYLE_REBUILD_OFFSET UNITYSDK_OFFSET(0x1D64E650)
#define UNITYENGINE_UI_TEXTITALICADOBESTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D64E7A0)
#define UNITYENGINE_UI_TEXTITALICADOBESTYLE___BASE_REBUILD_OFFSET UNITYSDK_OFFSET(0x1D64E800)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int TextItalicAdobeStyle_TypeDefinitionIndex = 59170;

	class TextItalicAdobeStyle : public ::UnityEngine::UI::UIText
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXTITALICADOBESTYLE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ItalicAdobeStyle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXTITALICADOBESTYLE_GET_ITALICADOBESTYLE_OFFSET))(this);
		}

		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate update)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasUpdate))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXTITALICADOBESTYLE_REBUILD_OFFSET))(this, update);
		}

		::System::Void __base_Rebuild(::UnityEngine::UI::CanvasUpdate P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasUpdate))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXTITALICADOBESTYLE___BASE_REBUILD_OFFSET))(this, P0);
		}
	};
}
