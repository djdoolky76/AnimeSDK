#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadRun_1; }
namespace System { class Object; }

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int AssetLoadRunHandle_1_TypeDefinitionIndex = 8610;

	template <typename T>
	struct alignas(8) AssetLoadRunHandle_1
	{
		static ::Foundation::AssetLoadTask::AssetLoadRunHandle_1<T>* StaticGet_None()
		{
			return (::Foundation::AssetLoadTask::AssetLoadRunHandle_1<T>*)Il2CppClass::FromTypeDefinitionIndex(AssetLoadRunHandle_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Foundation::AssetLoadTask::AssetLoadRun_1<T>* _run; // 0x0
		::System::Object* _Checker; // 0x0
	};
}
