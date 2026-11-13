#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { class ByteArrayFormatter; }

#define MESSAGEPACK_FORMATTERS_BYTEARRAYFORMATTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1748DD50)
#define MESSAGEPACK_FORMATTERS_BYTEARRAYFORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1748D990)
#define MESSAGEPACK_FORMATTERS_BYTEARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1748DA40)
#define MESSAGEPACK_FORMATTERS_BYTEARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1748D9A0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ByteArrayFormatter_TypeDefinitionIndex = 7494;

	class ByteArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::ByteArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::ByteArrayFormatter**)UnitySDK::FromName("MessagePack.Formatters", "ByteArrayFormatter")->GetStaticField(0x2C280);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEARRAYFORMATTER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEARRAYFORMATTER_CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::Il2CppArray<::System::Byte>* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::Il2CppArray<::System::Byte>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEARRAYFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Byte>* Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BYTEARRAYFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
