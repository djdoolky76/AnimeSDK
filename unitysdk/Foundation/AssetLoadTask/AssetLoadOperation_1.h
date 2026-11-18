#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { class IAssetLoadRunContext; }
namespace Foundation::AssetLoadTask { template <typename T> class IAssetLoadReceiver_1; }
namespace System { class String; }

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int AssetLoadOperation_1_TypeDefinitionIndex = 8225;

	template <typename T>
	class AssetLoadOperation_1 : public ::System::Object
	{
	public:
		::Foundation::AssetLoadTask::IAssetLoadReceiver_1<T>* Receiver; // 0x0
		::Foundation::AssetLoadTask::IAssetLoadRunContext* RunContext; // 0x0
		::System::Boolean _IsCompleted_k__BackingField; // 0x0
		::System::Int32 _operationId; // 0x0
		::System::String* _operationName; // 0x0
		::System::Int64 _startTimestamp; // 0x0
		::System::Boolean _operationStarted; // 0x0
	};
}
