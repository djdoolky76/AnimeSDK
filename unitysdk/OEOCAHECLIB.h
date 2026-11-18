#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KGMNKIBBHPD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OEOCAHECLIB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OEOCAHECLIB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80C470)
#define OEOCAHECLIB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OEOCAHECLIB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OEOCAHECLIB_KELOCFDJHCH_1_OFFSET UNITYSDK_OFFSET(0x1B339B60)
#define OEOCAHECLIB_KELOCFDJHCH_OFFSET UNITYSDK_OFFSET(0x1B339AC0)
#define OEOCAHECLIB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80C460)
#define OEOCAHECLIB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80C450)
#define OEOCAHECLIB___INIT_OFFSET UNITYSDK_OFFSET(0x80C430)

inline static constexpr unsigned int OEOCAHECLIB_TypeDefinitionIndex = 17615;

struct alignas(8) OEOCAHECLIB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEOCAHECLIB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OEOCAHECLIB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEOCAHECLIB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KGMNKIBBHPD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KGMNKIBBHPD&))((::PBYTE)hIl2Cpp + OEOCAHECLIB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KGMNKIBBHPD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KGMNKIBBHPD&, ::System::Int32&))((::PBYTE)hIl2Cpp + OEOCAHECLIB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::OEOCAHECLIB KELOCFDJHCH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OEOCAHECLIB EIFONLCJOPG)
	{
		return ((::OEOCAHECLIB(*)(::FlatBuffers::ByteBuffer*, ::OEOCAHECLIB))((::PBYTE)hIl2Cpp + OEOCAHECLIB_KELOCFDJHCH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEOCAHECLIB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::OEOCAHECLIB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OEOCAHECLIB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OEOCAHECLIB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::OEOCAHECLIB KELOCFDJHCH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OEOCAHECLIB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OEOCAHECLIB_KELOCFDJHCH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
