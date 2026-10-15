#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class EqualityComparer_1; }

namespace Google::Protobuf::Collections
{
	inline static constexpr unsigned int RepeatedField_1_TypeDefinitionIndex = 5591;

	template <typename T>
	class RepeatedField_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* array; // 0x0
		::System::Int32 count; // 0x0
		static ::System::Collections::Generic::EqualityComparer_1<T>** StaticGet_EqualityComparer()
		{
			return (::System::Collections::Generic::EqualityComparer_1<T>**)UnitySDK::FromName("Google.Protobuf.Collections", "RepeatedField`1")->GetStaticField(0x0);
		}

		static ::Il2CppArray<T>** StaticGet_EmptyArray()
		{
			return (::Il2CppArray<T>**)UnitySDK::FromName("Google.Protobuf.Collections", "RepeatedField`1")->GetStaticField(0x0);
		}

	};
}
