#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { class SingleArrayFormatter; }

#define MESSAGEPACK_FORMATTERS_SINGLEARRAYFORMATTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB7FDB0)
#define MESSAGEPACK_FORMATTERS_SINGLEARRAYFORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB7FA80)
#define MESSAGEPACK_FORMATTERS_SINGLEARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB7FBC0)
#define MESSAGEPACK_FORMATTERS_SINGLEARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB7FA90)

namespace MessagePack::Formatters
{
	class SingleArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::SingleArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::SingleArrayFormatter**)UnitySDK::FromName("MessagePack.Formatters", "SingleArrayFormatter")->GetStaticField(0x254C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SINGLEARRAYFORMATTER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SINGLEARRAYFORMATTER_CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::Il2CppArray<::System::Single>* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::Il2CppArray<::System::Single>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SINGLEARRAYFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Single>* Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_SINGLEARRAYFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
