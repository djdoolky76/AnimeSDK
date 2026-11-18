#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DADMGGNJAPE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IKMKMKOHLHL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IKMKMKOHLHL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80F810)
#define IKMKMKOHLHL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IKMKMKOHLHL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IKMKMKOHLHL_HBPEBGMJGNE_1_OFFSET UNITYSDK_OFFSET(0x1B628B90)
#define IKMKMKOHLHL_HBPEBGMJGNE_OFFSET UNITYSDK_OFFSET(0x1B628AF0)
#define IKMKMKOHLHL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80F7F0)
#define IKMKMKOHLHL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80F800)
#define IKMKMKOHLHL___INIT_OFFSET UNITYSDK_OFFSET(0x80F7D0)

inline static constexpr unsigned int IKMKMKOHLHL_TypeDefinitionIndex = 10341;

struct alignas(8) IKMKMKOHLHL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMKMKOHLHL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IKMKMKOHLHL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMKMKOHLHL_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DADMGGNJAPE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DADMGGNJAPE&, ::System::Int32&))((::PBYTE)hIl2Cpp + IKMKMKOHLHL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMKMKOHLHL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::IKMKMKOHLHL HBPEBGMJGNE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IKMKMKOHLHL EIFONLCJOPG)
	{
		return ((::IKMKMKOHLHL(*)(::FlatBuffers::ByteBuffer*, ::IKMKMKOHLHL))((::PBYTE)hIl2Cpp + IKMKMKOHLHL_HBPEBGMJGNE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::IKMKMKOHLHL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IKMKMKOHLHL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IKMKMKOHLHL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DADMGGNJAPE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DADMGGNJAPE&))((::PBYTE)hIl2Cpp + IKMKMKOHLHL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::IKMKMKOHLHL HBPEBGMJGNE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IKMKMKOHLHL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IKMKMKOHLHL_HBPEBGMJGNE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
