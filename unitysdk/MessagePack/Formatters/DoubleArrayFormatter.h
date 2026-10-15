#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { class DoubleArrayFormatter; }

#define MESSAGEPACK_FORMATTERS_DOUBLEARRAYFORMATTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB72020)
#define MESSAGEPACK_FORMATTERS_DOUBLEARRAYFORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB71CF0)
#define MESSAGEPACK_FORMATTERS_DOUBLEARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB71E30)
#define MESSAGEPACK_FORMATTERS_DOUBLEARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB71D00)

namespace MessagePack::Formatters
{
	class DoubleArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::DoubleArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::DoubleArrayFormatter**)UnitySDK::FromName("MessagePack.Formatters", "DoubleArrayFormatter")->GetStaticField(0x24E90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DOUBLEARRAYFORMATTER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DOUBLEARRAYFORMATTER_CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::Il2CppArray<::System::Double>* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::Il2CppArray<::System::Double>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DOUBLEARRAYFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Double>* Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::Il2CppArray<::System::Double>*(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_DOUBLEARRAYFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
