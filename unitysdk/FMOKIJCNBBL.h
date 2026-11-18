#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PIPBLDAAJBD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FMOKIJCNBBL_BECJPAKACPJ_1_OFFSET UNITYSDK_OFFSET(0x174630A0)
#define FMOKIJCNBBL_BECJPAKACPJ_OFFSET UNITYSDK_OFFSET(0x17463030)
#define FMOKIJCNBBL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FMOKIJCNBBL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A7B70)
#define FMOKIJCNBBL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FMOKIJCNBBL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FMOKIJCNBBL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A7B60)
#define FMOKIJCNBBL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A7BB0)
#define FMOKIJCNBBL___INIT_OFFSET UNITYSDK_OFFSET(0x7A7B40)

inline static constexpr unsigned int FMOKIJCNBBL_TypeDefinitionIndex = 10613;

struct alignas(8) FMOKIJCNBBL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMOKIJCNBBL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMOKIJCNBBL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PIPBLDAAJBD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PIPBLDAAJBD&))((::PBYTE)hIl2Cpp + FMOKIJCNBBL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PIPBLDAAJBD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PIPBLDAAJBD&, ::System::Int32&))((::PBYTE)hIl2Cpp + FMOKIJCNBBL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMOKIJCNBBL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::FMOKIJCNBBL BECJPAKACPJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FMOKIJCNBBL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMOKIJCNBBL_BECJPAKACPJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::FMOKIJCNBBL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FMOKIJCNBBL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMOKIJCNBBL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMOKIJCNBBL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::FMOKIJCNBBL BECJPAKACPJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FMOKIJCNBBL EIFONLCJOPG)
	{
		return ((::FMOKIJCNBBL(*)(::FlatBuffers::ByteBuffer*, ::FMOKIJCNBBL))((::PBYTE)hIl2Cpp + FMOKIJCNBBL_BECJPAKACPJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
