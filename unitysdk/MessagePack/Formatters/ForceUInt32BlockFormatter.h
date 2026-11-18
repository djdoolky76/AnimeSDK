#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_FORMATTERS_FORCEUINT32BLOCKFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF50B90)
#define MESSAGEPACK_FORMATTERS_FORCEUINT32BLOCKFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF50B80)
#define MESSAGEPACK_FORMATTERS_FORCEUINT32BLOCKFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF50BA0)
#define MESSAGEPACK_FORMATTERS_FORCEUINT32BLOCKFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF50B70)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ForceUInt32BlockFormatter_TypeDefinitionIndex = 30734;

	class ForceUInt32BlockFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::ForceUInt32BlockFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::ForceUInt32BlockFormatter**)Il2CppClass::FromTypeDefinitionIndex(ForceUInt32BlockFormatter_TypeDefinitionIndex)->GetStaticField(0x26920);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEUINT32BLOCKFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEUINT32BLOCKFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::UInt32 value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::UInt32, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEUINT32BLOCKFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::UInt32 Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::UInt32(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_FORCEUINT32BLOCKFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
