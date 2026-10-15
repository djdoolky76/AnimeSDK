#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Collections::Pooled
{
	inline static constexpr unsigned int PooledDictionaryConfig_TypeDefinitionIndex = 5109;

	class PooledDictionaryConfig : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_PooledDictionary_Clear_Fix()
		{
			return (::System::Boolean*)UnitySDK::FromName("Collections.Pooled", "PooledDictionaryConfig")->GetStaticField(0x135D0);
		}

	};
}
