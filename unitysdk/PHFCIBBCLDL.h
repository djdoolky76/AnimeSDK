#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LHOBGOIOHGM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PHFCIBBCLDL_AHOJJGDLJOF_1_OFFSET UNITYSDK_OFFSET(0x1C0AE520)
#define PHFCIBBCLDL_AHOJJGDLJOF_OFFSET UNITYSDK_OFFSET(0x1C0AE4B0)
#define PHFCIBBCLDL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PHFCIBBCLDL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81FDA0)
#define PHFCIBBCLDL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PHFCIBBCLDL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PHFCIBBCLDL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81FDE0)
#define PHFCIBBCLDL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81FDF0)
#define PHFCIBBCLDL___INIT_OFFSET UNITYSDK_OFFSET(0x81FD80)

inline static constexpr unsigned int PHFCIBBCLDL_TypeDefinitionIndex = 14125;

struct alignas(8) PHFCIBBCLDL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHFCIBBCLDL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHFCIBBCLDL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PHFCIBBCLDL AHOJJGDLJOF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PHFCIBBCLDL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHFCIBBCLDL_AHOJJGDLJOF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::PHFCIBBCLDL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PHFCIBBCLDL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHFCIBBCLDL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHFCIBBCLDL_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LHOBGOIOHGM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LHOBGOIOHGM&))((::PBYTE)hIl2Cpp + PHFCIBBCLDL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 BPJGOHCLDGM, ::System::Int32 AJDICOALDFO, ::LHOBGOIOHGM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::LHOBGOIOHGM&, ::System::Int32&))((::PBYTE)hIl2Cpp + PHFCIBBCLDL_LLGCOCLACNA_OFFSET))(this, BPJGOHCLDGM, AJDICOALDFO, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::PHFCIBBCLDL AHOJJGDLJOF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PHFCIBBCLDL EIFONLCJOPG)
	{
		return ((::PHFCIBBCLDL(*)(::FlatBuffers::ByteBuffer*, ::PHFCIBBCLDL))((::PBYTE)hIl2Cpp + PHFCIBBCLDL_AHOJJGDLJOF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHFCIBBCLDL_PPOMNIFACOL_OFFSET))(this);
	}
};
