#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIElements/StyleSheets/StyleValue.h"
#include "unitysdk/UnityEngine/UIElements/StyleFloat.h"
#include "unitysdk/UnityEngine/UIElements/StyleLength.h"

#define UNITYENGINE_UIELEMENTS_STYLEVALUEEXTENSIONS_TOSTYLEFLOAT_OFFSET UNITYSDK_OFFSET(0x1F4C5D30)
#define UNITYENGINE_UIELEMENTS_STYLEVALUEEXTENSIONS_TOSTYLELENGTH_OFFSET UNITYSDK_OFFSET(0x1F4C5D10)

namespace UnityEngine::UIElements
{
	class StyleValueExtensions : public ::System::Object
	{
	public:
		static ::UnityEngine::UIElements::StyleLength ToStyleLength(::UnityEngine::UIElements::StyleSheets::StyleValue a1)
		{
			return ((::UnityEngine::UIElements::StyleLength(*)(::UnityEngine::UIElements::StyleSheets::StyleValue))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVALUEEXTENSIONS_TOSTYLELENGTH_OFFSET))(a1);
		}

		static ::UnityEngine::UIElements::StyleFloat ToStyleFloat(::UnityEngine::UIElements::StyleSheets::StyleValue a1)
		{
			return ((::UnityEngine::UIElements::StyleFloat(*)(::UnityEngine::UIElements::StyleSheets::StyleValue))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVALUEEXTENSIONS_TOSTYLEFLOAT_OFFSET))(a1);
		}

	};
}
