#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackPrimitives_DecodeResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1_075EFA8CFBE0DE9A.h"
namespace MessagePack { class MessagePackPrimitives_Decoders_ReadInt64Int8; }

#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READINT64INT8_CCTOR_OFFSET UNITYSDK_OFFSET(0x174D5F80)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READINT64INT8_CTOR_OFFSET UNITYSDK_OFFSET(0x174D5F20)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READINT64INT8_READ_OFFSET UNITYSDK_OFFSET(0x174D5F30)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackPrimitives_Decoders_ReadInt64Int8_TypeDefinitionIndex = 7195;

	class MessagePackPrimitives_Decoders_ReadInt64Int8 : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackPrimitives_Decoders_ReadInt64Int8** StaticGet_Instance()
		{
			return (::MessagePack::MessagePackPrimitives_Decoders_ReadInt64Int8**)UnitySDK::FromName("MessagePack", "ReadInt64Int8")->GetStaticField(0x2F790);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READINT64INT8_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READINT64INT8_CCTOR_OFFSET))();
		}

		::MessagePack::MessagePackPrimitives_DecodeResult Read(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Byte> a1, ::System::Int64 a2, ::System::Int32 a3)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::PVOID, ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Byte>, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READINT64INT8_READ_OFFSET))(this, a1, a2, a3);
		}

	};
}
