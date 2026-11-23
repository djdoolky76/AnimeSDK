#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIElements/VisualTreeAsset_SlotUsageEntry.h"

namespace UnityEngine::UIElements { class VisualElementAsset; }

#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_FA8823334AF498B1_BD9633E9847DB8DB_OFFSET UNITYSDK_OFFSET(0x42DEA30)
#define UNITYENGINE_UIELEMENTS_VISUALTREEASSET_FA8823334AF498B1__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualTreeAsset_FA8823334AF498B1_TypeDefinitionIndex = 13222;

	class VisualTreeAsset_FA8823334AF498B1 : public ::System::Object
	{
	public:
		::UnityEngine::UIElements::VisualElementAsset* B697B99F0B16F143; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_FA8823334AF498B1__CTOR_OFFSET))(this);
		}

		::System::Boolean BD9633E9847DB8DB(::UnityEngine::UIElements::VisualTreeAsset_SlotUsageEntry BEB1D6FE4F345665)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::VisualTreeAsset_SlotUsageEntry))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEASSET_FA8823334AF498B1_BD9633E9847DB8DB_OFFSET))(this, BEB1D6FE4F345665);
		}
	};
}
