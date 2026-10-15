#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/Vector4.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { class IMessagePackFormatter; }

#define MESSAGEPACK_FORMATTERS_VECTOR4FORMATTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB81B10)
#define MESSAGEPACK_FORMATTERS_VECTOR4FORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB817B0)
#define MESSAGEPACK_FORMATTERS_VECTOR4FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB81830)
#define MESSAGEPACK_FORMATTERS_VECTOR4FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB817C0)

namespace MessagePack::Formatters
{
	class Vector4Formatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter**)UnitySDK::FromName("MessagePack.Formatters", "Vector4Formatter")->GetStaticField(0x25670);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_VECTOR4FORMATTER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_VECTOR4FORMATTER_CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::System::Numerics::Vector4 a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::System::Numerics::Vector4, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_VECTOR4FORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Numerics::Vector4 Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Numerics::Vector4(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_VECTOR4FORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
