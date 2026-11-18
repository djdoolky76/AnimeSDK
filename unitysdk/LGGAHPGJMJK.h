#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AJCDECGKEDB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LGGAHPGJMJK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LGGAHPGJMJK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x819B10)
#define LGGAHPGJMJK_EADAELEONNO_1_OFFSET UNITYSDK_OFFSET(0x1BA87630)
#define LGGAHPGJMJK_EADAELEONNO_OFFSET UNITYSDK_OFFSET(0x1BA87590)
#define LGGAHPGJMJK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LGGAHPGJMJK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LGGAHPGJMJK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x819B50)
#define LGGAHPGJMJK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x819B60)
#define LGGAHPGJMJK___INIT_OFFSET UNITYSDK_OFFSET(0x819AF0)

inline static constexpr unsigned int LGGAHPGJMJK_TypeDefinitionIndex = 16467;

struct alignas(8) LGGAHPGJMJK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGAHPGJMJK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGGAHPGJMJK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LGGAHPGJMJK EADAELEONNO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LGGAHPGJMJK EIFONLCJOPG)
	{
		return ((::LGGAHPGJMJK(*)(::FlatBuffers::ByteBuffer*, ::LGGAHPGJMJK))((::PBYTE)hIl2Cpp + LGGAHPGJMJK_EADAELEONNO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::LGGAHPGJMJK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LGGAHPGJMJK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGGAHPGJMJK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LGGAHPGJMJK EADAELEONNO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LGGAHPGJMJK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGGAHPGJMJK_EADAELEONNO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 PBHJGJGHHLB, ::System::Int32 DLFFOBLKJLI, ::AJCDECGKEDB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::AJCDECGKEDB&, ::System::Int32&))((::PBYTE)hIl2Cpp + LGGAHPGJMJK_LLGCOCLACNA_OFFSET))(this, PBHJGJGHHLB, DLFFOBLKJLI, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGAHPGJMJK_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGAHPGJMJK_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AJCDECGKEDB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AJCDECGKEDB&))((::PBYTE)hIl2Cpp + LGGAHPGJMJK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
