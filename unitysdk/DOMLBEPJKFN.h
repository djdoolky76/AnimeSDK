#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GEPAAGPDOFP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DOMLBEPJKFN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DOMLBEPJKFN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FBC40)
#define DOMLBEPJKFN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DOMLBEPJKFN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DOMLBEPJKFN_KEMIFNKHBGL_1_OFFSET UNITYSDK_OFFSET(0x1A595D80)
#define DOMLBEPJKFN_KEMIFNKHBGL_OFFSET UNITYSDK_OFFSET(0x1A595AC0)
#define DOMLBEPJKFN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FBC20)
#define DOMLBEPJKFN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FBC30)
#define DOMLBEPJKFN___INIT_OFFSET UNITYSDK_OFFSET(0x7FBC00)

inline static constexpr unsigned int DOMLBEPJKFN_TypeDefinitionIndex = 15119;

struct alignas(8) DOMLBEPJKFN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMLBEPJKFN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOMLBEPJKFN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DOMLBEPJKFN KEMIFNKHBGL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DOMLBEPJKFN EIFONLCJOPG)
	{
		return ((::DOMLBEPJKFN(*)(::FlatBuffers::ByteBuffer*, ::DOMLBEPJKFN))((::PBYTE)hIl2Cpp + DOMLBEPJKFN_KEMIFNKHBGL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 FPCEGDFJDPO, ::System::Int32 EEEDMAGLOBB, ::GEPAAGPDOFP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::GEPAAGPDOFP&, ::System::Int32&))((::PBYTE)hIl2Cpp + DOMLBEPJKFN_LLGCOCLACNA_OFFSET))(this, FPCEGDFJDPO, EEEDMAGLOBB, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::DOMLBEPJKFN KEMIFNKHBGL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DOMLBEPJKFN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOMLBEPJKFN_KEMIFNKHBGL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GEPAAGPDOFP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GEPAAGPDOFP&))((::PBYTE)hIl2Cpp + DOMLBEPJKFN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMLBEPJKFN_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMLBEPJKFN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::DOMLBEPJKFN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DOMLBEPJKFN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOMLBEPJKFN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
