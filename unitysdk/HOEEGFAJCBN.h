#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JNMDCLDJNHM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HOEEGFAJCBN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HOEEGFAJCBN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80F3A0)
#define HOEEGFAJCBN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HOEEGFAJCBN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HOEEGFAJCBN_JIBOPHPHLEG_1_OFFSET UNITYSDK_OFFSET(0x1B617D80)
#define HOEEGFAJCBN_JIBOPHPHLEG_OFFSET UNITYSDK_OFFSET(0x1B617CE0)
#define HOEEGFAJCBN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80F3E0)
#define HOEEGFAJCBN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80F3F0)
#define HOEEGFAJCBN___INIT_OFFSET UNITYSDK_OFFSET(0x80F380)

inline static constexpr unsigned int HOEEGFAJCBN_TypeDefinitionIndex = 14404;

struct alignas(8) HOEEGFAJCBN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEEGFAJCBN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HOEEGFAJCBN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEEGFAJCBN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HOEEGFAJCBN JIBOPHPHLEG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HOEEGFAJCBN EIFONLCJOPG)
	{
		return ((::HOEEGFAJCBN(*)(::FlatBuffers::ByteBuffer*, ::HOEEGFAJCBN))((::PBYTE)hIl2Cpp + HOEEGFAJCBN_JIBOPHPHLEG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::HOEEGFAJCBN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HOEEGFAJCBN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HOEEGFAJCBN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HOEEGFAJCBN JIBOPHPHLEG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HOEEGFAJCBN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HOEEGFAJCBN_JIBOPHPHLEG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JNMDCLDJNHM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JNMDCLDJNHM&))((::PBYTE)hIl2Cpp + HOEEGFAJCBN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JNMDCLDJNHM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JNMDCLDJNHM&, ::System::Int32&))((::PBYTE)hIl2Cpp + HOEEGFAJCBN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEEGFAJCBN_PPOMNIFACOL_OFFSET))(this);
	}
};
