#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_4.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class TextAsset; }

#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS8_0__CASE6_DYNAMICCHILDRENFENCE_B__0_OFFSET UNITYSDK_OFFSET(0x1F7D3D30)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7D3D20)

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int AssetLoadTaskTest___c__DisplayClass8_0_TypeDefinitionIndex = 8128;

	class AssetLoadTaskTest___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::Foundation::AssetPath>* paths; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::Foundation::AssetLoadTask::AssetLoadTask_1<::System::ValueTuple_4<::UnityEngine::TextAsset*, ::UnityEngine::TextAsset*, ::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>*, ::System::Int32>>* _Case6_DynamicChildrenFence_b__0(::UnityEngine::TextAsset* rootAsset)
		{
			return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::ValueTuple_4<::UnityEngine::TextAsset*, ::UnityEngine::TextAsset*, ::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>*, ::System::Int32>>*(*)(::PVOID, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS8_0__CASE6_DYNAMICCHILDRENFENCE_B__0_OFFSET))(this, rootAsset);
		}
	};
}
