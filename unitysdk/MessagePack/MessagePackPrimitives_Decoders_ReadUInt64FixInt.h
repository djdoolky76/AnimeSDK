#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackPrimitives_DecodeResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1_075EFA8CFBE0DE9A.h"
namespace MessagePack { class MessagePackPrimitives_Decoders_ReadUInt64FixInt; }

#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64FIXINT_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBB7BC0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64FIXINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBB7B70)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64FIXINT_READ_OFFSET UNITYSDK_OFFSET(0x1BBB7B80)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackPrimitives_Decoders_ReadUInt64FixInt_TypeDefinitionIndex = 7189;

	class MessagePackPrimitives_Decoders_ReadUInt64FixInt : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackPrimitives_Decoders_ReadUInt64FixInt** StaticGet_Instance()
		{
			return (::MessagePack::MessagePackPrimitives_Decoders_ReadUInt64FixInt**)UnitySDK::FromName("MessagePack", "ReadUInt64FixInt")->GetStaticField(0x26A20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64FIXINT_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64FIXINT_CCTOR_OFFSET))();
		}

		::MessagePack::MessagePackPrimitives_DecodeResult Read(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Byte> a1, ::System::UInt64 a2, ::System::Int32 a3)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::PVOID, ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Byte>, ::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_READUINT64FIXINT_READ_OFFSET))(this, a1, a2, a3);
		}

	};
}
