#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class EqualityComparer_1; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int EqualityComparer_1_TypeDefinitionIndex = 1549;

	template <typename T>
	class EqualityComparer_1 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::EqualityComparer_1<T>** StaticGet_defaultComparer()
		{
			return (::System::Collections::Generic::EqualityComparer_1<T>**)UnitySDK::FromName("System.Collections.Generic", "EqualityComparer`1")->GetStaticField(0x0);
		}

	};
}
