#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JEPILOGEGLN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DLMHFEFHGAI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DLMHFEFHGAI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x763F50)
#define DLMHFEFHGAI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DLMHFEFHGAI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DLMHFEFHGAI_IEHJKLPONOL_1_OFFSET UNITYSDK_OFFSET(0x17A9D400)
#define DLMHFEFHGAI_IEHJKLPONOL_OFFSET UNITYSDK_OFFSET(0x17A9D3B0)
#define DLMHFEFHGAI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B2510)
#define DLMHFEFHGAI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DLMHFEFHGAI_TypeDefinitionIndex = 11079;

struct alignas(8) DLMHFEFHGAI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLMHFEFHGAI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DLMHFEFHGAI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DLMHFEFHGAI IEHJKLPONOL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DLMHFEFHGAI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DLMHFEFHGAI_IEHJKLPONOL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JEPILOGEGLN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JEPILOGEGLN&))((::PBYTE)hIl2Cpp + DLMHFEFHGAI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::DLMHFEFHGAI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DLMHFEFHGAI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DLMHFEFHGAI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLMHFEFHGAI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DLMHFEFHGAI IEHJKLPONOL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DLMHFEFHGAI EIFONLCJOPG)
	{
		return ((::DLMHFEFHGAI(*)(::FlatBuffers::ByteBuffer*, ::DLMHFEFHGAI))((::PBYTE)hIl2Cpp + DLMHFEFHGAI_IEHJKLPONOL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::String* MCOHLHMKLIP, ::JEPILOGEGLN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::JEPILOGEGLN&, ::System::Int32&))((::PBYTE)hIl2Cpp + DLMHFEFHGAI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
