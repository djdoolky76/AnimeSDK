#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { class BooleanArrayFormatter; }

#define MESSAGEPACK_FORMATTERS_BOOLEANARRAYFORMATTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB6F250)
#define MESSAGEPACK_FORMATTERS_BOOLEANARRAYFORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB6E9F0)
#define MESSAGEPACK_FORMATTERS_BOOLEANARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB6ED30)
#define MESSAGEPACK_FORMATTERS_BOOLEANARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB6EA00)

namespace MessagePack::Formatters
{
	class BooleanArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::BooleanArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::BooleanArrayFormatter**)UnitySDK::FromName("MessagePack.Formatters", "BooleanArrayFormatter")->GetStaticField(0x249C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BOOLEANARRAYFORMATTER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BOOLEANARRAYFORMATTER_CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::Il2CppArray<::System::Boolean>* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::Il2CppArray<::System::Boolean>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BOOLEANARRAYFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Boolean>* Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::Il2CppArray<::System::Boolean>*(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_BOOLEANARRAYFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
