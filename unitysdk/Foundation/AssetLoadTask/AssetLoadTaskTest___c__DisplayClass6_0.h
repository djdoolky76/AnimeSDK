#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class TextAsset; }

#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS6_0__CASE4_LOADASSETS_B__0_OFFSET UNITYSDK_OFFSET(0x1EA275B0)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA275A0)

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int AssetLoadTaskTest___c__DisplayClass6_0_TypeDefinitionIndex = 8124;

	class AssetLoadTaskTest___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::Foundation::AssetPath>* paths; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>*>* _Case4_LoadAssets_b__0(::UnityEngine::TextAsset* rootAsset)
		{
			return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>*>*(*)(::PVOID, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS6_0__CASE4_LOADASSETS_B__0_OFFSET))(this, rootAsset);
		}
	};
}
