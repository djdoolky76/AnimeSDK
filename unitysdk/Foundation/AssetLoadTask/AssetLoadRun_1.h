#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadTask/AssetLoadCapturedResult.h"
#include "unitysdk/Foundation/AssetLoadTask/AssetLoadRunHandle_1.h"
#include "unitysdk/Foundation/AssetLoadTask/AssetLoadTaskStatus.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { class IAssetLoadTaskObserver; }
namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadOperation_1; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int AssetLoadRun_1_TypeDefinitionIndex = 8498;

	template <typename T>
	class AssetLoadRun_1 : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__nextRunId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AssetLoadRun_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Foundation::AssetLoadTask::AssetLoadOperation_1<T>* _root; // 0x0
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* _handles; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::Foundation::AssetLoadTask::AssetLoadCapturedResult>* _capturedResults; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* _runNodes; // 0x0
		::System::Action_1<::Foundation::AssetLoadTask::AssetLoadRunHandle_1<T>>* _completeCallback; // 0x0
		::Foundation::AssetLoadTask::IAssetLoadTaskObserver* _observer; // 0x0
		::System::Int32 _runId; // 0x0
		::System::Int32 _nextOperationId; // 0x0
		::System::Int32 _trackedHandleCount; // 0x0
		::System::Int64 _runStartTimestamp; // 0x0
		::System::String* _runName; // 0x0
		::System::Type* _taskType; // 0x0
		::Foundation::AssetLoadTask::AssetLoadTaskStatus _status; // 0x0
		T _result; // 0x0
		::System::Exception* _error; // 0x0
		::System::Boolean _disposed; // 0x0
		::System::Boolean _runCompletedNotified; // 0x0
	};
}
