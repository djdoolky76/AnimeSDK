#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { class IMessagePackFormatter; }

#define MESSAGEPACK_FORMATTERS_GUIDFORMATTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB75EA0)
#define MESSAGEPACK_FORMATTERS_GUIDFORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB743B0)
#define MESSAGEPACK_FORMATTERS_GUIDFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB75100)
#define MESSAGEPACK_FORMATTERS_GUIDFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB743C0)

namespace MessagePack::Formatters
{
	class GuidFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter**)UnitySDK::FromName("MessagePack.Formatters", "GuidFormatter")->GetStaticField(0x250B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GUIDFORMATTER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GUIDFORMATTER_CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::System::Guid a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::System::Guid, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GUIDFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Guid Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Guid(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GUIDFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
