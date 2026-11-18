#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JHPHNLPJNGI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NNDMMHIIKFI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NNDMMHIIKFI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81A810)
#define NNDMMHIIKFI_FKMJANNCEJP_1_OFFSET UNITYSDK_OFFSET(0x1BAAB3F0)
#define NNDMMHIIKFI_FKMJANNCEJP_OFFSET UNITYSDK_OFFSET(0x1BAAB380)
#define NNDMMHIIKFI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NNDMMHIIKFI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NNDMMHIIKFI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81A800)
#define NNDMMHIIKFI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81A850)
#define NNDMMHIIKFI___INIT_OFFSET UNITYSDK_OFFSET(0x81A7E0)

inline static constexpr unsigned int NNDMMHIIKFI_TypeDefinitionIndex = 14255;

struct alignas(8) NNDMMHIIKFI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNDMMHIIKFI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NNDMMHIIKFI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNDMMHIIKFI_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JHPHNLPJNGI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JHPHNLPJNGI&, ::System::Int32&))((::PBYTE)hIl2Cpp + NNDMMHIIKFI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::NNDMMHIIKFI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NNDMMHIIKFI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NNDMMHIIKFI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JHPHNLPJNGI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JHPHNLPJNGI&))((::PBYTE)hIl2Cpp + NNDMMHIIKFI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNDMMHIIKFI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::NNDMMHIIKFI FKMJANNCEJP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NNDMMHIIKFI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NNDMMHIIKFI_FKMJANNCEJP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::NNDMMHIIKFI FKMJANNCEJP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NNDMMHIIKFI EIFONLCJOPG)
	{
		return ((::NNDMMHIIKFI(*)(::FlatBuffers::ByteBuffer*, ::NNDMMHIIKFI))((::PBYTE)hIl2Cpp + NNDMMHIIKFI_FKMJANNCEJP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
