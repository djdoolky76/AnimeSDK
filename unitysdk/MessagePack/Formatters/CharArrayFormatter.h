#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { class CharArrayFormatter; }

#define MESSAGEPACK_FORMATTERS_CHARARRAYFORMATTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1748EB30)
#define MESSAGEPACK_FORMATTERS_CHARARRAYFORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1748E770)
#define MESSAGEPACK_FORMATTERS_CHARARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1748E940)
#define MESSAGEPACK_FORMATTERS_CHARARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1748E780)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int CharArrayFormatter_TypeDefinitionIndex = 7489;

	class CharArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::CharArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::CharArrayFormatter**)UnitySDK::FromName("MessagePack.Formatters", "CharArrayFormatter")->GetStaticField(0x2C3F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_CHARARRAYFORMATTER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_CHARARRAYFORMATTER_CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::Il2CppArray<::System::Char>* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::Il2CppArray<::System::Char>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_CHARARRAYFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Char>* Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_CHARARRAYFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
