#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace System { class Exception; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int LetErrorAssetLoadTask_1_TypeDefinitionIndex = 8432;

	template <typename T>
	class LetErrorAssetLoadTask_1
	{
	public:
		::Foundation::AssetLoadTask::AssetLoadTask_1<T>* _source; // 0x0
		::System::Func_2<::System::Exception*, ::Foundation::AssetLoadTask::AssetLoadTask_1<T>*>* _recover; // 0x0
	};
}
