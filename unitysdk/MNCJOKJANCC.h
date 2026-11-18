#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BFDKHPEIEOB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MNCJOKJANCC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MNCJOKJANCC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AB120)
#define MNCJOKJANCC_CCPOJIMLPFO_1_OFFSET UNITYSDK_OFFSET(0x1CFE49C0)
#define MNCJOKJANCC_CCPOJIMLPFO_OFFSET UNITYSDK_OFFSET(0x1CFE4960)
#define MNCJOKJANCC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MNCJOKJANCC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MNCJOKJANCC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8AB110)
#define MNCJOKJANCC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AB100)
#define MNCJOKJANCC___INIT_OFFSET UNITYSDK_OFFSET(0x8AB0E0)

inline static constexpr unsigned int MNCJOKJANCC_TypeDefinitionIndex = 17464;

struct alignas(8) MNCJOKJANCC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCJOKJANCC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNCJOKJANCC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BFDKHPEIEOB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BFDKHPEIEOB&))((::PBYTE)hIl2Cpp + MNCJOKJANCC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCJOKJANCC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BFDKHPEIEOB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BFDKHPEIEOB&, ::System::Int32&))((::PBYTE)hIl2Cpp + MNCJOKJANCC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::MNCJOKJANCC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MNCJOKJANCC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNCJOKJANCC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCJOKJANCC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MNCJOKJANCC CCPOJIMLPFO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MNCJOKJANCC EIFONLCJOPG)
	{
		return ((::MNCJOKJANCC(*)(::FlatBuffers::ByteBuffer*, ::MNCJOKJANCC))((::PBYTE)hIl2Cpp + MNCJOKJANCC_CCPOJIMLPFO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::MNCJOKJANCC CCPOJIMLPFO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MNCJOKJANCC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNCJOKJANCC_CCPOJIMLPFO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
