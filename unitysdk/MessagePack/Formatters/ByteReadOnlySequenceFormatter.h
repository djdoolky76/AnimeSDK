#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { class ByteReadOnlySequenceFormatter; }
namespace System::Buffers { class ReadOnlySequence; }

#define MESSAGEPACK_FORMATTERS_BYTEREADONLYSEQUENCEFORMATTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB700A0)
#define MESSAGEPACK_FORMATTERS_BYTEREADONLYSEQUENCEFORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB6FE40)
#define MESSAGEPACK_FORMATTERS_BYTEREADONLYSEQUENCEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB70000)
#define MESSAGEPACK_FORMATTERS_BYTEREADONLYSEQUENCEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB6FE50)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ByteReadOnlySequenceFormatter_TypeDefinitionIndex = 7375;

	class ByteReadOnlySequenceFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::ByteReadOnlySequenceFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::ByteReadOnlySequenceFormatter**)UnitySDK::FromName("MessagePack.Formatters", "ByteReadOnlySequenceFormatter")->GetStaticField(0x24B00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEREADONLYSEQUENCEFORMATTER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEREADONLYSEQUENCEFORMATTER_CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::System::Buffers::ReadOnlySequence* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::System::Buffers::ReadOnlySequence*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEREADONLYSEQUENCEFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Buffers::ReadOnlySequence* Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Buffers::ReadOnlySequence*(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEREADONLYSEQUENCEFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
