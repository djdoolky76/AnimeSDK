#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf { class FieldCodec; }

namespace MiHoYo::SDK::Protobuf::Collections
{
	inline static constexpr unsigned int MapField_2_Codec_TypeDefinitionIndex = 35860;

	template <typename T1, typename T2>
	class MapField_2_Codec : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Protobuf::FieldCodec* keyCodec; // 0x0
		::MiHoYo::SDK::Protobuf::FieldCodec* valueCodec; // 0x0
		::System::UInt32 mapTag; // 0x0
	};
}
