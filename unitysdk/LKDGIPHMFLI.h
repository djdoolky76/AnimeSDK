#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NIJCNNHDHEJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LKDGIPHMFLI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LKDGIPHMFLI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x819CA0)
#define LKDGIPHMFLI_GBFIOMOCEGF_1_OFFSET UNITYSDK_OFFSET(0x1BA8B160)
#define LKDGIPHMFLI_GBFIOMOCEGF_OFFSET UNITYSDK_OFFSET(0x1BA8AE60)
#define LKDGIPHMFLI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LKDGIPHMFLI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LKDGIPHMFLI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x819C80)
#define LKDGIPHMFLI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x819C90)
#define LKDGIPHMFLI___INIT_OFFSET UNITYSDK_OFFSET(0x819C60)

inline static constexpr unsigned int LKDGIPHMFLI_TypeDefinitionIndex = 14677;

struct alignas(8) LKDGIPHMFLI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDGIPHMFLI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LKDGIPHMFLI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LKDGIPHMFLI GBFIOMOCEGF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LKDGIPHMFLI EIFONLCJOPG)
	{
		return ((::LKDGIPHMFLI(*)(::FlatBuffers::ByteBuffer*, ::LKDGIPHMFLI))((::PBYTE)hIl2Cpp + LKDGIPHMFLI_GBFIOMOCEGF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NIJCNNHDHEJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NIJCNNHDHEJ&))((::PBYTE)hIl2Cpp + LKDGIPHMFLI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDGIPHMFLI_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NIJCNNHDHEJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NIJCNNHDHEJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + LKDGIPHMFLI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDGIPHMFLI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::LKDGIPHMFLI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LKDGIPHMFLI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LKDGIPHMFLI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LKDGIPHMFLI GBFIOMOCEGF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LKDGIPHMFLI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LKDGIPHMFLI_GBFIOMOCEGF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
