#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace UnityEngine { class TextAsset; }

#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS4_0__CASE2_CHAINWITHLET_B__0_OFFSET UNITYSDK_OFFSET(0x1F3EA8E0)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3EA8D0)

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int AssetLoadTaskTest___c__DisplayClass4_0_TypeDefinitionIndex = 8125;

	class AssetLoadTaskTest___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::Foundation::AssetPath secondPath; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::Foundation::AssetLoadTask::AssetLoadTask_1<::UnityEngine::TextAsset*>* _Case2_ChainWithLet_b__0(::UnityEngine::TextAsset* firstAsset)
		{
			return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::UnityEngine::TextAsset*>*(*)(::PVOID, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS4_0__CASE2_CHAINWITHLET_B__0_OFFSET))(this, firstAsset);
		}
	};
}
