#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PHEHHNIDLBF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOAEIKKFKNL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FOAEIKKFKNL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x811A00)
#define FOAEIKKFKNL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FOAEIKKFKNL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FOAEIKKFKNL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x811A40)
#define FOAEIKKFKNL_PMBENLONEIP_1_OFFSET UNITYSDK_OFFSET(0x1B7B2500)
#define FOAEIKKFKNL_PMBENLONEIP_OFFSET UNITYSDK_OFFSET(0x1B7B24A0)
#define FOAEIKKFKNL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x811A50)
#define FOAEIKKFKNL___INIT_OFFSET UNITYSDK_OFFSET(0x8119E0)

inline static constexpr unsigned int FOAEIKKFKNL_TypeDefinitionIndex = 9258;

struct alignas(8) FOAEIKKFKNL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAEIKKFKNL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FOAEIKKFKNL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::FOAEIKKFKNL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FOAEIKKFKNL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FOAEIKKFKNL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PHEHHNIDLBF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PHEHHNIDLBF&, ::System::Int32&))((::PBYTE)hIl2Cpp + FOAEIKKFKNL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::FOAEIKKFKNL PMBENLONEIP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FOAEIKKFKNL EIFONLCJOPG)
	{
		return ((::FOAEIKKFKNL(*)(::FlatBuffers::ByteBuffer*, ::FOAEIKKFKNL))((::PBYTE)hIl2Cpp + FOAEIKKFKNL_PMBENLONEIP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::FOAEIKKFKNL PMBENLONEIP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FOAEIKKFKNL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FOAEIKKFKNL_PMBENLONEIP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAEIKKFKNL_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAEIKKFKNL_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PHEHHNIDLBF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PHEHHNIDLBF&))((::PBYTE)hIl2Cpp + FOAEIKKFKNL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
