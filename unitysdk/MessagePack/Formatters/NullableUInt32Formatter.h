#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { class NullableUInt32Formatter; }
namespace System { class Nullable; }

#define MESSAGEPACK_FORMATTERS_NULLABLEUINT32FORMATTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB7C680)
#define MESSAGEPACK_FORMATTERS_NULLABLEUINT32FORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB7C530)
#define MESSAGEPACK_FORMATTERS_NULLABLEUINT32FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB7C560)
#define MESSAGEPACK_FORMATTERS_NULLABLEUINT32FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB7C540)

namespace MessagePack::Formatters
{
	class NullableUInt32Formatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableUInt32Formatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableUInt32Formatter**)UnitySDK::FromName("MessagePack.Formatters", "NullableUInt32Formatter")->GetStaticField(0x253D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEUINT32FORMATTER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEUINT32FORMATTER_CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::System::Nullable* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::System::Nullable*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEUINT32FORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Nullable* Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Nullable*(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEUINT32FORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
