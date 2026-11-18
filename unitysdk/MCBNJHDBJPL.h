#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FHGAOMHILGE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MCBNJHDBJPL_BCBODJELEJE_1_OFFSET UNITYSDK_OFFSET(0x17341780)
#define MCBNJHDBJPL_BCBODJELEJE_OFFSET UNITYSDK_OFFSET(0x173414E0)
#define MCBNJHDBJPL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MCBNJHDBJPL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A5940)
#define MCBNJHDBJPL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MCBNJHDBJPL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MCBNJHDBJPL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A5930)
#define MCBNJHDBJPL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A5920)
#define MCBNJHDBJPL___INIT_OFFSET UNITYSDK_OFFSET(0x7A5900)

inline static constexpr unsigned int MCBNJHDBJPL_TypeDefinitionIndex = 16003;

struct alignas(8) MCBNJHDBJPL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCBNJHDBJPL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MCBNJHDBJPL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCBNJHDBJPL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MCBNJHDBJPL BCBODJELEJE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MCBNJHDBJPL EIFONLCJOPG)
	{
		return ((::MCBNJHDBJPL(*)(::FlatBuffers::ByteBuffer*, ::MCBNJHDBJPL))((::PBYTE)hIl2Cpp + MCBNJHDBJPL_BCBODJELEJE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FHGAOMHILGE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FHGAOMHILGE&, ::System::Int32&))((::PBYTE)hIl2Cpp + MCBNJHDBJPL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FHGAOMHILGE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FHGAOMHILGE&))((::PBYTE)hIl2Cpp + MCBNJHDBJPL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::MCBNJHDBJPL BCBODJELEJE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MCBNJHDBJPL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MCBNJHDBJPL_BCBODJELEJE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCBNJHDBJPL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::MCBNJHDBJPL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MCBNJHDBJPL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MCBNJHDBJPL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
