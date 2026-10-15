#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { class NullableByteFormatter; }
namespace System { class Nullable; }

#define MESSAGEPACK_FORMATTERS_NULLABLEBYTEFORMATTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB7B220)
#define MESSAGEPACK_FORMATTERS_NULLABLEBYTEFORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB7B090)
#define MESSAGEPACK_FORMATTERS_NULLABLEBYTEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB7B100)
#define MESSAGEPACK_FORMATTERS_NULLABLEBYTEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB7B0A0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableByteFormatter_TypeDefinitionIndex = 7472;

	class NullableByteFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableByteFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableByteFormatter**)UnitySDK::FromName("MessagePack.Formatters", "NullableByteFormatter")->GetStaticField(0x25260);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEBYTEFORMATTER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEBYTEFORMATTER_CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::System::Nullable* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::System::Nullable*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEBYTEFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Nullable* Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Nullable*(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLEBYTEFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
