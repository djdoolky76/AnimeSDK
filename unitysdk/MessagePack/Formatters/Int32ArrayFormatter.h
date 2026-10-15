#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { class Int32ArrayFormatter; }

#define MESSAGEPACK_FORMATTERS_INT32ARRAYFORMATTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB767A0)
#define MESSAGEPACK_FORMATTERS_INT32ARRAYFORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB763E0)
#define MESSAGEPACK_FORMATTERS_INT32ARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB765B0)
#define MESSAGEPACK_FORMATTERS_INT32ARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB763F0)

namespace MessagePack::Formatters
{
	class Int32ArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::Int32ArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::Int32ArrayFormatter**)UnitySDK::FromName("MessagePack.Formatters", "Int32ArrayFormatter")->GetStaticField(0x25110);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT32ARRAYFORMATTER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT32ARRAYFORMATTER_CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::Il2CppArray<::System::Int32>* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::Il2CppArray<::System::Int32>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT32ARRAYFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Int32>* Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_INT32ARRAYFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
