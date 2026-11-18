#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCSoftAssetPath_1_TypeDefinitionIndex = 52607;

	template <typename T>
	class NPCSoftAssetPath_1 : public ::System::Object
	{
	public:
		::Foundation::AssetPath path; // 0x0
		T _assetRef; // 0x0
		::Foundation::AssetRequestHandle _assetHandleSync; // 0x0
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* _assetHandlesAsync; // 0x0
	};
}
