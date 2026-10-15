#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { class NullableInt32Formatter; }
namespace System { class Nullable; }

#define MESSAGEPACK_FORMATTERS_NULLABLEINT32FORMATTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB7BB00)
#define MESSAGEPACK_FORMATTERS_NULLABLEINT32FORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB7B9B0)
#define MESSAGEPACK_FORMATTERS_NULLABLEINT32FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB7B9E0)
#define MESSAGEPACK_FORMATTERS_NULLABLEINT32FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB7B9C0)

namespace MessagePack::Formatters
{
	class NullableInt32Formatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableInt32Formatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableInt32Formatter**)UnitySDK::FromName("MessagePack.Formatters", "NullableInt32Formatter")->GetStaticField(0x252F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEINT32FORMATTER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEINT32FORMATTER_CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::System::Nullable* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::System::Nullable*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEINT32FORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Nullable* Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Nullable*(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEINT32FORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
