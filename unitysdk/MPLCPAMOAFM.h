#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PNIPMEOLMCM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MPLCPAMOAFM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MPLCPAMOAFM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AEDB0)
#define MPLCPAMOAFM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MPLCPAMOAFM_GGFJFAIHHMJ_1_OFFSET UNITYSDK_OFFSET(0x1D0BC060)
#define MPLCPAMOAFM_GGFJFAIHHMJ_OFFSET UNITYSDK_OFFSET(0x1D0BBFF0)
#define MPLCPAMOAFM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MPLCPAMOAFM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8AEE00)
#define MPLCPAMOAFM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AEDF0)
#define MPLCPAMOAFM___INIT_OFFSET UNITYSDK_OFFSET(0x8AED90)

inline static constexpr unsigned int MPLCPAMOAFM_TypeDefinitionIndex = 13295;

struct alignas(8) MPLCPAMOAFM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPLCPAMOAFM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPLCPAMOAFM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::MPLCPAMOAFM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MPLCPAMOAFM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPLCPAMOAFM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPLCPAMOAFM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MPLCPAMOAFM GGFJFAIHHMJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MPLCPAMOAFM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPLCPAMOAFM_GGFJFAIHHMJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PNIPMEOLMCM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PNIPMEOLMCM&))((::PBYTE)hIl2Cpp + MPLCPAMOAFM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPLCPAMOAFM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MPLCPAMOAFM GGFJFAIHHMJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MPLCPAMOAFM EIFONLCJOPG)
	{
		return ((::MPLCPAMOAFM(*)(::FlatBuffers::ByteBuffer*, ::MPLCPAMOAFM))((::PBYTE)hIl2Cpp + MPLCPAMOAFM_GGFJFAIHHMJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PNIPMEOLMCM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PNIPMEOLMCM&, ::System::Int32&))((::PBYTE)hIl2Cpp + MPLCPAMOAFM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
