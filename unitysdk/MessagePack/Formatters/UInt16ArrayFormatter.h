#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { class UInt16ArrayFormatter; }

#define MESSAGEPACK_FORMATTERS_UINT16ARRAYFORMATTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB80540)
#define MESSAGEPACK_FORMATTERS_UINT16ARRAYFORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB80180)
#define MESSAGEPACK_FORMATTERS_UINT16ARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB80350)
#define MESSAGEPACK_FORMATTERS_UINT16ARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB80190)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int UInt16ArrayFormatter_TypeDefinitionIndex = 7455;

	class UInt16ArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::UInt16ArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::UInt16ArrayFormatter**)UnitySDK::FromName("MessagePack.Formatters", "UInt16ArrayFormatter")->GetStaticField(0x25530);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT16ARRAYFORMATTER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT16ARRAYFORMATTER_CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::Il2CppArray<::System::UInt16>* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::Il2CppArray<::System::UInt16>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT16ARRAYFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::UInt16>* Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::Il2CppArray<::System::UInt16>*(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT16ARRAYFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
