#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableDictionary_2_Comparers_TypeDefinitionIndex = 6622;

	template <typename T1, typename T2>
	class ImmutableDictionary_2_Comparers : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEqualityComparer_1<T1>* _keyComparer; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T2>* _valueComparer; // 0x0
		static ::System::Object** StaticGet_Default()
		{
			return (::System::Object**)UnitySDK::FromName("System.Collections.Immutable", "Comparers")->GetStaticField(0x0);
		}

	};
}
