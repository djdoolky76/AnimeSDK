#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EHNFCJPMBKD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LOFBEFDOAPO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LOFBEFDOAPO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x763F50)
#define LOFBEFDOAPO_FPHPOGLDFLH_1_OFFSET UNITYSDK_OFFSET(0x1C07D860)
#define LOFBEFDOAPO_FPHPOGLDFLH_OFFSET UNITYSDK_OFFSET(0x1C07D810)
#define LOFBEFDOAPO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LOFBEFDOAPO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LOFBEFDOAPO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LOFBEFDOAPO_TypeDefinitionIndex = 11982;

struct alignas(8) LOFBEFDOAPO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFBEFDOAPO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LOFBEFDOAPO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LOFBEFDOAPO FPHPOGLDFLH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LOFBEFDOAPO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LOFBEFDOAPO_FPHPOGLDFLH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::LOFBEFDOAPO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LOFBEFDOAPO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LOFBEFDOAPO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFBEFDOAPO_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EHNFCJPMBKD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EHNFCJPMBKD&))((::PBYTE)hIl2Cpp + LOFBEFDOAPO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::LOFBEFDOAPO FPHPOGLDFLH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LOFBEFDOAPO EIFONLCJOPG)
	{
		return ((::LOFBEFDOAPO(*)(::FlatBuffers::ByteBuffer*, ::LOFBEFDOAPO))((::PBYTE)hIl2Cpp + LOFBEFDOAPO_FPHPOGLDFLH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
