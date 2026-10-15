#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSecurity_HashResistantCache_1_TypeDefinitionIndex = 7201;

	template <typename T>
	class MessagePackSecurity_HashResistantCache_1 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IEqualityComparer_1<T>** StaticGet_EqualityComparer()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<T>**)UnitySDK::FromName("MessagePack", "HashResistantCache`1")->GetStaticField(0x0);
		}

	};
}
