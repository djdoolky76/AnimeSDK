#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_UINT32ARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF8B880)
#define MESSAGEPACK_FORMATTERS_UINT32ARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF8B800)
#define MESSAGEPACK_FORMATTERS_UINT32ARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF8B940)
#define MESSAGEPACK_FORMATTERS_UINT32ARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF8B7F0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int UInt32ArrayFormatter_TypeDefinitionIndex = 29350;

	class UInt32ArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::UInt32ArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::UInt32ArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(UInt32ArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x26670);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT32ARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT32ARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::Il2CppArray<::System::UInt32>* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Il2CppArray<::System::UInt32>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT32ARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::Il2CppArray<::System::UInt32>* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT32ARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
