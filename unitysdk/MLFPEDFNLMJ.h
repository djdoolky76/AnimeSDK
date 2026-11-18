#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MABMPFNOLMH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MLFPEDFNLMJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MLFPEDFNLMJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80BBD0)
#define MLFPEDFNLMJ_FLFFMGGAGHN_1_OFFSET UNITYSDK_OFFSET(0x1B31AA90)
#define MLFPEDFNLMJ_FLFFMGGAGHN_OFFSET UNITYSDK_OFFSET(0x1B31AA20)
#define MLFPEDFNLMJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MLFPEDFNLMJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MLFPEDFNLMJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80BC10)
#define MLFPEDFNLMJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80BBC0)
#define MLFPEDFNLMJ___INIT_OFFSET UNITYSDK_OFFSET(0x80BBA0)

inline static constexpr unsigned int MLFPEDFNLMJ_TypeDefinitionIndex = 12952;

struct alignas(8) MLFPEDFNLMJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFPEDFNLMJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MLFPEDFNLMJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFPEDFNLMJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MLFPEDFNLMJ FLFFMGGAGHN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MLFPEDFNLMJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MLFPEDFNLMJ_FLFFMGGAGHN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::MLFPEDFNLMJ FLFFMGGAGHN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MLFPEDFNLMJ EIFONLCJOPG)
	{
		return ((::MLFPEDFNLMJ(*)(::FlatBuffers::ByteBuffer*, ::MLFPEDFNLMJ))((::PBYTE)hIl2Cpp + MLFPEDFNLMJ_FLFFMGGAGHN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFPEDFNLMJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::MLFPEDFNLMJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MLFPEDFNLMJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MLFPEDFNLMJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MABMPFNOLMH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MABMPFNOLMH&, ::System::Int32&))((::PBYTE)hIl2Cpp + MLFPEDFNLMJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MABMPFNOLMH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MABMPFNOLMH&))((::PBYTE)hIl2Cpp + MLFPEDFNLMJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
