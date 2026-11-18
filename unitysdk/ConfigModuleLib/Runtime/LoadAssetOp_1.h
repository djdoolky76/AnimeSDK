#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

namespace ConfigModuleLib::Runtime
{
	inline static constexpr unsigned int LoadAssetOp_1_TypeDefinitionIndex = 8071;

	template <typename T>
	class LoadAssetOp_1
	{
	public:
		::System::Func_1<::Foundation::AssetPath>* _pathResolver; // 0x0
		::System::Action_1<T>* _onLoaded; // 0x0
		::Foundation::AssetPath _path; // 0x0
		::Foundation::AssetRequestHandle _handle; // 0x0
	};
}
