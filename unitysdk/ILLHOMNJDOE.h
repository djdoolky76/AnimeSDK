#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GOPCENMJGBJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ILLHOMNJDOE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ILLHOMNJDOE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FD410)
#define ILLHOMNJDOE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ILLHOMNJDOE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ILLHOMNJDOE_HIPBBODGEHD_1_OFFSET UNITYSDK_OFFSET(0x1A5E1D90)
#define ILLHOMNJDOE_HIPBBODGEHD_OFFSET UNITYSDK_OFFSET(0x1A5E1D30)
#define ILLHOMNJDOE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FD460)
#define ILLHOMNJDOE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FD450)
#define ILLHOMNJDOE___INIT_OFFSET UNITYSDK_OFFSET(0x7FD3F0)

inline static constexpr unsigned int ILLHOMNJDOE_TypeDefinitionIndex = 10013;

struct alignas(8) ILLHOMNJDOE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLHOMNJDOE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ILLHOMNJDOE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::ILLHOMNJDOE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ILLHOMNJDOE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ILLHOMNJDOE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GOPCENMJGBJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GOPCENMJGBJ&))((::PBYTE)hIl2Cpp + ILLHOMNJDOE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLHOMNJDOE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::ILLHOMNJDOE HIPBBODGEHD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ILLHOMNJDOE EIFONLCJOPG)
	{
		return ((::ILLHOMNJDOE(*)(::FlatBuffers::ByteBuffer*, ::ILLHOMNJDOE))((::PBYTE)hIl2Cpp + ILLHOMNJDOE_HIPBBODGEHD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLHOMNJDOE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::ILLHOMNJDOE HIPBBODGEHD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ILLHOMNJDOE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ILLHOMNJDOE_HIPBBODGEHD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GOPCENMJGBJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GOPCENMJGBJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + ILLHOMNJDOE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
