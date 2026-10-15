#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { class BooleanFormatter; }

#define MESSAGEPACK_FORMATTERS_BOOLEANFORMATTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB4EA90)
#define MESSAGEPACK_FORMATTERS_BOOLEANFORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB4EA60)
#define MESSAGEPACK_FORMATTERS_BOOLEANFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB4EA80)
#define MESSAGEPACK_FORMATTERS_BOOLEANFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB4EA70)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int BooleanFormatter_TypeDefinitionIndex = 7468;

	class BooleanFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::BooleanFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::BooleanFormatter**)UnitySDK::FromName("MessagePack.Formatters", "BooleanFormatter")->GetStaticField(0x47FF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BOOLEANFORMATTER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BOOLEANFORMATTER_CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::System::Boolean a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::System::Boolean, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BOOLEANFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BOOLEANFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
