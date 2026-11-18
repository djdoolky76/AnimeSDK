#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HPPMOJDLGLE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PNELFCAFKKK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PNELFCAFKKK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x99B510)
#define PNELFCAFKKK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PNELFCAFKKK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PNELFCAFKKK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x99B560)
#define PNELFCAFKKK_PMAAKDIEMOC_1_OFFSET UNITYSDK_OFFSET(0x1FC23050)
#define PNELFCAFKKK_PMAAKDIEMOC_OFFSET UNITYSDK_OFFSET(0x1FC22FE0)
#define PNELFCAFKKK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x99B550)
#define PNELFCAFKKK___INIT_OFFSET UNITYSDK_OFFSET(0x99B4F0)

inline static constexpr unsigned int PNELFCAFKKK_TypeDefinitionIndex = 11759;

struct alignas(8) PNELFCAFKKK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNELFCAFKKK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNELFCAFKKK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HPPMOJDLGLE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HPPMOJDLGLE&))((::PBYTE)hIl2Cpp + PNELFCAFKKK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::PNELFCAFKKK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PNELFCAFKKK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNELFCAFKKK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNELFCAFKKK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::PNELFCAFKKK PMAAKDIEMOC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PNELFCAFKKK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNELFCAFKKK_PMAAKDIEMOC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::PNELFCAFKKK PMAAKDIEMOC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PNELFCAFKKK EIFONLCJOPG)
	{
		return ((::PNELFCAFKKK(*)(::FlatBuffers::ByteBuffer*, ::PNELFCAFKKK))((::PBYTE)hIl2Cpp + PNELFCAFKKK_PMAAKDIEMOC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNELFCAFKKK_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HPPMOJDLGLE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HPPMOJDLGLE&, ::System::Int32&))((::PBYTE)hIl2Cpp + PNELFCAFKKK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
