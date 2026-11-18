#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCSoftAssetPathList_1_TypeDefinitionIndex = 48645;

	template <typename T>
	class NPCSoftAssetPathList_1 : public ::System::Object
	{
	public:
		::Il2CppArray<::Foundation::AssetPath>* paths; // 0x0
		::Il2CppArray<T>* _assetRefs; // 0x0
		::Il2CppArray<::Foundation::AssetRequestHandle>* _assetHandlesSync; // 0x0
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* _assetHandlesAsync; // 0x0
	};
}
