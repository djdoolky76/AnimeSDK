#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ABBFLKNLBEJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MCGKIOOKACB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MCGKIOOKACB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EF5B0)
#define MCGKIOOKACB_CGBCHIKGGGO_1_OFFSET UNITYSDK_OFFSET(0x19DAFFD0)
#define MCGKIOOKACB_CGBCHIKGGGO_OFFSET UNITYSDK_OFFSET(0x19DAFF30)
#define MCGKIOOKACB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MCGKIOOKACB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MCGKIOOKACB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EF590)
#define MCGKIOOKACB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EF5A0)
#define MCGKIOOKACB___INIT_OFFSET UNITYSDK_OFFSET(0x7EF570)

inline static constexpr unsigned int MCGKIOOKACB_TypeDefinitionIndex = 15962;

struct alignas(8) MCGKIOOKACB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGKIOOKACB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MCGKIOOKACB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGKIOOKACB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MCGKIOOKACB CGBCHIKGGGO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MCGKIOOKACB EIFONLCJOPG)
	{
		return ((::MCGKIOOKACB(*)(::FlatBuffers::ByteBuffer*, ::MCGKIOOKACB))((::PBYTE)hIl2Cpp + MCGKIOOKACB_CGBCHIKGGGO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::MCGKIOOKACB CGBCHIKGGGO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MCGKIOOKACB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MCGKIOOKACB_CGBCHIKGGGO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ABBFLKNLBEJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ABBFLKNLBEJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + MCGKIOOKACB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ABBFLKNLBEJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ABBFLKNLBEJ&))((::PBYTE)hIl2Cpp + MCGKIOOKACB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGKIOOKACB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::MCGKIOOKACB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MCGKIOOKACB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MCGKIOOKACB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
