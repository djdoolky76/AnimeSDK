#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_FORCEINT16BLOCKFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF50AB0)
#define MESSAGEPACK_FORMATTERS_FORCEINT16BLOCKFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF50AA0)
#define MESSAGEPACK_FORMATTERS_FORCEINT16BLOCKFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF50AC0)
#define MESSAGEPACK_FORMATTERS_FORCEINT16BLOCKFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF50A90)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ForceInt16BlockFormatter_TypeDefinitionIndex = 30171;

	class ForceInt16BlockFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::ForceInt16BlockFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::ForceInt16BlockFormatter**)Il2CppClass::FromTypeDefinitionIndex(ForceInt16BlockFormatter_TypeDefinitionIndex)->GetStaticField(0x26900);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEINT16BLOCKFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEINT16BLOCKFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Int16 value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Int16, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEINT16BLOCKFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Int16 Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Int16(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEINT16BLOCKFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
