#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf { class FieldCodec; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_FIELDCODEC_FORINT32_OFFSET UNITYSDK_OFFSET(0x1BBE3AE0)
#define MIHOYO_SDK_PROTOBUF_FIELDCODEC_FORSTRING_OFFSET UNITYSDK_OFFSET(0x1BBE3880)

namespace MiHoYo::SDK::Protobuf
{
	class FieldCodec : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::FieldCodec* ForString(::System::UInt32 a1)
		{
			return ((::MiHoYo::SDK::Protobuf::FieldCodec*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_FIELDCODEC_FORSTRING_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::Protobuf::FieldCodec* ForInt32(::System::UInt32 a1)
		{
			return ((::MiHoYo::SDK::Protobuf::FieldCodec*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_FIELDCODEC_FORINT32_OFFSET))(a1);
		}

	};
}
