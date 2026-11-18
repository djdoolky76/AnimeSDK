#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace ConfigModuleLib::Runtime
{
	inline static constexpr unsigned int LoadAssetListOp_1_TypeDefinitionIndex = 8531;

	template <typename T>
	class LoadAssetListOp_1
	{
	public:
		::System::Collections::Generic::IEnumerable_1<::Foundation::AssetPath>* _pathsSource; // 0x0
		::System::Func_1<::System::Collections::Generic::IEnumerable_1<::Foundation::AssetPath>*>* _pathsResolver; // 0x0
		::System::Action_1<::System::Collections::Generic::IEnumerable_1<T>*>* _onLoaded; // 0x0
		::System::Action_2<::Foundation::AssetPath, T>* _onItemLoaded; // 0x0
		::Il2CppArray<::Foundation::AssetPath>* _paths; // 0x0
		::Il2CppArray<::Foundation::AssetRequestHandle>* _handles; // 0x0
		::Il2CppArray<T>* _results; // 0x0
		::System::Int32 _pendingCount; // 0x0
		::Il2CppArray<::System::Boolean>* _completed; // 0x0
	};
}
