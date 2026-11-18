#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DBIIBIKKLGC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PEMGFPGENCD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PEMGFPGENCD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x937FE0)
#define PEMGFPGENCD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PEMGFPGENCD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PEMGFPGENCD_KDEPJLJNEDN_1_OFFSET UNITYSDK_OFFSET(0x1EDFDEC0)
#define PEMGFPGENCD_KDEPJLJNEDN_OFFSET UNITYSDK_OFFSET(0x1EDFDE00)
#define PEMGFPGENCD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x937FD0)
#define PEMGFPGENCD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x938020)
#define PEMGFPGENCD___INIT_OFFSET UNITYSDK_OFFSET(0x937FB0)

inline static constexpr unsigned int PEMGFPGENCD_TypeDefinitionIndex = 16053;

struct alignas(8) PEMGFPGENCD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMGFPGENCD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PEMGFPGENCD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DBIIBIKKLGC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DBIIBIKKLGC&, ::System::Int32&))((::PBYTE)hIl2Cpp + PEMGFPGENCD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DBIIBIKKLGC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DBIIBIKKLGC&))((::PBYTE)hIl2Cpp + PEMGFPGENCD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::PEMGFPGENCD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PEMGFPGENCD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PEMGFPGENCD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PEMGFPGENCD KDEPJLJNEDN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PEMGFPGENCD EIFONLCJOPG)
	{
		return ((::PEMGFPGENCD(*)(::FlatBuffers::ByteBuffer*, ::PEMGFPGENCD))((::PBYTE)hIl2Cpp + PEMGFPGENCD_KDEPJLJNEDN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMGFPGENCD_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::PEMGFPGENCD KDEPJLJNEDN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PEMGFPGENCD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PEMGFPGENCD_KDEPJLJNEDN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMGFPGENCD_PPOMNIFACOL_OFFSET))(this);
	}
};
