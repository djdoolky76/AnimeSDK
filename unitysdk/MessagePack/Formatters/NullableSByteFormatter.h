#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Nullable_1.h"
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { class NullableSByteFormatter; }

#define MESSAGEPACK_FORMATTERS_NULLABLESBYTEFORMATTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB5B6D0)
#define MESSAGEPACK_FORMATTERS_NULLABLESBYTEFORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB5B540)
#define MESSAGEPACK_FORMATTERS_NULLABLESBYTEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB5B5B0)
#define MESSAGEPACK_FORMATTERS_NULLABLESBYTEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BB5B550)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int NullableSByteFormatter_TypeDefinitionIndex = 7474;

	class NullableSByteFormatter : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::NullableSByteFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::NullableSByteFormatter**)UnitySDK::FromName("MessagePack.Formatters", "NullableSByteFormatter")->GetStaticField(0x48B90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESBYTEFORMATTER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESBYTEFORMATTER_CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::System::Nullable_1<::System::SByte> a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::System::Nullable_1<::System::SByte>, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESBYTEFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Nullable_1<::System::SByte> Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Nullable_1<::System::SByte>(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_NULLABLESBYTEFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
