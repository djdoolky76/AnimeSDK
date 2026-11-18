#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AKJKGJLKIIE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MPDHIIJNFMG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MPDHIIJNFMG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EF9E0)
#define MPDHIIJNFMG_FIBABKGNJPF_1_OFFSET UNITYSDK_OFFSET(0x19DBA130)
#define MPDHIIJNFMG_FIBABKGNJPF_OFFSET UNITYSDK_OFFSET(0x19DB9FF0)
#define MPDHIIJNFMG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MPDHIIJNFMG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MPDHIIJNFMG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EF9D0)
#define MPDHIIJNFMG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EF9C0)
#define MPDHIIJNFMG___INIT_OFFSET UNITYSDK_OFFSET(0x7EF9A0)

inline static constexpr unsigned int MPDHIIJNFMG_TypeDefinitionIndex = 12964;

struct alignas(8) MPDHIIJNFMG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDHIIJNFMG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPDHIIJNFMG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MPDHIIJNFMG FIBABKGNJPF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MPDHIIJNFMG EIFONLCJOPG)
	{
		return ((::MPDHIIJNFMG(*)(::FlatBuffers::ByteBuffer*, ::MPDHIIJNFMG))((::PBYTE)hIl2Cpp + MPDHIIJNFMG_FIBABKGNJPF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AKJKGJLKIIE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AKJKGJLKIIE&))((::PBYTE)hIl2Cpp + MPDHIIJNFMG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::MPDHIIJNFMG FIBABKGNJPF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MPDHIIJNFMG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPDHIIJNFMG_FIBABKGNJPF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDHIIJNFMG_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::AKJKGJLKIIE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AKJKGJLKIIE&, ::System::Int32&))((::PBYTE)hIl2Cpp + MPDHIIJNFMG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::MPDHIIJNFMG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MPDHIIJNFMG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPDHIIJNFMG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDHIIJNFMG_GHKKNCCLPAN_OFFSET))(this);
	}
};
