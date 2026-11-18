#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/INIBNMLGNFN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LMMHJNCNJHC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LMMHJNCNJHC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81DB40)
#define LMMHJNCNJHC_EGMNAKAICCH_1_OFFSET UNITYSDK_OFFSET(0x1BF58AC0)
#define LMMHJNCNJHC_EGMNAKAICCH_OFFSET UNITYSDK_OFFSET(0x1BF58A60)
#define LMMHJNCNJHC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LMMHJNCNJHC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LMMHJNCNJHC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81DB90)
#define LMMHJNCNJHC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81DB80)
#define LMMHJNCNJHC___INIT_OFFSET UNITYSDK_OFFSET(0x81DB20)

inline static constexpr unsigned int LMMHJNCNJHC_TypeDefinitionIndex = 12697;

struct alignas(8) LMMHJNCNJHC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMMHJNCNJHC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LMMHJNCNJHC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::INIBNMLGNFN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::INIBNMLGNFN&))((::PBYTE)hIl2Cpp + LMMHJNCNJHC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMMHJNCNJHC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::LMMHJNCNJHC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LMMHJNCNJHC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LMMHJNCNJHC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMMHJNCNJHC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::INIBNMLGNFN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::INIBNMLGNFN&, ::System::Int32&))((::PBYTE)hIl2Cpp + LMMHJNCNJHC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::LMMHJNCNJHC EGMNAKAICCH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LMMHJNCNJHC EIFONLCJOPG)
	{
		return ((::LMMHJNCNJHC(*)(::FlatBuffers::ByteBuffer*, ::LMMHJNCNJHC))((::PBYTE)hIl2Cpp + LMMHJNCNJHC_EGMNAKAICCH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::LMMHJNCNJHC EGMNAKAICCH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LMMHJNCNJHC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LMMHJNCNJHC_EGMNAKAICCH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
