#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KBFFFLJLFDN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GPHGEJAMOFG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GPHGEJAMOFG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x779890)
#define GPHGEJAMOFG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GPHGEJAMOFG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GPHGEJAMOFG_KJDDNIOHJAK_1_OFFSET UNITYSDK_OFFSET(0x160EE3F0)
#define GPHGEJAMOFG_KJDDNIOHJAK_OFFSET UNITYSDK_OFFSET(0x160EE380)
#define GPHGEJAMOFG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x779880)
#define GPHGEJAMOFG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7798D0)
#define GPHGEJAMOFG___INIT_OFFSET UNITYSDK_OFFSET(0x779860)

inline static constexpr unsigned int GPHGEJAMOFG_TypeDefinitionIndex = 13633;

struct alignas(8) GPHGEJAMOFG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPHGEJAMOFG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GPHGEJAMOFG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KBFFFLJLFDN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KBFFFLJLFDN&))((::PBYTE)hIl2Cpp + GPHGEJAMOFG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KBFFFLJLFDN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KBFFFLJLFDN&, ::System::Int32&))((::PBYTE)hIl2Cpp + GPHGEJAMOFG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPHGEJAMOFG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::GPHGEJAMOFG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GPHGEJAMOFG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GPHGEJAMOFG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GPHGEJAMOFG KJDDNIOHJAK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GPHGEJAMOFG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GPHGEJAMOFG_KJDDNIOHJAK_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::GPHGEJAMOFG KJDDNIOHJAK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GPHGEJAMOFG EIFONLCJOPG)
	{
		return ((::GPHGEJAMOFG(*)(::FlatBuffers::ByteBuffer*, ::GPHGEJAMOFG))((::PBYTE)hIl2Cpp + GPHGEJAMOFG_KJDDNIOHJAK_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPHGEJAMOFG_PPOMNIFACOL_OFFSET))(this);
	}
};
