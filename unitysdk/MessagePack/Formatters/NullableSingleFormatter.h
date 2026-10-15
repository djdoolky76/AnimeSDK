#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { class NullableSingleFormatter; }
namespace System { class Nullable; }

#define MESSAGEPACK_FORMATTERS_NULLABLESINGLEFORMATTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB7C090)
#define MESSAGEPACK_FORMATTERS_NULLABLESINGLEFORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB7BF40)
#define MESSAGEPACK_FORMATTERS_NULLABLESINGLEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB7BF70)
#define MESSAGEPACK_FORMATTERS_NULLABLESINGLEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB7BF50)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableSingleFormatter_TypeDefinitionIndex = 7463;

	class NullableSingleFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableSingleFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableSingleFormatter**)UnitySDK::FromName("MessagePack.Formatters", "NullableSingleFormatter")->GetStaticField(0x25370);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESINGLEFORMATTER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESINGLEFORMATTER_CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::System::Nullable* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::System::Nullable*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESINGLEFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Nullable* Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Nullable*(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESINGLEFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
