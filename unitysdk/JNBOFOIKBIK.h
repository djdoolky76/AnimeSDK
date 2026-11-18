#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MEJGOONCCDO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JNBOFOIKBIK_AAKCJADOFNC_1_OFFSET UNITYSDK_OFFSET(0x1B4FD190)
#define JNBOFOIKBIK_AAKCJADOFNC_OFFSET UNITYSDK_OFFSET(0x1B4FD120)
#define JNBOFOIKBIK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JNBOFOIKBIK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80E950)
#define JNBOFOIKBIK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JNBOFOIKBIK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JNBOFOIKBIK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80E940)
#define JNBOFOIKBIK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80E930)
#define JNBOFOIKBIK___INIT_OFFSET UNITYSDK_OFFSET(0x80E910)

inline static constexpr unsigned int JNBOFOIKBIK_TypeDefinitionIndex = 14412;

struct alignas(8) JNBOFOIKBIK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNBOFOIKBIK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JNBOFOIKBIK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MEJGOONCCDO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MEJGOONCCDO&))((::PBYTE)hIl2Cpp + JNBOFOIKBIK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::JNBOFOIKBIK AAKCJADOFNC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JNBOFOIKBIK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JNBOFOIKBIK_AAKCJADOFNC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNBOFOIKBIK_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNBOFOIKBIK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::JNBOFOIKBIK AAKCJADOFNC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JNBOFOIKBIK EIFONLCJOPG)
	{
		return ((::JNBOFOIKBIK(*)(::FlatBuffers::ByteBuffer*, ::JNBOFOIKBIK))((::PBYTE)hIl2Cpp + JNBOFOIKBIK_AAKCJADOFNC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MEJGOONCCDO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MEJGOONCCDO&, ::System::Int32&))((::PBYTE)hIl2Cpp + JNBOFOIKBIK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::JNBOFOIKBIK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JNBOFOIKBIK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JNBOFOIKBIK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
