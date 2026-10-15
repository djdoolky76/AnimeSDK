#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/DateTime.h"
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { class NullableDateTimeFormatter; }
namespace System { class Nullable; }

#define MESSAGEPACK_FORMATTERS_NULLABLEDATETIMEFORMATTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB7B590)
#define MESSAGEPACK_FORMATTERS_NULLABLEDATETIMEFORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB7B420)
#define MESSAGEPACK_FORMATTERS_NULLABLEDATETIMEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB7B450)
#define MESSAGEPACK_FORMATTERS_NULLABLEDATETIMEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB7B430)

namespace MessagePack::Formatters
{
	class NullableDateTimeFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableDateTimeFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableDateTimeFormatter**)UnitySDK::FromName("MessagePack.Formatters", "NullableDateTimeFormatter")->GetStaticField(0x25280);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEDATETIMEFORMATTER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEDATETIMEFORMATTER_CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::System::Nullable* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::System::Nullable*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEDATETIMEFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Nullable* Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Nullable*(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEDATETIMEFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
