#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1_075EFA8CFBE0DE9A.h"
#include "unitysdk/System/Span_1_0C0D59FF8BC7380B.h"

#define MESSAGEPACK_LZ4_LZ4CODEC_BLOCKCOPY32_OFFSET UNITYSDK_OFFSET(0x1BBB0970)
#define MESSAGEPACK_LZ4_LZ4CODEC_BLOCKCOPY64_OFFSET UNITYSDK_OFFSET(0x1BBB09F0)
#define MESSAGEPACK_LZ4_LZ4CODEC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBB0A90)
#define MESSAGEPACK_LZ4_LZ4CODEC_DECODE_OFFSET UNITYSDK_OFFSET(0x1BBB00F0)
#define MESSAGEPACK_LZ4_LZ4CODEC_ENCODE_OFFSET UNITYSDK_OFFSET(0x1BBAE090)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESS64KCTX_32_OFFSET UNITYSDK_OFFSET(0x1BBAE3D0)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESS64KCTX_64_OFFSET UNITYSDK_OFFSET(0x1BBAEA80)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESSCTX_32_OFFSET UNITYSDK_OFFSET(0x1BBAF310)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESSCTX_64_OFFSET UNITYSDK_OFFSET(0x1BBAF9D0)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_UNCOMPRESS_32_OFFSET UNITYSDK_OFFSET(0x1BBB0230)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_UNCOMPRESS_64_OFFSET UNITYSDK_OFFSET(0x1BBB05A0)
#define MESSAGEPACK_LZ4_LZ4CODEC_MAXIMUMOUTPUTLENGTH_OFFSET UNITYSDK_OFFSET(0x1BBAE020)

namespace MessagePack::LZ4
{
	class LZ4Codec : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_DEBRUIJN_TABLE_32()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("MessagePack.LZ4", "LZ4Codec")->GetStaticField(0x26810);
		}

		static ::Il2CppArray<::System::Int32>** StaticGet_DECODER_TABLE_32()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("MessagePack.LZ4", "LZ4Codec")->GetStaticField(0x26818);
		}

		static ::Il2CppArray<::System::Int32>** StaticGet_DEBRUIJN_TABLE_64()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("MessagePack.LZ4", "LZ4Codec")->GetStaticField(0x26820);
		}

		static ::Il2CppArray<::System::Int32>** StaticGet_DECODER_TABLE_64()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("MessagePack.LZ4", "LZ4Codec")->GetStaticField(0x26828);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_CCTOR_OFFSET))();
		}

		static ::System::Int32 MaximumOutputLength(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_MAXIMUMOUTPUTLENGTH_OFFSET))(a1);
		}

		static ::System::Int32 Encode(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Byte> a1, ::System::Span_1_0C0D59FF8BC7380B<::System::Byte> a2)
		{
			return ((::System::Int32(*)(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Byte>, ::System::Span_1_0C0D59FF8BC7380B<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_ENCODE_OFFSET))(a1, a2);
		}

		static ::System::Int32 Decode(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Byte> a1, ::System::Span_1_0C0D59FF8BC7380B<::System::Byte> a2)
		{
			return ((::System::Int32(*)(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Byte>, ::System::Span_1_0C0D59FF8BC7380B<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_DECODE_OFFSET))(a1, a2);
		}

		static ::System::Int32 LZ4_compressCtx_32(::PVOID a1, ::PVOID a2, ::PVOID a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESSCTX_32_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 LZ4_compress64kCtx_32(::PVOID a1, ::PVOID a2, ::PVOID a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESS64KCTX_32_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 LZ4_uncompress_32(::PVOID a1, ::PVOID a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_LZ4_UNCOMPRESS_32_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BlockCopy32(::PVOID a1, ::PVOID a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_BLOCKCOPY32_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 LZ4_compressCtx_64(::PVOID a1, ::PVOID a2, ::PVOID a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESSCTX_64_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 LZ4_compress64kCtx_64(::PVOID a1, ::PVOID a2, ::PVOID a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESS64KCTX_64_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 LZ4_uncompress_64(::PVOID a1, ::PVOID a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_LZ4_UNCOMPRESS_64_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BlockCopy64(::PVOID a1, ::PVOID a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_BLOCKCOPY64_OFFSET))(a1, a2, a3);
		}

	};
}
