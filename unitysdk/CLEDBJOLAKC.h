#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BCJMBNBDCBG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLEDBJOLAKC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CLEDBJOLAKC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x816B40)
#define CLEDBJOLAKC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CLEDBJOLAKC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CLEDBJOLAKC_LJCIHDINCLO_1_OFFSET UNITYSDK_OFFSET(0x1B99BFE0)
#define CLEDBJOLAKC_LJCIHDINCLO_OFFSET UNITYSDK_OFFSET(0x1B99BF70)
#define CLEDBJOLAKC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x816B90)
#define CLEDBJOLAKC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x816B80)
#define CLEDBJOLAKC___INIT_OFFSET UNITYSDK_OFFSET(0x816B20)

inline static constexpr unsigned int CLEDBJOLAKC_TypeDefinitionIndex = 17364;

struct alignas(8) CLEDBJOLAKC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLEDBJOLAKC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLEDBJOLAKC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::CLEDBJOLAKC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CLEDBJOLAKC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLEDBJOLAKC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLEDBJOLAKC_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CLEDBJOLAKC LJCIHDINCLO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CLEDBJOLAKC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLEDBJOLAKC_LJCIHDINCLO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BCJMBNBDCBG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BCJMBNBDCBG&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLEDBJOLAKC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::CLEDBJOLAKC LJCIHDINCLO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CLEDBJOLAKC EIFONLCJOPG)
	{
		return ((::CLEDBJOLAKC(*)(::FlatBuffers::ByteBuffer*, ::CLEDBJOLAKC))((::PBYTE)hIl2Cpp + CLEDBJOLAKC_LJCIHDINCLO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLEDBJOLAKC_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BCJMBNBDCBG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BCJMBNBDCBG&))((::PBYTE)hIl2Cpp + CLEDBJOLAKC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
