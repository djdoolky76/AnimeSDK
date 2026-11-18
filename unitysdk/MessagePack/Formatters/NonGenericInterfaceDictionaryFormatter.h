#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace System::Collections { class IDictionary; }

#define MESSAGEPACK_FORMATTERS_NONGENERICINTERFACEDICTIONARYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1F2FDFC0)
#define MESSAGEPACK_FORMATTERS_NONGENERICINTERFACEDICTIONARYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1F2FD9B0)
#define MESSAGEPACK_FORMATTERS_NONGENERICINTERFACEDICTIONARYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2FE370)
#define MESSAGEPACK_FORMATTERS_NONGENERICINTERFACEDICTIONARYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2FD9A0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NonGenericInterfaceDictionaryFormatter_TypeDefinitionIndex = 29884;

	class NonGenericInterfaceDictionaryFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Collections::IDictionary*>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Collections::IDictionary*>**)Il2CppClass::FromTypeDefinitionIndex(NonGenericInterfaceDictionaryFormatter_TypeDefinitionIndex)->GetStaticField(0x26E70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NONGENERICINTERFACEDICTIONARYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NONGENERICINTERFACEDICTIONARYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Collections::IDictionary* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Collections::IDictionary*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NONGENERICINTERFACEDICTIONARYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Collections::IDictionary* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NONGENERICINTERFACEDICTIONARYFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
