#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NLDLJJDFAHF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HLIDIILPOBI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HLIDIILPOBI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80F2E0)
#define HLIDIILPOBI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HLIDIILPOBI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HLIDIILPOBI_HCBEKJFBDGD_1_OFFSET UNITYSDK_OFFSET(0x1B614410)
#define HLIDIILPOBI_HCBEKJFBDGD_OFFSET UNITYSDK_OFFSET(0x1B6143B0)
#define HLIDIILPOBI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80F2D0)
#define HLIDIILPOBI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80F2C0)
#define HLIDIILPOBI___INIT_OFFSET UNITYSDK_OFFSET(0x80F2A0)

inline static constexpr unsigned int HLIDIILPOBI_TypeDefinitionIndex = 12737;

struct alignas(8) HLIDIILPOBI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLIDIILPOBI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLIDIILPOBI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLIDIILPOBI_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLIDIILPOBI_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NLDLJJDFAHF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NLDLJJDFAHF&, ::System::Int32&))((::PBYTE)hIl2Cpp + HLIDIILPOBI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::HLIDIILPOBI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HLIDIILPOBI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLIDIILPOBI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HLIDIILPOBI HCBEKJFBDGD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HLIDIILPOBI EIFONLCJOPG)
	{
		return ((::HLIDIILPOBI(*)(::FlatBuffers::ByteBuffer*, ::HLIDIILPOBI))((::PBYTE)hIl2Cpp + HLIDIILPOBI_HCBEKJFBDGD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::HLIDIILPOBI HCBEKJFBDGD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HLIDIILPOBI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HLIDIILPOBI_HCBEKJFBDGD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NLDLJJDFAHF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NLDLJJDFAHF&))((::PBYTE)hIl2Cpp + HLIDIILPOBI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
