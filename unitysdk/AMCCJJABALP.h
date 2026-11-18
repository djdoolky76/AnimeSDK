#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NBMJEHMOAOO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AMCCJJABALP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AMCCJJABALP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FAED0)
#define AMCCJJABALP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AMCCJJABALP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AMCCJJABALP_GKGKLFNMMFM_1_OFFSET UNITYSDK_OFFSET(0x1A571AA0)
#define AMCCJJABALP_GKGKLFNMMFM_OFFSET UNITYSDK_OFFSET(0x1A5718A0)
#define AMCCJJABALP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FAF20)
#define AMCCJJABALP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FAF10)
#define AMCCJJABALP___INIT_OFFSET UNITYSDK_OFFSET(0x7FAEB0)

inline static constexpr unsigned int AMCCJJABALP_TypeDefinitionIndex = 10612;

struct alignas(8) AMCCJJABALP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMCCJJABALP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMCCJJABALP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMCCJJABALP_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NBMJEHMOAOO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NBMJEHMOAOO&))((::PBYTE)hIl2Cpp + AMCCJJABALP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::AMCCJJABALP GKGKLFNMMFM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AMCCJJABALP EIFONLCJOPG)
	{
		return ((::AMCCJJABALP(*)(::FlatBuffers::ByteBuffer*, ::AMCCJJABALP))((::PBYTE)hIl2Cpp + AMCCJJABALP_GKGKLFNMMFM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::AMCCJJABALP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AMCCJJABALP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMCCJJABALP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMCCJJABALP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NBMJEHMOAOO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NBMJEHMOAOO&, ::System::Int32&))((::PBYTE)hIl2Cpp + AMCCJJABALP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::AMCCJJABALP GKGKLFNMMFM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AMCCJJABALP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMCCJJABALP_GKGKLFNMMFM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
