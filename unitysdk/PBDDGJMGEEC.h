#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AALCDJDELNG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PBDDGJMGEEC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PBDDGJMGEEC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x763F50)
#define PBDDGJMGEEC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PBDDGJMGEEC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PBDDGJMGEEC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8AF590)
#define PBDDGJMGEEC_MEAKOBCGEKK_1_OFFSET UNITYSDK_OFFSET(0x1D0D8090)
#define PBDDGJMGEEC_MEAKOBCGEKK_OFFSET UNITYSDK_OFFSET(0x1D0D8030)
#define PBDDGJMGEEC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PBDDGJMGEEC_TypeDefinitionIndex = 17571;

struct alignas(8) PBDDGJMGEEC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDDGJMGEEC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PBDDGJMGEEC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AALCDJDELNG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AALCDJDELNG&))((::PBYTE)hIl2Cpp + PBDDGJMGEEC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::String* MCOHLHMKLIP, ::AALCDJDELNG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::AALCDJDELNG&, ::System::Int32&))((::PBYTE)hIl2Cpp + PBDDGJMGEEC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDDGJMGEEC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::PBDDGJMGEEC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PBDDGJMGEEC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PBDDGJMGEEC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PBDDGJMGEEC MEAKOBCGEKK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PBDDGJMGEEC EIFONLCJOPG)
	{
		return ((::PBDDGJMGEEC(*)(::FlatBuffers::ByteBuffer*, ::PBDDGJMGEEC))((::PBYTE)hIl2Cpp + PBDDGJMGEEC_MEAKOBCGEKK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::PBDDGJMGEEC MEAKOBCGEKK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PBDDGJMGEEC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PBDDGJMGEEC_MEAKOBCGEKK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
