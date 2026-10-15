#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }

namespace Google::Protobuf::Collections
{
	inline static constexpr unsigned int MapField_2_Codec_TypeDefinitionIndex = 5581;

	template <typename T1, typename T2>
	class MapField_2_Codec : public ::System::Object
	{
	public:
		::Google::Protobuf::FieldCodec_1<T1>* keyCodec; // 0x0
		::Google::Protobuf::FieldCodec_1<T2>* valueCodec; // 0x0
		::System::UInt32 mapTag; // 0x0
	};
}
