#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OEMNFIFIAAK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NJAJHHKELPI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NJAJHHKELPI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x805680)
#define NJAJHHKELPI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NJAJHHKELPI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NJAJHHKELPI_KFJDILHOEHA_1_OFFSET UNITYSDK_OFFSET(0x1AD80950)
#define NJAJHHKELPI_KFJDILHOEHA_OFFSET UNITYSDK_OFFSET(0x1AD80750)
#define NJAJHHKELPI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x805660)
#define NJAJHHKELPI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x805670)
#define NJAJHHKELPI___INIT_OFFSET UNITYSDK_OFFSET(0x805640)

inline static constexpr unsigned int NJAJHHKELPI_TypeDefinitionIndex = 13401;

struct alignas(8) NJAJHHKELPI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJAJHHKELPI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NJAJHHKELPI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OEMNFIFIAAK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OEMNFIFIAAK&))((::PBYTE)hIl2Cpp + NJAJHHKELPI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJAJHHKELPI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::NJAJHHKELPI KFJDILHOEHA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NJAJHHKELPI EIFONLCJOPG)
	{
		return ((::NJAJHHKELPI(*)(::FlatBuffers::ByteBuffer*, ::NJAJHHKELPI))((::PBYTE)hIl2Cpp + NJAJHHKELPI_KFJDILHOEHA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OEMNFIFIAAK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OEMNFIFIAAK&, ::System::Int32&))((::PBYTE)hIl2Cpp + NJAJHHKELPI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJAJHHKELPI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::NJAJHHKELPI KFJDILHOEHA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NJAJHHKELPI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NJAJHHKELPI_KFJDILHOEHA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::NJAJHHKELPI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NJAJHHKELPI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NJAJHHKELPI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
