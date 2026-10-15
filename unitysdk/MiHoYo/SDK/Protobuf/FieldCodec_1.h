#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace MiHoYo::SDK::Protobuf
{
	inline static constexpr unsigned int FieldCodec_1_TypeDefinitionIndex = 35718;

	template <typename T>
	class FieldCodec_1 : public ::System::Object
	{
	public:
		::System::Boolean _PackedRepeatedField_k__BackingField; // 0x0
		::System::Action* _ValueWriter_k__BackingField; // 0x0
		::System::Func_2<T, ::System::Int32>* _ValueSizeCalculator_k__BackingField; // 0x0
		::System::Func_2<::MiHoYo::SDK::Protobuf::CodedInputStream*, T>* _ValueReader_k__BackingField; // 0x0
		::System::Int32 _FixedSize_k__BackingField; // 0x0
		::System::UInt32 _Tag_k__BackingField; // 0x0
		T _DefaultValue_k__BackingField; // 0x0
		::System::Int32 tagSize; // 0x0
		static T* StaticGet_DefaultDefault()
		{
			return (T*)UnitySDK::FromName("MiHoYo.SDK.Protobuf", "FieldCodec`1")->GetStaticField(0x0);
		}

		static ::System::Boolean* StaticGet_TypeSupportsPacking()
		{
			return (::System::Boolean*)UnitySDK::FromName("MiHoYo.SDK.Protobuf", "FieldCodec`1")->GetStaticField(0x0);
		}

	};
}
