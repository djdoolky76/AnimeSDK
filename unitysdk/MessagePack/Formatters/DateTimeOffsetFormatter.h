#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { class IMessagePackFormatter; }

#define MESSAGEPACK_FORMATTERS_DATETIMEOFFSETFORMATTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB70F00)
#define MESSAGEPACK_FORMATTERS_DATETIMEOFFSETFORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB70C30)
#define MESSAGEPACK_FORMATTERS_DATETIMEOFFSETFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB70D30)
#define MESSAGEPACK_FORMATTERS_DATETIMEOFFSETFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB70C40)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int DateTimeOffsetFormatter_TypeDefinitionIndex = 7488;

	class DateTimeOffsetFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter**)UnitySDK::FromName("MessagePack.Formatters", "DateTimeOffsetFormatter")->GetStaticField(0x24DB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DATETIMEOFFSETFORMATTER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DATETIMEOFFSETFORMATTER_CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::System::DateTimeOffset a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::System::DateTimeOffset, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DATETIMEOFFSETFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::DateTimeOffset Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DATETIMEOFFSETFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
