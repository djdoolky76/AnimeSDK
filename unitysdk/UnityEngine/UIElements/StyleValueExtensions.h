#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIElements/StyleSheets/StyleValue.h"
#include "unitysdk/UnityEngine/UIElements/StyleFloat.h"
#include "unitysdk/UnityEngine/UIElements/StyleLength.h"

#define UNITYENGINE_UIELEMENTS_STYLEVALUEEXTENSIONS_TOSTYLEFLOAT_OFFSET UNITYSDK_OFFSET(0x1D5C2FA0)
#define UNITYENGINE_UIELEMENTS_STYLEVALUEEXTENSIONS_TOSTYLELENGTH_OFFSET UNITYSDK_OFFSET(0x1D5C2F80)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleValueExtensions_TypeDefinitionIndex = 27611;

	class StyleValueExtensions : public ::System::Object
	{
	public:
		static ::UnityEngine::UIElements::StyleLength ToStyleLength(::UnityEngine::UIElements::StyleSheets::StyleValue styleValue)
		{
			return ((::UnityEngine::UIElements::StyleLength(*)(::UnityEngine::UIElements::StyleSheets::StyleValue))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVALUEEXTENSIONS_TOSTYLELENGTH_OFFSET))(styleValue);
		}

		static ::UnityEngine::UIElements::StyleFloat ToStyleFloat(::UnityEngine::UIElements::StyleSheets::StyleValue styleValue)
		{
			return ((::UnityEngine::UIElements::StyleFloat(*)(::UnityEngine::UIElements::StyleSheets::StyleValue))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVALUEEXTENSIONS_TOSTYLEFLOAT_OFFSET))(styleValue);
		}
	};
}
