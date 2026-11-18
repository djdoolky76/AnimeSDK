#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace UnityEngine { class TextAsset; }

#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS12_0__CASE10_COMPOSEDSUBTASK_B__0_OFFSET UNITYSDK_OFFSET(0x1E081170)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E081160)

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int AssetLoadTaskTest___c__DisplayClass12_0_TypeDefinitionIndex = 8122;

	class AssetLoadTaskTest___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::Foundation::AssetLoadTask::AssetLoadTask_1<::UnityEngine::TextAsset*>* sub; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::Foundation::AssetLoadTask::AssetLoadTask_1<::System::ValueTuple_2<::UnityEngine::TextAsset*, ::UnityEngine::TextAsset*>>* _Case10_ComposedSubTask_b__0(::UnityEngine::TextAsset* mainAsset)
		{
			return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::ValueTuple_2<::UnityEngine::TextAsset*, ::UnityEngine::TextAsset*>>*(*)(::PVOID, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS12_0__CASE10_COMPOSEDSUBTASK_B__0_OFFSET))(this, mainAsset);
		}
	};
}
