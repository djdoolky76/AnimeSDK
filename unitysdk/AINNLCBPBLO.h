#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OFBNGMGMOPK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AINNLCBPBLO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AINNLCBPBLO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8258A0)
#define AINNLCBPBLO_DPCCNPLNJGO_1_OFFSET UNITYSDK_OFFSET(0x1C509850)
#define AINNLCBPBLO_DPCCNPLNJGO_OFFSET UNITYSDK_OFFSET(0x1C5097F0)
#define AINNLCBPBLO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AINNLCBPBLO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AINNLCBPBLO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8258F0)
#define AINNLCBPBLO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8258E0)
#define AINNLCBPBLO___INIT_OFFSET UNITYSDK_OFFSET(0x825880)

inline static constexpr unsigned int AINNLCBPBLO_TypeDefinitionIndex = 16300;

struct alignas(8) AINNLCBPBLO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AINNLCBPBLO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AINNLCBPBLO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::AINNLCBPBLO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AINNLCBPBLO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AINNLCBPBLO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AINNLCBPBLO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OFBNGMGMOPK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OFBNGMGMOPK&))((::PBYTE)hIl2Cpp + AINNLCBPBLO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AINNLCBPBLO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::AINNLCBPBLO DPCCNPLNJGO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AINNLCBPBLO EIFONLCJOPG)
	{
		return ((::AINNLCBPBLO(*)(::FlatBuffers::ByteBuffer*, ::AINNLCBPBLO))((::PBYTE)hIl2Cpp + AINNLCBPBLO_DPCCNPLNJGO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::AINNLCBPBLO DPCCNPLNJGO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AINNLCBPBLO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AINNLCBPBLO_DPCCNPLNJGO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OFBNGMGMOPK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OFBNGMGMOPK&, ::System::Int32&))((::PBYTE)hIl2Cpp + AINNLCBPBLO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
