#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { class IMessagePackFormatter; }
namespace System::Collections { class BitArray; }

#define MESSAGEPACK_FORMATTERS_BITARRAYFORMATTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB6E9B0)
#define MESSAGEPACK_FORMATTERS_BITARRAYFORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB6E770)
#define MESSAGEPACK_FORMATTERS_BITARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB6E880)
#define MESSAGEPACK_FORMATTERS_BITARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB6E780)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int BitArrayFormatter_TypeDefinitionIndex = 7494;

	class BitArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter**)UnitySDK::FromName("MessagePack.Formatters", "BitArrayFormatter")->GetStaticField(0x24960);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BITARRAYFORMATTER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BITARRAYFORMATTER_CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::System::Collections::BitArray* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::System::Collections::BitArray*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BITARRAYFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::BitArray* Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Collections::BitArray*(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BITARRAYFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
