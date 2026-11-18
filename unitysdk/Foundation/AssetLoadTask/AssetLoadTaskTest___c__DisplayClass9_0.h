#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace UnityEngine { class TextAsset; }

#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS9_0__CASE7_PARALLELBRANCHESAFTERROOT_B__0_OFFSET UNITYSDK_OFFSET(0x1EA772E0)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS9_0__CASE7_PARALLELBRANCHESAFTERROOT_B__1_OFFSET UNITYSDK_OFFSET(0x1EA77340)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA72920)

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int AssetLoadTaskTest___c__DisplayClass9_0_TypeDefinitionIndex = 8127;

	class AssetLoadTaskTest___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::Foundation::AssetPath branchPath; // 0x10
		::Foundation::AssetPath ePath; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::Foundation::AssetLoadTask::AssetLoadTask_1<::UnityEngine::TextAsset*>* _Case7_ParallelBranchesAfterRoot_b__0(::UnityEngine::TextAsset* _)
		{
			return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::UnityEngine::TextAsset*>*(*)(::PVOID, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS9_0__CASE7_PARALLELBRANCHESAFTERROOT_B__0_OFFSET))(this, _);
		}

		::Foundation::AssetLoadTask::AssetLoadTask_1<::UnityEngine::TextAsset*>* _Case7_ParallelBranchesAfterRoot_b__1(::UnityEngine::TextAsset* _)
		{
			return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::UnityEngine::TextAsset*>*(*)(::PVOID, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS9_0__CASE7_PARALLELBRANCHESAFTERROOT_B__1_OFFSET))(this, _);
		}
	};
}
