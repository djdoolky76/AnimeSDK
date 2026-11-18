#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace System { class Exception; }
namespace UnityEngine { class TextAsset; }

#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS11_0__CASE9_LETERRORFALLBACKRESOURCE_B__0_OFFSET UNITYSDK_OFFSET(0x1E081100)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0810F0)

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int AssetLoadTaskTest___c__DisplayClass11_0_TypeDefinitionIndex = 8123;

	class AssetLoadTaskTest___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::Foundation::AssetPath fallbackPath; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::Foundation::AssetLoadTask::AssetLoadTask_1<::UnityEngine::TextAsset*>* _Case9_LetErrorFallbackResource_b__0(::System::Exception* _)
		{
			return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::UnityEngine::TextAsset*>*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST___C__DISPLAYCLASS11_0__CASE9_LETERRORFALLBACKRESOURCE_B__0_OFFSET))(this, _);
		}
	};
}
