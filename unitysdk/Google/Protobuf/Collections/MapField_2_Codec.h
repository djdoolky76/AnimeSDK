#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class FieldCodec; }

namespace Google::Protobuf::Collections
{
	inline static constexpr unsigned int MapField_2_Codec_TypeDefinitionIndex = 5581;

	template <typename T1, typename T2>
	class MapField_2_Codec : public ::System::Object
	{
	public:
		::Google::Protobuf::FieldCodec* keyCodec; // 0x0
		::Google::Protobuf::FieldCodec* valueCodec; // 0x0
		::System::UInt32 mapTag; // 0x0
	};
}
