#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FDINIHPBNNB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JIEICEJKMPI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JIEICEJKMPI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80FBD0)
#define JIEICEJKMPI_BONGBICHKFL_1_OFFSET UNITYSDK_OFFSET(0x1B634E60)
#define JIEICEJKMPI_BONGBICHKFL_OFFSET UNITYSDK_OFFSET(0x1B634DA0)
#define JIEICEJKMPI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JIEICEJKMPI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JIEICEJKMPI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80FC20)
#define JIEICEJKMPI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80FC10)
#define JIEICEJKMPI___INIT_OFFSET UNITYSDK_OFFSET(0x80FBB0)

inline static constexpr unsigned int JIEICEJKMPI_TypeDefinitionIndex = 13369;

struct alignas(8) JIEICEJKMPI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIEICEJKMPI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JIEICEJKMPI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::JIEICEJKMPI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JIEICEJKMPI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JIEICEJKMPI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JIEICEJKMPI BONGBICHKFL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JIEICEJKMPI EIFONLCJOPG)
	{
		return ((::JIEICEJKMPI(*)(::FlatBuffers::ByteBuffer*, ::JIEICEJKMPI))((::PBYTE)hIl2Cpp + JIEICEJKMPI_BONGBICHKFL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIEICEJKMPI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::JIEICEJKMPI BONGBICHKFL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JIEICEJKMPI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JIEICEJKMPI_BONGBICHKFL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIEICEJKMPI_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FDINIHPBNNB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FDINIHPBNNB&))((::PBYTE)hIl2Cpp + JIEICEJKMPI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FDINIHPBNNB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FDINIHPBNNB&, ::System::Int32&))((::PBYTE)hIl2Cpp + JIEICEJKMPI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
