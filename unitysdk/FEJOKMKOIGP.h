#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OFPCIMPDFDL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FEJOKMKOIGP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FEJOKMKOIGP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A78F0)
#define FEJOKMKOIGP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FEJOKMKOIGP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FEJOKMKOIGP_JLNCFANOOOE_1_OFFSET UNITYSDK_OFFSET(0x17458FE0)
#define FEJOKMKOIGP_JLNCFANOOOE_OFFSET UNITYSDK_OFFSET(0x17458F70)
#define FEJOKMKOIGP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A78E0)
#define FEJOKMKOIGP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A78D0)
#define FEJOKMKOIGP___INIT_OFFSET UNITYSDK_OFFSET(0x7A78B0)

inline static constexpr unsigned int FEJOKMKOIGP_TypeDefinitionIndex = 9442;

struct alignas(8) FEJOKMKOIGP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEJOKMKOIGP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FEJOKMKOIGP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEJOKMKOIGP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::FEJOKMKOIGP JLNCFANOOOE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FEJOKMKOIGP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FEJOKMKOIGP_JLNCFANOOOE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::FEJOKMKOIGP JLNCFANOOOE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FEJOKMKOIGP EIFONLCJOPG)
	{
		return ((::FEJOKMKOIGP(*)(::FlatBuffers::ByteBuffer*, ::FEJOKMKOIGP))((::PBYTE)hIl2Cpp + FEJOKMKOIGP_JLNCFANOOOE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OFPCIMPDFDL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OFPCIMPDFDL&))((::PBYTE)hIl2Cpp + FEJOKMKOIGP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEJOKMKOIGP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OFPCIMPDFDL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OFPCIMPDFDL&, ::System::Int32&))((::PBYTE)hIl2Cpp + FEJOKMKOIGP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::FEJOKMKOIGP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FEJOKMKOIGP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FEJOKMKOIGP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
