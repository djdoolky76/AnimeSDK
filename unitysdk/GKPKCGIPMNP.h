#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DFBCFHELHGD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GKPKCGIPMNP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GKPKCGIPMNP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80DA90)
#define GKPKCGIPMNP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GKPKCGIPMNP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GKPKCGIPMNP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80DAD0)
#define GKPKCGIPMNP_NGKJDBOCCCC_1_OFFSET UNITYSDK_OFFSET(0x1B4D6A00)
#define GKPKCGIPMNP_NGKJDBOCCCC_OFFSET UNITYSDK_OFFSET(0x1B4D6700)
#define GKPKCGIPMNP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80DA80)
#define GKPKCGIPMNP___INIT_OFFSET UNITYSDK_OFFSET(0x80DA60)

inline static constexpr unsigned int GKPKCGIPMNP_TypeDefinitionIndex = 14940;

struct alignas(8) GKPKCGIPMNP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPKCGIPMNP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GKPKCGIPMNP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GKPKCGIPMNP NGKJDBOCCCC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GKPKCGIPMNP EIFONLCJOPG)
	{
		return ((::GKPKCGIPMNP(*)(::FlatBuffers::ByteBuffer*, ::GKPKCGIPMNP))((::PBYTE)hIl2Cpp + GKPKCGIPMNP_NGKJDBOCCCC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DFBCFHELHGD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DFBCFHELHGD&))((::PBYTE)hIl2Cpp + GKPKCGIPMNP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPKCGIPMNP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::GKPKCGIPMNP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GKPKCGIPMNP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GKPKCGIPMNP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DFBCFHELHGD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DFBCFHELHGD&, ::System::Int32&))((::PBYTE)hIl2Cpp + GKPKCGIPMNP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::GKPKCGIPMNP NGKJDBOCCCC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GKPKCGIPMNP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GKPKCGIPMNP_NGKJDBOCCCC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPKCGIPMNP_GHKKNCCLPAN_OFFSET))(this);
	}
};
