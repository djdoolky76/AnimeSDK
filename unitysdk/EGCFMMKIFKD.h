#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KJLGPFMHPDB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EGCFMMKIFKD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EGCFMMKIFKD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F24C0)
#define EGCFMMKIFKD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EGCFMMKIFKD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EGCFMMKIFKD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F24B0)
#define EGCFMMKIFKD_PGMLMFOCLCO_1_OFFSET UNITYSDK_OFFSET(0x19F47100)
#define EGCFMMKIFKD_PGMLMFOCLCO_OFFSET UNITYSDK_OFFSET(0x19F46FC0)
#define EGCFMMKIFKD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F24A0)
#define EGCFMMKIFKD___INIT_OFFSET UNITYSDK_OFFSET(0x7F2480)

inline static constexpr unsigned int EGCFMMKIFKD_TypeDefinitionIndex = 9961;

struct alignas(8) EGCFMMKIFKD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCFMMKIFKD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EGCFMMKIFKD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EGCFMMKIFKD PGMLMFOCLCO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EGCFMMKIFKD EIFONLCJOPG)
	{
		return ((::EGCFMMKIFKD(*)(::FlatBuffers::ByteBuffer*, ::EGCFMMKIFKD))((::PBYTE)hIl2Cpp + EGCFMMKIFKD_PGMLMFOCLCO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KJLGPFMHPDB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KJLGPFMHPDB&))((::PBYTE)hIl2Cpp + EGCFMMKIFKD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::EGCFMMKIFKD PGMLMFOCLCO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EGCFMMKIFKD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EGCFMMKIFKD_PGMLMFOCLCO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCFMMKIFKD_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KJLGPFMHPDB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KJLGPFMHPDB&, ::System::Int32&))((::PBYTE)hIl2Cpp + EGCFMMKIFKD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::EGCFMMKIFKD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EGCFMMKIFKD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EGCFMMKIFKD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCFMMKIFKD_GHKKNCCLPAN_OFFSET))(this);
	}
};
