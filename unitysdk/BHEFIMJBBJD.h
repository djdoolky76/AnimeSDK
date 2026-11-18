#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NJLEJPNJPNM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BHEFIMJBBJD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BHEFIMJBBJD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E9E60)
#define BHEFIMJBBJD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BHEFIMJBBJD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BHEFIMJBBJD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E9E40)
#define BHEFIMJBBJD_MPNFDKEKDBP_1_OFFSET UNITYSDK_OFFSET(0x19AC5030)
#define BHEFIMJBBJD_MPNFDKEKDBP_OFFSET UNITYSDK_OFFSET(0x19AC4FC0)
#define BHEFIMJBBJD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E9E50)
#define BHEFIMJBBJD___INIT_OFFSET UNITYSDK_OFFSET(0x7E9E20)

inline static constexpr unsigned int BHEFIMJBBJD_TypeDefinitionIndex = 17422;

struct alignas(8) BHEFIMJBBJD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHEFIMJBBJD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BHEFIMJBBJD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BHEFIMJBBJD MPNFDKEKDBP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BHEFIMJBBJD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BHEFIMJBBJD_MPNFDKEKDBP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NJLEJPNJPNM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NJLEJPNJPNM&, ::System::Int32&))((::PBYTE)hIl2Cpp + BHEFIMJBBJD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::BHEFIMJBBJD MPNFDKEKDBP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BHEFIMJBBJD EIFONLCJOPG)
	{
		return ((::BHEFIMJBBJD(*)(::FlatBuffers::ByteBuffer*, ::BHEFIMJBBJD))((::PBYTE)hIl2Cpp + BHEFIMJBBJD_MPNFDKEKDBP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHEFIMJBBJD_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHEFIMJBBJD_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::BHEFIMJBBJD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BHEFIMJBBJD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BHEFIMJBBJD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NJLEJPNJPNM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NJLEJPNJPNM&))((::PBYTE)hIl2Cpp + BHEFIMJBBJD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
