#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/HorizontalOrVerticalLayoutGroup.h"

#define UNITYENGINE_UI_HORIZONTALLAYOUTGROUP_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1CD3E530)
#define UNITYENGINE_UI_HORIZONTALLAYOUTGROUP_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1CD3E9C0)
#define UNITYENGINE_UI_HORIZONTALLAYOUTGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD3E3D0)
#define UNITYENGINE_UI_HORIZONTALLAYOUTGROUP_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1CD3E9D0)
#define UNITYENGINE_UI_HORIZONTALLAYOUTGROUP_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1CD3F510)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int HorizontalLayoutGroup_TypeDefinitionIndex = 6785;

	class HorizontalLayoutGroup : public ::UnityEngine::UI::HorizontalOrVerticalLayoutGroup
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALLAYOUTGROUP_CTOR_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALLAYOUTGROUP_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALLAYOUTGROUP_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
		}

		::System::Void SetLayoutHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALLAYOUTGROUP_SETLAYOUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void SetLayoutVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_HORIZONTALLAYOUTGROUP_SETLAYOUTVERTICAL_OFFSET))(this);
		}

	};
}
