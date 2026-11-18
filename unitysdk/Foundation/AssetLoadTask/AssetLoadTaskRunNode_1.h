#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadTask/AssetLoadTaskStatus.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { class IAssetLoadRunContext; }
namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadOperation_1; }
namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTaskRunNodeEdgeOperation_1; }
namespace System { class Exception; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int AssetLoadTaskRunNode_1_TypeDefinitionIndex = 8250;

	template <typename T>
	class AssetLoadTaskRunNode_1 : public ::System::Object
	{
	public:
		::Foundation::AssetLoadTask::IAssetLoadRunContext* _runContext; // 0x0
		::Foundation::AssetLoadTask::AssetLoadOperation_1<T>* _source; // 0x0
		::System::Object* _capturedResultKey; // 0x0
		::System::Collections::Generic::List_1<::Foundation::AssetLoadTask::AssetLoadTaskRunNodeEdgeOperation_1<T>*>* _edges; // 0x0
		::Foundation::AssetLoadTask::AssetLoadTaskStatus _status; // 0x0
		T _value; // 0x0
		::System::Exception* _error; // 0x0
		::System::Boolean _sourceStarted; // 0x0
	};
}
