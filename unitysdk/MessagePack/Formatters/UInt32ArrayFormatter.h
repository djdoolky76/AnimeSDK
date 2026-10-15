#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { class UInt32ArrayFormatter; }

#define MESSAGEPACK_FORMATTERS_UINT32ARRAYFORMATTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB60210)
#define MESSAGEPACK_FORMATTERS_UINT32ARRAYFORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB5FE50)
#define MESSAGEPACK_FORMATTERS_UINT32ARRAYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB60020)
#define MESSAGEPACK_FORMATTERS_UINT32ARRAYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB5FE60)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int UInt32ArrayFormatter_TypeDefinitionIndex = 7458;

	class UInt32ArrayFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::UInt32ArrayFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::UInt32ArrayFormatter**)UnitySDK::FromName("MessagePack.Formatters", "UInt32ArrayFormatter")->GetStaticField(0x49130);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT32ARRAYFORMATTER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT32ARRAYFORMATTER_CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::Il2CppArray<::System::UInt32>* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::Il2CppArray<::System::UInt32>*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT32ARRAYFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::UInt32>* Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_UINT32ARRAYFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
