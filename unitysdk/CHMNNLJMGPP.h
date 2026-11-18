#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KIBGHNMPFKE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CHMNNLJMGPP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CHMNNLJMGPP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7ED830)
#define CHMNNLJMGPP_DMGOAFDIDNL_1_OFFSET UNITYSDK_OFFSET(0x19BF31A0)
#define CHMNNLJMGPP_DMGOAFDIDNL_OFFSET UNITYSDK_OFFSET(0x19BF2F00)
#define CHMNNLJMGPP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CHMNNLJMGPP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CHMNNLJMGPP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7ED820)
#define CHMNNLJMGPP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7ED810)
#define CHMNNLJMGPP___INIT_OFFSET UNITYSDK_OFFSET(0x7ED7F0)

inline static constexpr unsigned int CHMNNLJMGPP_TypeDefinitionIndex = 10132;

struct alignas(8) CHMNNLJMGPP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMNNLJMGPP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CHMNNLJMGPP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMNNLJMGPP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CHMNNLJMGPP DMGOAFDIDNL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CHMNNLJMGPP EIFONLCJOPG)
	{
		return ((::CHMNNLJMGPP(*)(::FlatBuffers::ByteBuffer*, ::CHMNNLJMGPP))((::PBYTE)hIl2Cpp + CHMNNLJMGPP_DMGOAFDIDNL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KIBGHNMPFKE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KIBGHNMPFKE&, ::System::Int32&))((::PBYTE)hIl2Cpp + CHMNNLJMGPP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMNNLJMGPP_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KIBGHNMPFKE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KIBGHNMPFKE&))((::PBYTE)hIl2Cpp + CHMNNLJMGPP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::CHMNNLJMGPP DMGOAFDIDNL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CHMNNLJMGPP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CHMNNLJMGPP_DMGOAFDIDNL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::CHMNNLJMGPP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CHMNNLJMGPP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CHMNNLJMGPP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
