#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DPHCMIKAOHK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BNPEEEPMIPA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BNPEEEPMIPA_BFDLLOFEDIM_1_OFFSET UNITYSDK_OFFSET(0x1ADB6350)
#define BNPEEEPMIPA_BFDLLOFEDIM_OFFSET UNITYSDK_OFFSET(0x1ADB62E0)
#define BNPEEEPMIPA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x807070)
#define BNPEEEPMIPA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BNPEEEPMIPA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BNPEEEPMIPA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8070C0)
#define BNPEEEPMIPA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8070B0)
#define BNPEEEPMIPA___INIT_OFFSET UNITYSDK_OFFSET(0x807050)

inline static constexpr unsigned int BNPEEEPMIPA_TypeDefinitionIndex = 16565;

struct alignas(8) BNPEEEPMIPA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNPEEEPMIPA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BNPEEEPMIPA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BNPEEEPMIPA BFDLLOFEDIM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BNPEEEPMIPA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BNPEEEPMIPA_BFDLLOFEDIM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::BNPEEEPMIPA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BNPEEEPMIPA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BNPEEEPMIPA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNPEEEPMIPA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DPHCMIKAOHK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DPHCMIKAOHK&, ::System::Int32&))((::PBYTE)hIl2Cpp + BNPEEEPMIPA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::BNPEEEPMIPA BFDLLOFEDIM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BNPEEEPMIPA EIFONLCJOPG)
	{
		return ((::BNPEEEPMIPA(*)(::FlatBuffers::ByteBuffer*, ::BNPEEEPMIPA))((::PBYTE)hIl2Cpp + BNPEEEPMIPA_BFDLLOFEDIM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNPEEEPMIPA_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DPHCMIKAOHK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DPHCMIKAOHK&))((::PBYTE)hIl2Cpp + BNPEEEPMIPA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
