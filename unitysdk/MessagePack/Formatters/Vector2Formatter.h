#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/Vector2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_FORMATTERS_VECTOR2FORMATTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB60C30)
#define MESSAGEPACK_FORMATTERS_VECTOR2FORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB609F0)
#define MESSAGEPACK_FORMATTERS_VECTOR2FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB60A80)
#define MESSAGEPACK_FORMATTERS_VECTOR2FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB60A00)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Vector2Formatter_TypeDefinitionIndex = 7497;

	class Vector2Formatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Numerics::Vector2>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Numerics::Vector2>**)UnitySDK::FromName("MessagePack.Formatters", "Vector2Formatter")->GetStaticField(0x491D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_VECTOR2FORMATTER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_VECTOR2FORMATTER_CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::System::Numerics::Vector2 a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::System::Numerics::Vector2, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_VECTOR2FORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Numerics::Vector2 Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Numerics::Vector2(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_VECTOR2FORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
