#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GFMHGJFJDKP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FJJLJPDJNND_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FJJLJPDJNND_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x76DEA0)
#define FJJLJPDJNND_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FJJLJPDJNND_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FJJLJPDJNND_LBPNMLIABBA_1_OFFSET UNITYSDK_OFFSET(0x15A77800)
#define FJJLJPDJNND_LBPNMLIABBA_OFFSET UNITYSDK_OFFSET(0x15A77790)
#define FJJLJPDJNND_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x76DEE0)
#define FJJLJPDJNND_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x76DEF0)
#define FJJLJPDJNND___INIT_OFFSET UNITYSDK_OFFSET(0x76DE80)

inline static constexpr unsigned int FJJLJPDJNND_TypeDefinitionIndex = 14999;

struct alignas(8) FJJLJPDJNND
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJLJPDJNND_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJJLJPDJNND___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJLJPDJNND_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::FJJLJPDJNND LBPNMLIABBA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FJJLJPDJNND(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJJLJPDJNND_LBPNMLIABBA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::FJJLJPDJNND BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FJJLJPDJNND(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FJJLJPDJNND_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GFMHGJFJDKP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GFMHGJFJDKP&))((::PBYTE)hIl2Cpp + FJJLJPDJNND_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::FJJLJPDJNND LBPNMLIABBA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FJJLJPDJNND EIFONLCJOPG)
	{
		return ((::FJJLJPDJNND(*)(::FlatBuffers::ByteBuffer*, ::FJJLJPDJNND))((::PBYTE)hIl2Cpp + FJJLJPDJNND_LBPNMLIABBA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GFMHGJFJDKP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GFMHGJFJDKP&, ::System::Int32&))((::PBYTE)hIl2Cpp + FJJLJPDJNND_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJLJPDJNND_PPOMNIFACOL_OFFSET))(this);
	}
};
