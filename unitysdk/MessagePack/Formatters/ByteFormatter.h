#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { class ByteFormatter; }

#define MESSAGEPACK_FORMATTERS_BYTEFORMATTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCF8690)
#define MESSAGEPACK_FORMATTERS_BYTEFORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCF85D0)
#define MESSAGEPACK_FORMATTERS_BYTEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CCF85F0)
#define MESSAGEPACK_FORMATTERS_BYTEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CCF85E0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ByteFormatter_TypeDefinitionIndex = 7482;

	class ByteFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::ByteFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::ByteFormatter**)UnitySDK::FromName("MessagePack.Formatters", "ByteFormatter")->GetStaticField(0x46830);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEFORMATTER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEFORMATTER_CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::System::Byte a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::System::Byte, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Byte Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Byte(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
