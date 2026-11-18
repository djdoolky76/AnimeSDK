#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KOMMGGIFGOC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LCCHKMDNHHB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LCCHKMDNHHB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x763F50)
#define LCCHKMDNHHB_EDAPPDOJHMB_1_OFFSET UNITYSDK_OFFSET(0x19561BC0)
#define LCCHKMDNHHB_EDAPPDOJHMB_OFFSET UNITYSDK_OFFSET(0x19561900)
#define LCCHKMDNHHB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LCCHKMDNHHB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LCCHKMDNHHB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E4BB0)
#define LCCHKMDNHHB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LCCHKMDNHHB_TypeDefinitionIndex = 9209;

struct alignas(8) LCCHKMDNHHB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCCHKMDNHHB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCCHKMDNHHB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCCHKMDNHHB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::LCCHKMDNHHB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LCCHKMDNHHB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCCHKMDNHHB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LCCHKMDNHHB EDAPPDOJHMB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LCCHKMDNHHB EIFONLCJOPG)
	{
		return ((::LCCHKMDNHHB(*)(::FlatBuffers::ByteBuffer*, ::LCCHKMDNHHB))((::PBYTE)hIl2Cpp + LCCHKMDNHHB_EDAPPDOJHMB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::String* MCOHLHMKLIP, ::KOMMGGIFGOC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::KOMMGGIFGOC&, ::System::Int32&))((::PBYTE)hIl2Cpp + LCCHKMDNHHB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::LCCHKMDNHHB EDAPPDOJHMB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LCCHKMDNHHB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCCHKMDNHHB_EDAPPDOJHMB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KOMMGGIFGOC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KOMMGGIFGOC&))((::PBYTE)hIl2Cpp + LCCHKMDNHHB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
