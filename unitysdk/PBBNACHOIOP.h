#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PJEKFGAOEBG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PBBNACHOIOP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PBBNACHOIOP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80CA30)
#define PBBNACHOIOP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PBBNACHOIOP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PBBNACHOIOP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80CA70)
#define PBBNACHOIOP_NIFGKOCAEDP_1_OFFSET UNITYSDK_OFFSET(0x1B3461A0)
#define PBBNACHOIOP_NIFGKOCAEDP_OFFSET UNITYSDK_OFFSET(0x1B345EE0)
#define PBBNACHOIOP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80CA80)
#define PBBNACHOIOP___INIT_OFFSET UNITYSDK_OFFSET(0x80CA10)

inline static constexpr unsigned int PBBNACHOIOP_TypeDefinitionIndex = 15738;

struct alignas(8) PBBNACHOIOP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBBNACHOIOP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PBBNACHOIOP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::PBBNACHOIOP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PBBNACHOIOP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PBBNACHOIOP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PBBNACHOIOP NIFGKOCAEDP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PBBNACHOIOP EIFONLCJOPG)
	{
		return ((::PBBNACHOIOP(*)(::FlatBuffers::ByteBuffer*, ::PBBNACHOIOP))((::PBYTE)hIl2Cpp + PBBNACHOIOP_NIFGKOCAEDP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PJEKFGAOEBG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PJEKFGAOEBG&, ::System::Int32&))((::PBYTE)hIl2Cpp + PBBNACHOIOP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBBNACHOIOP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::PBBNACHOIOP NIFGKOCAEDP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PBBNACHOIOP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PBBNACHOIOP_NIFGKOCAEDP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBBNACHOIOP_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PJEKFGAOEBG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PJEKFGAOEBG&))((::PBYTE)hIl2Cpp + PBBNACHOIOP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
