#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CLKFMEJJPCB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JBFFKOJLAFB_AHGKIJBAIEC_1_OFFSET UNITYSDK_OFFSET(0x1B7D70E0)
#define JBFFKOJLAFB_AHGKIJBAIEC_OFFSET UNITYSDK_OFFSET(0x1B7D6E40)
#define JBFFKOJLAFB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JBFFKOJLAFB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8128D0)
#define JBFFKOJLAFB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JBFFKOJLAFB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JBFFKOJLAFB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8128C0)
#define JBFFKOJLAFB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x812910)
#define JBFFKOJLAFB___INIT_OFFSET UNITYSDK_OFFSET(0x8128A0)

inline static constexpr unsigned int JBFFKOJLAFB_TypeDefinitionIndex = 14326;

struct alignas(8) JBFFKOJLAFB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFFKOJLAFB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JBFFKOJLAFB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JBFFKOJLAFB AHGKIJBAIEC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JBFFKOJLAFB EIFONLCJOPG)
	{
		return ((::JBFFKOJLAFB(*)(::FlatBuffers::ByteBuffer*, ::JBFFKOJLAFB))((::PBYTE)hIl2Cpp + JBFFKOJLAFB_AHGKIJBAIEC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CLKFMEJJPCB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CLKFMEJJPCB&))((::PBYTE)hIl2Cpp + JBFFKOJLAFB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CLKFMEJJPCB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CLKFMEJJPCB&, ::System::Int32&))((::PBYTE)hIl2Cpp + JBFFKOJLAFB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::JBFFKOJLAFB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JBFFKOJLAFB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JBFFKOJLAFB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JBFFKOJLAFB AHGKIJBAIEC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JBFFKOJLAFB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JBFFKOJLAFB_AHGKIJBAIEC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFFKOJLAFB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFFKOJLAFB_GHKKNCCLPAN_OFFSET))(this);
	}
};
