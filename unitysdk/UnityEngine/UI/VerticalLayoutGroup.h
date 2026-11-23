#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/HorizontalOrVerticalLayoutGroup.h"

#define UNITYENGINE_UI_VERTICALLAYOUTGROUP_A6AF544826B118D9_OFFSET UNITYSDK_OFFSET(0x43AB120)
#define UNITYENGINE_UI_VERTICALLAYOUTGROUP_A81433F35AA7F837_OFFSET UNITYSDK_OFFSET(0x43AB140)
#define UNITYENGINE_UI_VERTICALLAYOUTGROUP_A9B7EE8A7B00AADE_OFFSET UNITYSDK_OFFSET(0x43AB0E0)
#define UNITYENGINE_UI_VERTICALLAYOUTGROUP_FF541D3787FB5193_OFFSET UNITYSDK_OFFSET(0x43AB110)
#define UNITYENGINE_UI_VERTICALLAYOUTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x4395780)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int VerticalLayoutGroup_TypeDefinitionIndex = 18547;

	class VerticalLayoutGroup : public ::UnityEngine::UI::HorizontalOrVerticalLayoutGroup
	{
	public:
		::System::Void FF541D3787FB5193()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTICALLAYOUTGROUP_FF541D3787FB5193_OFFSET))(this);
		}

		::System::Void A6AF544826B118D9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTICALLAYOUTGROUP_A6AF544826B118D9_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTICALLAYOUTGROUP__CTOR_OFFSET))(this);
		}

		::System::Void A81433F35AA7F837()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTICALLAYOUTGROUP_A81433F35AA7F837_OFFSET))(this);
		}

		::System::Void A9B7EE8A7B00AADE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTICALLAYOUTGROUP_A9B7EE8A7B00AADE_OFFSET))(this);
		}
	};
}
