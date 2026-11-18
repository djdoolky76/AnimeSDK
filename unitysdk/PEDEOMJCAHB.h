#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NPNNNNKFEDK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PEDEOMJCAHB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PEDEOMJCAHB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x820CF0)
#define PEDEOMJCAHB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PEDEOMJCAHB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PEDEOMJCAHB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x820D30)
#define PEDEOMJCAHB_NONJDKMMAGH_1_OFFSET UNITYSDK_OFFSET(0x1C1A74D0)
#define PEDEOMJCAHB_NONJDKMMAGH_OFFSET UNITYSDK_OFFSET(0x1C1A7430)
#define PEDEOMJCAHB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x820D40)
#define PEDEOMJCAHB___INIT_OFFSET UNITYSDK_OFFSET(0x820CD0)

inline static constexpr unsigned int PEDEOMJCAHB_TypeDefinitionIndex = 16940;

struct alignas(8) PEDEOMJCAHB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDEOMJCAHB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PEDEOMJCAHB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PEDEOMJCAHB NONJDKMMAGH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PEDEOMJCAHB EIFONLCJOPG)
	{
		return ((::PEDEOMJCAHB(*)(::FlatBuffers::ByteBuffer*, ::PEDEOMJCAHB))((::PBYTE)hIl2Cpp + PEDEOMJCAHB_NONJDKMMAGH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::PEDEOMJCAHB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PEDEOMJCAHB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PEDEOMJCAHB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PEDEOMJCAHB NONJDKMMAGH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PEDEOMJCAHB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PEDEOMJCAHB_NONJDKMMAGH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NPNNNNKFEDK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPNNNNKFEDK&, ::System::Int32&))((::PBYTE)hIl2Cpp + PEDEOMJCAHB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDEOMJCAHB_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDEOMJCAHB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NPNNNNKFEDK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPNNNNKFEDK&))((::PBYTE)hIl2Cpp + PEDEOMJCAHB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
