#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BAVariantRes_1_TypeDefinitionIndex = 69517;

	template <typename T>
	struct alignas(8) BAVariantRes_1
	{
		T res; // 0x0
		::System::Int32 refCount; // 0x0
		::System::Single gcTime; // 0x0
		static ::System::Single* StaticGet_gcThreshold()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client", "BAVariantRes`1")->GetStaticField(0x0);
		}

	};
}
