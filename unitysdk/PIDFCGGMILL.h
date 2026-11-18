#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LBNEFIOBGAE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PIDFCGGMILL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PIDFCGGMILL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x806390)
#define PIDFCGGMILL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PIDFCGGMILL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PIDFCGGMILL_JNOBNNGAIOO_1_OFFSET UNITYSDK_OFFSET(0x1AD983C0)
#define PIDFCGGMILL_JNOBNNGAIOO_OFFSET UNITYSDK_OFFSET(0x1AD98350)
#define PIDFCGGMILL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x806380)
#define PIDFCGGMILL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8063D0)
#define PIDFCGGMILL___INIT_OFFSET UNITYSDK_OFFSET(0x806360)

inline static constexpr unsigned int PIDFCGGMILL_TypeDefinitionIndex = 16685;

struct alignas(8) PIDFCGGMILL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIDFCGGMILL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PIDFCGGMILL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LBNEFIOBGAE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LBNEFIOBGAE&))((::PBYTE)hIl2Cpp + PIDFCGGMILL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::PIDFCGGMILL JNOBNNGAIOO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PIDFCGGMILL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PIDFCGGMILL_JNOBNNGAIOO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::PIDFCGGMILL JNOBNNGAIOO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PIDFCGGMILL EIFONLCJOPG)
	{
		return ((::PIDFCGGMILL(*)(::FlatBuffers::ByteBuffer*, ::PIDFCGGMILL))((::PBYTE)hIl2Cpp + PIDFCGGMILL_JNOBNNGAIOO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LBNEFIOBGAE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LBNEFIOBGAE&, ::System::Int32&))((::PBYTE)hIl2Cpp + PIDFCGGMILL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::PIDFCGGMILL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PIDFCGGMILL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PIDFCGGMILL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIDFCGGMILL_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIDFCGGMILL_PPOMNIFACOL_OFFSET))(this);
	}
};
