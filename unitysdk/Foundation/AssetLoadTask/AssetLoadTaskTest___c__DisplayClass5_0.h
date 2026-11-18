#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace UnityEngine { class TextAsset; }

#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS5_0__CASE3_DAGDEPENDENCIES_B__0_OFFSET UNITYSDK_OFFSET(0x1F2CF200)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS5_0__CASE3_DAGDEPENDENCIES_B__1_OFFSET UNITYSDK_OFFSET(0x1F2CF260)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS5_0__CASE3_DAGDEPENDENCIES_B__2_OFFSET UNITYSDK_OFFSET(0x1F2CF2C0)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS5_0__CASE3_DAGDEPENDENCIES_B__3_OFFSET UNITYSDK_OFFSET(0x1F2CF320)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2CF1F0)

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int AssetLoadTaskTest___c__DisplayClass5_0_TypeDefinitionIndex = 8126;

	class AssetLoadTaskTest___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::Foundation::AssetPath bPath; // 0x10
		::Foundation::AssetPath dPath; // 0x20
		::Foundation::AssetPath gPath; // 0x30
		::Foundation::AssetPath ePath; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::Foundation::AssetLoadTask::AssetLoadTask_1<::UnityEngine::TextAsset*>* _Case3_DagDependencies_b__0(::UnityEngine::TextAsset* _)
		{
			return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::UnityEngine::TextAsset*>*(*)(::PVOID, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS5_0__CASE3_DAGDEPENDENCIES_B__0_OFFSET))(this, _);
		}

		::Foundation::AssetLoadTask::AssetLoadTask_1<::UnityEngine::TextAsset*>* _Case3_DagDependencies_b__1(::System::ValueTuple_2<::UnityEngine::TextAsset*, ::UnityEngine::TextAsset*> _)
		{
			return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::UnityEngine::TextAsset*>*(*)(::PVOID, ::System::ValueTuple_2<::UnityEngine::TextAsset*, ::UnityEngine::TextAsset*>))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS5_0__CASE3_DAGDEPENDENCIES_B__1_OFFSET))(this, _);
		}

		::Foundation::AssetLoadTask::AssetLoadTask_1<::UnityEngine::TextAsset*>* _Case3_DagDependencies_b__2(::System::ValueTuple_2<::UnityEngine::TextAsset*, ::UnityEngine::TextAsset*> _)
		{
			return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::UnityEngine::TextAsset*>*(*)(::PVOID, ::System::ValueTuple_2<::UnityEngine::TextAsset*, ::UnityEngine::TextAsset*>))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS5_0__CASE3_DAGDEPENDENCIES_B__2_OFFSET))(this, _);
		}

		::Foundation::AssetLoadTask::AssetLoadTask_1<::UnityEngine::TextAsset*>* _Case3_DagDependencies_b__3(::System::ValueTuple_2<::UnityEngine::TextAsset*, ::UnityEngine::TextAsset*> _)
		{
			return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::UnityEngine::TextAsset*>*(*)(::PVOID, ::System::ValueTuple_2<::UnityEngine::TextAsset*, ::UnityEngine::TextAsset*>))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS5_0__CASE3_DAGDEPENDENCIES_B__3_OFFSET))(this, _);
		}
	};
}
