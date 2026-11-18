#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace UnityEngine { class TextAsset; }

#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS10_0__CASE8_FAILUREKEEPSLOADEDRESOURCE_B__0_OFFSET UNITYSDK_OFFSET(0x1E081090)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E081080)

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int AssetLoadTaskTest___c__DisplayClass10_0_TypeDefinitionIndex = 8130;

	class AssetLoadTaskTest___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::Foundation::AssetPath badPath; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::Foundation::AssetLoadTask::AssetLoadTask_1<::UnityEngine::TextAsset*>* _Case8_FailureKeepsLoadedResource_b__0(::UnityEngine::TextAsset* _)
		{
			return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::UnityEngine::TextAsset*>*(*)(::PVOID, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS10_0__CASE8_FAILUREKEEPSLOADEDRESOURCE_B__0_OFFSET))(this, _);
		}
	};
}
