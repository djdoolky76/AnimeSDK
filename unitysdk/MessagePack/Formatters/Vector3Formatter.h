#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/Vector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_FORMATTERS_VECTOR3FORMATTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD0A480)
#define MESSAGEPACK_FORMATTERS_VECTOR3FORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD0A1B0)
#define MESSAGEPACK_FORMATTERS_VECTOR3FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CD0A230)
#define MESSAGEPACK_FORMATTERS_VECTOR3FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CD0A1C0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Vector3Formatter_TypeDefinitionIndex = 7509;

	class Vector3Formatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Numerics::Vector3>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Numerics::Vector3>**)UnitySDK::FromName("MessagePack.Formatters", "Vector3Formatter")->GetStaticField(0x47DB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_VECTOR3FORMATTER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_VECTOR3FORMATTER_CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::System::Numerics::Vector3 a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::System::Numerics::Vector3, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_VECTOR3FORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Numerics::Vector3 Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Numerics::Vector3(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_VECTOR3FORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
