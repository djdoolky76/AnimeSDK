#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EPKACNLBFAB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ODKGEOOIPMA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ODKGEOOIPMA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x763F50)
#define ODKGEOOIPMA_FJBABKKBMNC_1_OFFSET UNITYSDK_OFFSET(0x18E2B3F0)
#define ODKGEOOIPMA_FJBABKKBMNC_OFFSET UNITYSDK_OFFSET(0x18E22BA0)
#define ODKGEOOIPMA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ODKGEOOIPMA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ODKGEOOIPMA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D8360)
#define ODKGEOOIPMA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ODKGEOOIPMA_TypeDefinitionIndex = 11887;

struct alignas(8) ODKGEOOIPMA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKGEOOIPMA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODKGEOOIPMA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::ODKGEOOIPMA FJBABKKBMNC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ODKGEOOIPMA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODKGEOOIPMA_FJBABKKBMNC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKGEOOIPMA_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EPKACNLBFAB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EPKACNLBFAB&))((::PBYTE)hIl2Cpp + ODKGEOOIPMA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::ODKGEOOIPMA FJBABKKBMNC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ODKGEOOIPMA EIFONLCJOPG)
	{
		return ((::ODKGEOOIPMA(*)(::FlatBuffers::ByteBuffer*, ::ODKGEOOIPMA))((::PBYTE)hIl2Cpp + ODKGEOOIPMA_FJBABKKBMNC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::ODKGEOOIPMA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ODKGEOOIPMA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ODKGEOOIPMA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::String* MCOHLHMKLIP, ::EPKACNLBFAB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::EPKACNLBFAB&, ::System::Int32&))((::PBYTE)hIl2Cpp + ODKGEOOIPMA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
