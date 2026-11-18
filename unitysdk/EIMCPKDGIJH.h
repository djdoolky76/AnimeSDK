#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BKBEGHIGNFB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EIMCPKDGIJH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EIMCPKDGIJH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FA930)
#define EIMCPKDGIJH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EIMCPKDGIJH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EIMCPKDGIJH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FA970)
#define EIMCPKDGIJH_NJGKJHNOHJC_1_OFFSET UNITYSDK_OFFSET(0x1A564D90)
#define EIMCPKDGIJH_NJGKJHNOHJC_OFFSET UNITYSDK_OFFSET(0x1A564D20)
#define EIMCPKDGIJH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FA980)
#define EIMCPKDGIJH___INIT_OFFSET UNITYSDK_OFFSET(0x7FA910)

inline static constexpr unsigned int EIMCPKDGIJH_TypeDefinitionIndex = 15580;

struct alignas(8) EIMCPKDGIJH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMCPKDGIJH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIMCPKDGIJH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::EIMCPKDGIJH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EIMCPKDGIJH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIMCPKDGIJH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BKBEGHIGNFB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BKBEGHIGNFB&, ::System::Int32&))((::PBYTE)hIl2Cpp + EIMCPKDGIJH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMCPKDGIJH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BKBEGHIGNFB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BKBEGHIGNFB&))((::PBYTE)hIl2Cpp + EIMCPKDGIJH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMCPKDGIJH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::EIMCPKDGIJH NJGKJHNOHJC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EIMCPKDGIJH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIMCPKDGIJH_NJGKJHNOHJC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::EIMCPKDGIJH NJGKJHNOHJC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EIMCPKDGIJH EIFONLCJOPG)
	{
		return ((::EIMCPKDGIJH(*)(::FlatBuffers::ByteBuffer*, ::EIMCPKDGIJH))((::PBYTE)hIl2Cpp + EIMCPKDGIJH_NJGKJHNOHJC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
