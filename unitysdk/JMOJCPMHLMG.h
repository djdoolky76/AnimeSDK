#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AJHNCFBIEIB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JMOJCPMHLMG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JMOJCPMHLMG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x763F50)
#define JMOJCPMHLMG_FBLIJNEEBCH_1_OFFSET UNITYSDK_OFFSET(0x1B639020)
#define JMOJCPMHLMG_FBLIJNEEBCH_OFFSET UNITYSDK_OFFSET(0x1B638CD0)
#define JMOJCPMHLMG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JMOJCPMHLMG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JMOJCPMHLMG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80FC70)
#define JMOJCPMHLMG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JMOJCPMHLMG_TypeDefinitionIndex = 11158;

struct alignas(8) JMOJCPMHLMG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOJCPMHLMG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JMOJCPMHLMG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JMOJCPMHLMG FBLIJNEEBCH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JMOJCPMHLMG EIFONLCJOPG)
	{
		return ((::JMOJCPMHLMG(*)(::FlatBuffers::ByteBuffer*, ::JMOJCPMHLMG))((::PBYTE)hIl2Cpp + JMOJCPMHLMG_FBLIJNEEBCH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOJCPMHLMG_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::String* MCOHLHMKLIP, ::AJHNCFBIEIB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::AJHNCFBIEIB&, ::System::Int32&))((::PBYTE)hIl2Cpp + JMOJCPMHLMG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::JMOJCPMHLMG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JMOJCPMHLMG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JMOJCPMHLMG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AJHNCFBIEIB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AJHNCFBIEIB&))((::PBYTE)hIl2Cpp + JMOJCPMHLMG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::JMOJCPMHLMG FBLIJNEEBCH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JMOJCPMHLMG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JMOJCPMHLMG_FBLIJNEEBCH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
