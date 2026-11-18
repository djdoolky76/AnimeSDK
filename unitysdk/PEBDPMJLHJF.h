#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EAEJMGGEAKN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PEBDPMJLHJF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PEBDPMJLHJF_BGAPPBIGGJN_1_OFFSET UNITYSDK_OFFSET(0x1C1A6FB0)
#define PEBDPMJLHJF_BGAPPBIGGJN_OFFSET UNITYSDK_OFFSET(0x1C1A6F40)
#define PEBDPMJLHJF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x820C70)
#define PEBDPMJLHJF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PEBDPMJLHJF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PEBDPMJLHJF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x820C50)
#define PEBDPMJLHJF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x820C60)
#define PEBDPMJLHJF___INIT_OFFSET UNITYSDK_OFFSET(0x820C30)

inline static constexpr unsigned int PEBDPMJLHJF_TypeDefinitionIndex = 11315;

struct alignas(8) PEBDPMJLHJF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBDPMJLHJF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PEBDPMJLHJF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 PBHJGJGHHLB, ::System::Int32 DADIDBMHLOI, ::EAEJMGGEAKN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::EAEJMGGEAKN&, ::System::Int32&))((::PBYTE)hIl2Cpp + PEBDPMJLHJF_LLGCOCLACNA_OFFSET))(this, PBHJGJGHHLB, DADIDBMHLOI, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EAEJMGGEAKN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EAEJMGGEAKN&))((::PBYTE)hIl2Cpp + PEBDPMJLHJF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBDPMJLHJF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::PEBDPMJLHJF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PEBDPMJLHJF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PEBDPMJLHJF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PEBDPMJLHJF BGAPPBIGGJN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PEBDPMJLHJF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PEBDPMJLHJF_BGAPPBIGGJN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::PEBDPMJLHJF BGAPPBIGGJN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PEBDPMJLHJF EIFONLCJOPG)
	{
		return ((::PEBDPMJLHJF(*)(::FlatBuffers::ByteBuffer*, ::PEBDPMJLHJF))((::PBYTE)hIl2Cpp + PEBDPMJLHJF_BGAPPBIGGJN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBDPMJLHJF_GHKKNCCLPAN_OFFSET))(this);
	}
};
