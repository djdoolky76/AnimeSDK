#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ENIPDPBNCJG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JEAAJBAPCEP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JEAAJBAPCEP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7BF1D0)
#define JEAAJBAPCEP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JEAAJBAPCEP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JEAAJBAPCEP_KEJAHGOKCGO_1_OFFSET UNITYSDK_OFFSET(0x17C24750)
#define JEAAJBAPCEP_KEJAHGOKCGO_OFFSET UNITYSDK_OFFSET(0x17C246E0)
#define JEAAJBAPCEP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7BF1C0)
#define JEAAJBAPCEP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7BF210)
#define JEAAJBAPCEP___INIT_OFFSET UNITYSDK_OFFSET(0x7BF1A0)

inline static constexpr unsigned int JEAAJBAPCEP_TypeDefinitionIndex = 11471;

struct alignas(8) JEAAJBAPCEP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEAAJBAPCEP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEAAJBAPCEP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JEAAJBAPCEP KEJAHGOKCGO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JEAAJBAPCEP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEAAJBAPCEP_KEJAHGOKCGO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ENIPDPBNCJG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ENIPDPBNCJG&, ::System::Int32&))((::PBYTE)hIl2Cpp + JEAAJBAPCEP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::JEAAJBAPCEP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JEAAJBAPCEP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEAAJBAPCEP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ENIPDPBNCJG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ENIPDPBNCJG&))((::PBYTE)hIl2Cpp + JEAAJBAPCEP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEAAJBAPCEP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::JEAAJBAPCEP KEJAHGOKCGO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JEAAJBAPCEP EIFONLCJOPG)
	{
		return ((::JEAAJBAPCEP(*)(::FlatBuffers::ByteBuffer*, ::JEAAJBAPCEP))((::PBYTE)hIl2Cpp + JEAAJBAPCEP_KEJAHGOKCGO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEAAJBAPCEP_GHKKNCCLPAN_OFFSET))(this);
	}
};
