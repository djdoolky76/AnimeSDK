#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DIMPKLPMBNM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BLJLOIHOKNH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BLJLOIHOKNH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x763F50)
#define BLJLOIHOKNH_BODKCDHJJMI_1_OFFSET UNITYSDK_OFFSET(0x17760690)
#define BLJLOIHOKNH_BODKCDHJJMI_OFFSET UNITYSDK_OFFSET(0x17760600)
#define BLJLOIHOKNH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BLJLOIHOKNH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BLJLOIHOKNH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7ACDA0)
#define BLJLOIHOKNH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BLJLOIHOKNH_TypeDefinitionIndex = 13185;

struct alignas(8) BLJLOIHOKNH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJLOIHOKNH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BLJLOIHOKNH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DIMPKLPMBNM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DIMPKLPMBNM&))((::PBYTE)hIl2Cpp + BLJLOIHOKNH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::BLJLOIHOKNH BODKCDHJJMI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BLJLOIHOKNH EIFONLCJOPG)
	{
		return ((::BLJLOIHOKNH(*)(::FlatBuffers::ByteBuffer*, ::BLJLOIHOKNH))((::PBYTE)hIl2Cpp + BLJLOIHOKNH_BODKCDHJJMI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::BLJLOIHOKNH BODKCDHJJMI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BLJLOIHOKNH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BLJLOIHOKNH_BODKCDHJJMI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJLOIHOKNH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::BLJLOIHOKNH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BLJLOIHOKNH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BLJLOIHOKNH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::String* MCOHLHMKLIP, ::DIMPKLPMBNM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::DIMPKLPMBNM&, ::System::Int32&))((::PBYTE)hIl2Cpp + BLJLOIHOKNH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
