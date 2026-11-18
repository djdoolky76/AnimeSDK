#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ConfigModuleLib::Runtime { class PreloadOp; }
namespace ConfigModuleLib::Runtime { template <typename T1, typename T2, typename T3> class IndexedEntryConfigModule_3; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

namespace ConfigModuleLib::Runtime
{
	inline static constexpr unsigned int IndexedEntryConfigModule_3___c__DisplayClass19_0_TypeDefinitionIndex = 8316;

	template <typename T1, typename T2, typename T3>
	class IndexedEntryConfigModule_3___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::ConfigModuleLib::Runtime::IndexedEntryConfigModule_3<T1, T2, T3>* __4__this; // 0x0
		::System::Collections::Generic::IReadOnlyList_1<T2>* keys; // 0x0
		::ConfigModuleLib::Runtime::PreloadOp* batch; // 0x0
	};
}
