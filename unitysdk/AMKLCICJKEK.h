#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NJBGDDAGKNM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AMKLCICJKEK_BDHBKDFOKMJ_1_OFFSET UNITYSDK_OFFSET(0x17EEA1B0)
#define AMKLCICJKEK_BDHBKDFOKMJ_OFFSET UNITYSDK_OFFSET(0x17EEA0F0)
#define AMKLCICJKEK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AMKLCICJKEK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C1470)
#define AMKLCICJKEK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AMKLCICJKEK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AMKLCICJKEK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C14C0)
#define AMKLCICJKEK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C14B0)
#define AMKLCICJKEK___INIT_OFFSET UNITYSDK_OFFSET(0x7C1450)

inline static constexpr unsigned int AMKLCICJKEK_TypeDefinitionIndex = 17545;

struct alignas(8) AMKLCICJKEK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMKLCICJKEK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMKLCICJKEK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NJBGDDAGKNM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NJBGDDAGKNM&))((::PBYTE)hIl2Cpp + AMKLCICJKEK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::AMKLCICJKEK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AMKLCICJKEK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMKLCICJKEK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::AMKLCICJKEK BDHBKDFOKMJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AMKLCICJKEK EIFONLCJOPG)
	{
		return ((::AMKLCICJKEK(*)(::FlatBuffers::ByteBuffer*, ::AMKLCICJKEK))((::PBYTE)hIl2Cpp + AMKLCICJKEK_BDHBKDFOKMJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMKLCICJKEK_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMKLCICJKEK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::AMKLCICJKEK BDHBKDFOKMJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AMKLCICJKEK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AMKLCICJKEK_BDHBKDFOKMJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NJBGDDAGKNM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NJBGDDAGKNM&, ::System::Int32&))((::PBYTE)hIl2Cpp + AMKLCICJKEK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
