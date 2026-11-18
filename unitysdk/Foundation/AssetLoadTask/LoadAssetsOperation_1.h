#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int LoadAssetsOperation_1_TypeDefinitionIndex = 8055;

	template <typename T>
	class LoadAssetsOperation_1
	{
	public:
		::System::Collections::Generic::List_1<::Foundation::AssetPath>* _paths; // 0x0
		::System::Boolean _allowPartial; // 0x0
		::System::String* _logName; // 0x0
		::System::Collections::Generic::List_1<T>* _results; // 0x0
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* _handles; // 0x0
		::System::Int32 _pendingCount; // 0x0
		::System::Boolean _started; // 0x0
		::Il2CppArray<::System::Boolean>* _completed; // 0x0
	};
}
