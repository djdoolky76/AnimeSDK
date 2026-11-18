#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EEGNIAOPEMM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OKCNKOCHAIP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OKCNKOCHAIP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x805C80)
#define OKCNKOCHAIP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OKCNKOCHAIP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OKCNKOCHAIP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x805CC0)
#define OKCNKOCHAIP_NPBGGICFJOP_1_OFFSET UNITYSDK_OFFSET(0x1AD8E8E0)
#define OKCNKOCHAIP_NPBGGICFJOP_OFFSET UNITYSDK_OFFSET(0x1AD8E640)
#define OKCNKOCHAIP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x805C70)
#define OKCNKOCHAIP___INIT_OFFSET UNITYSDK_OFFSET(0x805C50)

inline static constexpr unsigned int OKCNKOCHAIP_TypeDefinitionIndex = 11908;

struct alignas(8) OKCNKOCHAIP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKCNKOCHAIP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OKCNKOCHAIP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKCNKOCHAIP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::OKCNKOCHAIP NPBGGICFJOP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OKCNKOCHAIP EIFONLCJOPG)
	{
		return ((::OKCNKOCHAIP(*)(::FlatBuffers::ByteBuffer*, ::OKCNKOCHAIP))((::PBYTE)hIl2Cpp + OKCNKOCHAIP_NPBGGICFJOP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EEGNIAOPEMM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EEGNIAOPEMM&))((::PBYTE)hIl2Cpp + OKCNKOCHAIP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::OKCNKOCHAIP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OKCNKOCHAIP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OKCNKOCHAIP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EEGNIAOPEMM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EEGNIAOPEMM&, ::System::Int32&))((::PBYTE)hIl2Cpp + OKCNKOCHAIP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKCNKOCHAIP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::OKCNKOCHAIP NPBGGICFJOP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OKCNKOCHAIP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OKCNKOCHAIP_NPBGGICFJOP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
