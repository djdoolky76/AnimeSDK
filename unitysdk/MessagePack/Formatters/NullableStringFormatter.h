#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { class NullableStringFormatter; }
namespace System { class String; }

#define MESSAGEPACK_FORMATTERS_NULLABLESTRINGFORMATTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB7C330)
#define MESSAGEPACK_FORMATTERS_NULLABLESTRINGFORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB7C300)
#define MESSAGEPACK_FORMATTERS_NULLABLESTRINGFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB7C320)
#define MESSAGEPACK_FORMATTERS_NULLABLESTRINGFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB7C310)

namespace MessagePack::Formatters
{
	class NullableStringFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableStringFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableStringFormatter**)UnitySDK::FromName("MessagePack.Formatters", "NullableStringFormatter")->GetStaticField(0x253B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESTRINGFORMATTER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESTRINGFORMATTER_CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::System::String* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::System::String*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESTRINGFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::String* Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::String*(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESTRINGFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
