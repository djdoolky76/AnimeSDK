#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

namespace Foundation { class AssetRequestCompleteDel; }

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int LoadAssetOperation_1_TypeDefinitionIndex = 8697;

	template <typename T>
	class LoadAssetOperation_1
	{
	public:
		::Foundation::AssetPath _path; // 0x0
		::Foundation::AssetRequestCompleteDel* _onLoaded; // 0x0
		::Foundation::AssetRequestHandle _handle; // 0x0
		::System::Boolean _started; // 0x0
	};
}
