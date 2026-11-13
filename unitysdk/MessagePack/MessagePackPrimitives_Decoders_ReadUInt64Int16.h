#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackPrimitives_DecodeResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1_075EFA8CFBE0DE9A.h"
namespace MessagePack { class MessagePackPrimitives_Decoders_ReadUInt64Int16; }

#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64INT16_CCTOR_OFFSET UNITYSDK_OFFSET(0x174D6510)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64INT16_CTOR_OFFSET UNITYSDK_OFFSET(0x174D6460)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64INT16_READ_OFFSET UNITYSDK_OFFSET(0x174D6470)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackPrimitives_Decoders_ReadUInt64Int16_TypeDefinitionIndex = 7207;

	class MessagePackPrimitives_Decoders_ReadUInt64Int16 : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackPrimitives_Decoders_ReadUInt64Int16** StaticGet_Instance()
		{
			return (::MessagePack::MessagePackPrimitives_Decoders_ReadUInt64Int16**)UnitySDK::FromName("MessagePack", "ReadUInt64Int16")->GetStaticField(0x2F850);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64INT16_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64INT16_CCTOR_OFFSET))();
		}

		::MessagePack::MessagePackPrimitives_DecodeResult Read(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Byte> a1, ::System::UInt64 a2, ::System::Int32 a3)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::PVOID, ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Byte>, ::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64INT16_READ_OFFSET))(this, a1, a2, a3);
		}

	};
}
