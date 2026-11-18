#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HFHJEOKKPLI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OLCDNGEIINE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OLCDNGEIINE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F0070)
#define OLCDNGEIINE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OLCDNGEIINE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OLCDNGEIINE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F00B0)
#define OLCDNGEIINE_NNLEFGLEHLG_1_OFFSET UNITYSDK_OFFSET(0x19DCFA80)
#define OLCDNGEIINE_NNLEFGLEHLG_OFFSET UNITYSDK_OFFSET(0x19DCFA10)
#define OLCDNGEIINE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F00C0)
#define OLCDNGEIINE___INIT_OFFSET UNITYSDK_OFFSET(0x7F0050)

inline static constexpr unsigned int OLCDNGEIINE_TypeDefinitionIndex = 11987;

struct alignas(8) OLCDNGEIINE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLCDNGEIINE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OLCDNGEIINE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::OLCDNGEIINE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OLCDNGEIINE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OLCDNGEIINE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::OLCDNGEIINE NNLEFGLEHLG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OLCDNGEIINE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OLCDNGEIINE_NNLEFGLEHLG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLCDNGEIINE_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HFHJEOKKPLI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HFHJEOKKPLI&))((::PBYTE)hIl2Cpp + OLCDNGEIINE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::OLCDNGEIINE NNLEFGLEHLG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OLCDNGEIINE EIFONLCJOPG)
	{
		return ((::OLCDNGEIINE(*)(::FlatBuffers::ByteBuffer*, ::OLCDNGEIINE))((::PBYTE)hIl2Cpp + OLCDNGEIINE_NNLEFGLEHLG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HFHJEOKKPLI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HFHJEOKKPLI&, ::System::Int32&))((::PBYTE)hIl2Cpp + OLCDNGEIINE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLCDNGEIINE_PPOMNIFACOL_OFFSET))(this);
	}
};
