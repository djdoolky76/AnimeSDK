#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KLEPKPNNPMG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIMPPKGLGMH_AAGEPMKBPIB_1_OFFSET UNITYSDK_OFFSET(0x195A4640)
#define MIMPPKGLGMH_AAGEPMKBPIB_OFFSET UNITYSDK_OFFSET(0x195A45E0)
#define MIMPPKGLGMH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MIMPPKGLGMH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E6490)
#define MIMPPKGLGMH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MIMPPKGLGMH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MIMPPKGLGMH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E6480)
#define MIMPPKGLGMH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E64D0)
#define MIMPPKGLGMH___INIT_OFFSET UNITYSDK_OFFSET(0x7E6460)

inline static constexpr unsigned int MIMPPKGLGMH_TypeDefinitionIndex = 15388;

struct alignas(8) MIMPPKGLGMH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMPPKGLGMH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MIMPPKGLGMH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KLEPKPNNPMG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KLEPKPNNPMG&, ::System::Int32&))((::PBYTE)hIl2Cpp + MIMPPKGLGMH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KLEPKPNNPMG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KLEPKPNNPMG&))((::PBYTE)hIl2Cpp + MIMPPKGLGMH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMPPKGLGMH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::MIMPPKGLGMH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MIMPPKGLGMH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MIMPPKGLGMH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMPPKGLGMH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MIMPPKGLGMH AAGEPMKBPIB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MIMPPKGLGMH EIFONLCJOPG)
	{
		return ((::MIMPPKGLGMH(*)(::FlatBuffers::ByteBuffer*, ::MIMPPKGLGMH))((::PBYTE)hIl2Cpp + MIMPPKGLGMH_AAGEPMKBPIB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::MIMPPKGLGMH AAGEPMKBPIB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MIMPPKGLGMH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MIMPPKGLGMH_AAGEPMKBPIB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
