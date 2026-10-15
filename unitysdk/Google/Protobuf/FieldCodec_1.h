#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class EqualityComparer_1; }

namespace Google::Protobuf
{
	inline static constexpr unsigned int FieldCodec_1_TypeDefinitionIndex = 5384;

	template <typename T>
	class FieldCodec_1 : public ::System::Object
	{
	public:
		::System::Boolean _PackedRepeatedField_k__BackingField; // 0x0
		::System::Object* _ValueWriter_k__BackingField; // 0x0
		::System::Object* _ValueSizeCalculator_k__BackingField; // 0x0
		::System::Object* _ValueReader_k__BackingField; // 0x0
		::System::Object* _ValueMerger_k__BackingField; // 0x0
		::System::Object* _FieldMerger_k__BackingField; // 0x0
		::System::Int32 _FixedSize_k__BackingField; // 0x0
		::System::UInt32 _Tag_k__BackingField; // 0x0
		::System::UInt32 _EndTag_k__BackingField; // 0x0
		T _DefaultValue_k__BackingField; // 0x0
		::System::Int32 tagSize; // 0x0
		static ::System::Collections::Generic::EqualityComparer_1<T>** StaticGet_EqualityComparer()
		{
			return (::System::Collections::Generic::EqualityComparer_1<T>**)UnitySDK::FromName("Google.Protobuf", "FieldCodec`1")->GetStaticField(0x0);
		}

		static T* StaticGet_DefaultDefault()
		{
			return (T*)UnitySDK::FromName("Google.Protobuf", "FieldCodec`1")->GetStaticField(0x0);
		}

		static ::System::Boolean* StaticGet_TypeSupportsPacking()
		{
			return (::System::Boolean*)UnitySDK::FromName("Google.Protobuf", "FieldCodec`1")->GetStaticField(0x0);
		}

	};
}
