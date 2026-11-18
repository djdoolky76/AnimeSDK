#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace ConfigModuleLib::Runtime { class PreloadOp; }
namespace ConfigModuleLib::Runtime { template <typename T1, typename T2, typename T3> class KeypairConfigModule_3; }
namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace ConfigModuleLib::Runtime
{
	inline static constexpr unsigned int KeypairConfigModule_3___c__DisplayClass11_0_TypeDefinitionIndex = 7882;

	template <typename T1, typename T2, typename T3>
	class KeypairConfigModule_3___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::List_1<::Foundation::AssetPath>*>* pathsOp; // 0x0
		::ConfigModuleLib::Runtime::PreloadOp* batch; // 0x0
		::ConfigModuleLib::Runtime::KeypairConfigModule_3<T1, T2, T3>* __4__this; // 0x0
	};
}
