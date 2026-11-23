#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/StyleSheet.h"

#define UNITYENGINE_UIELEMENTS_THEMESTYLESHEET_ONENABLE_OFFSET UNITYSDK_OFFSET(0x426E760)
#define UNITYENGINE_UIELEMENTS_THEMESTYLESHEET__CTOR_OFFSET UNITYSDK_OFFSET(0x426E790)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ThemeStyleSheet_TypeDefinitionIndex = 13795;

	class ThemeStyleSheet : public ::UnityEngine::UIElements::StyleSheet
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_THEMESTYLESHEET__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_THEMESTYLESHEET_ONENABLE_OFFSET))(this);
		}
	};
}
