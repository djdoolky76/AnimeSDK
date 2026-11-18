#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace ConfigModuleLib::Runtime
{
	inline static constexpr unsigned int KeypairConfigModule_3_TypeDefinitionIndex = 7880;

	template <typename T1, typename T2, typename T3>
	class KeypairConfigModule_3
	{
	public:
		::System::Collections::Generic::Dictionary_2<T1, ::Foundation::AssetPath>* _keyToPath; // 0x0
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::ConfigModuleLib::Runtime::LoadOp_1<T2>*>* _pathToOp; // 0x0
	};
}
