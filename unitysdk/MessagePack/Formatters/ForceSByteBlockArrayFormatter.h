#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_FORCESBYTEBLOCKARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF88DF0)
#define MESSAGEPACK_FORMATTERS_FORCESBYTEBLOCKARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF88D70)
#define MESSAGEPACK_FORMATTERS_FORCESBYTEBLOCKARRAYFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF88F60)
#define MESSAGEPACK_FORMATTERS_FORCESBYTEBLOCKARRAYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF88D60)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ForceSByteBlockArrayFormatter_TypeDefinitionIndex = 29608;

	class ForceSByteBlockArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::ForceSByteBlockArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::ForceSByteBlockArrayFormatter**)Il2CppClass::FromTypeDefinitionIndex(ForceSByteBlockArrayFormatter_TypeDefinitionIndex)->GetStaticField(0x26630);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCESBYTEBLOCKARRAYFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCESBYTEBLOCKARRAYFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::Il2CppArray<::System::SByte>* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Il2CppArray<::System::SByte>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCESBYTEBLOCKARRAYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::Il2CppArray<::System::SByte>* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::Il2CppArray<::System::SByte>*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCESBYTEBLOCKARRAYFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
