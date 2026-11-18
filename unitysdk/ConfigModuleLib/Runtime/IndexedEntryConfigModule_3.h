#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace ConfigModuleLib::Runtime
{
	inline static constexpr unsigned int IndexedEntryConfigModule_3_TypeDefinitionIndex = 8315;

	template <typename T1, typename T2, typename T3>
	class IndexedEntryConfigModule_3
	{
	public:
		::ConfigModuleLib::Runtime::LoadOp* _indexOp; // 0x0
		::System::Collections::Generic::Dictionary_2<T1, ::Foundation::AssetPath>* _keyToPath; // 0x0
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::ConfigModuleLib::Runtime::LoadOp*>* _pathToOp; // 0x0
		::System::Collections::Generic::Dictionary_2<T1, T2>* _entries; // 0x0
	};
}
