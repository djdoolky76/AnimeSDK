#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { class IMessagePackFormatter; }
namespace System { class Uri; }

#define MESSAGEPACK_FORMATTERS_URIFORMATTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB811E0)
#define MESSAGEPACK_FORMATTERS_URIFORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB81080)
#define MESSAGEPACK_FORMATTERS_URIFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB81190)
#define MESSAGEPACK_FORMATTERS_URIFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB81090)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int UriFormatter_TypeDefinitionIndex = 7490;

	class UriFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter**)UnitySDK::FromName("MessagePack.Formatters", "UriFormatter")->GetStaticField(0x25640);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_URIFORMATTER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_URIFORMATTER_CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::System::Uri* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::System::Uri*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_URIFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Uri* Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Uri*(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_URIFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
