#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PJOJABEMJGG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OEGGOLELOGJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OEGGOLELOGJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A67A0)
#define OEGGOLELOGJ_BIJMNCEIAFN_1_OFFSET UNITYSDK_OFFSET(0x173659F0)
#define OEGGOLELOGJ_BIJMNCEIAFN_OFFSET UNITYSDK_OFFSET(0x17365980)
#define OEGGOLELOGJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OEGGOLELOGJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OEGGOLELOGJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A67F0)
#define OEGGOLELOGJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A67E0)
#define OEGGOLELOGJ___INIT_OFFSET UNITYSDK_OFFSET(0x7A6780)

inline static constexpr unsigned int OEGGOLELOGJ_TypeDefinitionIndex = 10943;

struct alignas(8) OEGGOLELOGJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEGGOLELOGJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OEGGOLELOGJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::OEGGOLELOGJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OEGGOLELOGJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OEGGOLELOGJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEGGOLELOGJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::OEGGOLELOGJ BIJMNCEIAFN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OEGGOLELOGJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OEGGOLELOGJ_BIJMNCEIAFN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEGGOLELOGJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PJOJABEMJGG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PJOJABEMJGG&))((::PBYTE)hIl2Cpp + OEGGOLELOGJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::OEGGOLELOGJ BIJMNCEIAFN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OEGGOLELOGJ EIFONLCJOPG)
	{
		return ((::OEGGOLELOGJ(*)(::FlatBuffers::ByteBuffer*, ::OEGGOLELOGJ))((::PBYTE)hIl2Cpp + OEGGOLELOGJ_BIJMNCEIAFN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PJOJABEMJGG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PJOJABEMJGG&, ::System::Int32&))((::PBYTE)hIl2Cpp + OEGGOLELOGJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
