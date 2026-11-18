#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCSoftAssetPathUtils__LoadAssetsAsync_d__10_1_TypeDefinitionIndex = 69510;

	template <typename T>
	struct alignas(8) NPCSoftAssetPathUtils__LoadAssetsAsync_d__10_1
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Il2CppArray<T>*> __t__builder; // 0x0
		::Il2CppArray<::Foundation::AssetPath>* assetPaths; // 0x0
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* handleList; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Object* __u__1; // 0x0
	};
}
