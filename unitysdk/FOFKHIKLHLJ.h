#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JJJGCLMLHAA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOFKHIKLHLJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FOFKHIKLHLJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x817C80)
#define FOFKHIKLHLJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FOFKHIKLHLJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FOFKHIKLHLJ_KFCBNFBCOFI_1_OFFSET UNITYSDK_OFFSET(0x1A5B1810)
#define FOFKHIKLHLJ_KFCBNFBCOFI_OFFSET UNITYSDK_OFFSET(0x1B9CA7E0)
#define FOFKHIKLHLJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x817CC0)
#define FOFKHIKLHLJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x817C70)
#define FOFKHIKLHLJ___INIT_OFFSET UNITYSDK_OFFSET(0x817C50)

inline static constexpr unsigned int FOFKHIKLHLJ_TypeDefinitionIndex = 14846;

struct alignas(8) FOFKHIKLHLJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFKHIKLHLJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FOFKHIKLHLJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JJJGCLMLHAA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JJJGCLMLHAA&))((::PBYTE)hIl2Cpp + FOFKHIKLHLJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFKHIKLHLJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFKHIKLHLJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::FOFKHIKLHLJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FOFKHIKLHLJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FOFKHIKLHLJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FOFKHIKLHLJ KFCBNFBCOFI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FOFKHIKLHLJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FOFKHIKLHLJ_KFCBNFBCOFI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JJJGCLMLHAA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JJJGCLMLHAA&, ::System::Int32&))((::PBYTE)hIl2Cpp + FOFKHIKLHLJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::FOFKHIKLHLJ KFCBNFBCOFI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FOFKHIKLHLJ EIFONLCJOPG)
	{
		return ((::FOFKHIKLHLJ(*)(::FlatBuffers::ByteBuffer*, ::FOFKHIKLHLJ))((::PBYTE)hIl2Cpp + FOFKHIKLHLJ_KFCBNFBCOFI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
