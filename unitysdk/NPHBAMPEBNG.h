#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JFFOEDCGBIB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPHBAMPEBNG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NPHBAMPEBNG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AF2F0)
#define NPHBAMPEBNG_CINPMOEIKDJ_1_OFFSET UNITYSDK_OFFSET(0x1D0CF8E0)
#define NPHBAMPEBNG_CINPMOEIKDJ_OFFSET UNITYSDK_OFFSET(0x1D0CF620)
#define NPHBAMPEBNG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NPHBAMPEBNG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NPHBAMPEBNG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8AF330)
#define NPHBAMPEBNG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AF340)
#define NPHBAMPEBNG___INIT_OFFSET UNITYSDK_OFFSET(0x8AF2D0)

inline static constexpr unsigned int NPHBAMPEBNG_TypeDefinitionIndex = 15021;

struct alignas(8) NPHBAMPEBNG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHBAMPEBNG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NPHBAMPEBNG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::NPHBAMPEBNG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NPHBAMPEBNG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NPHBAMPEBNG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NPHBAMPEBNG CINPMOEIKDJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NPHBAMPEBNG EIFONLCJOPG)
	{
		return ((::NPHBAMPEBNG(*)(::FlatBuffers::ByteBuffer*, ::NPHBAMPEBNG))((::PBYTE)hIl2Cpp + NPHBAMPEBNG_CINPMOEIKDJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHBAMPEBNG_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JFFOEDCGBIB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JFFOEDCGBIB&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPHBAMPEBNG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::NPHBAMPEBNG CINPMOEIKDJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NPHBAMPEBNG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NPHBAMPEBNG_CINPMOEIKDJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JFFOEDCGBIB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JFFOEDCGBIB&))((::PBYTE)hIl2Cpp + NPHBAMPEBNG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHBAMPEBNG_PPOMNIFACOL_OFFSET))(this);
	}
};
