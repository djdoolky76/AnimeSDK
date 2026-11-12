#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace System::Text { class StringBuilder; }

#define MESSAGEPACK_FORMATTERS_STRINGBUILDERFORMATTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD08D50)
#define MESSAGEPACK_FORMATTERS_STRINGBUILDERFORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD08C00)
#define MESSAGEPACK_FORMATTERS_STRINGBUILDERFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CD08C50)
#define MESSAGEPACK_FORMATTERS_STRINGBUILDERFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CD08C10)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int StringBuilderFormatter_TypeDefinitionIndex = 7504;

	class StringBuilderFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<::System::Text::StringBuilder*>** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<::System::Text::StringBuilder*>**)UnitySDK::FromName("MessagePack.Formatters", "StringBuilderFormatter")->GetStaticField(0x47BC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_STRINGBUILDERFORMATTER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_STRINGBUILDERFORMATTER_CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::System::Text::StringBuilder* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::System::Text::StringBuilder*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_STRINGBUILDERFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Text::StringBuilder* Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_STRINGBUILDERFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
