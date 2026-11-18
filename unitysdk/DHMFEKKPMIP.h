#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PLKGJLENECO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DHMFEKKPMIP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DHMFEKKPMIP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E2AB0)
#define DHMFEKKPMIP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DHMFEKKPMIP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DHMFEKKPMIP_HLOEKEOEIOF_1_OFFSET UNITYSDK_OFFSET(0x1950BA40)
#define DHMFEKKPMIP_HLOEKEOEIOF_OFFSET UNITYSDK_OFFSET(0x194EE9D0)
#define DHMFEKKPMIP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E2AF0)
#define DHMFEKKPMIP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E2AA0)
#define DHMFEKKPMIP___INIT_OFFSET UNITYSDK_OFFSET(0x7E2A80)

inline static constexpr unsigned int DHMFEKKPMIP_TypeDefinitionIndex = 11241;

struct alignas(8) DHMFEKKPMIP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMFEKKPMIP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DHMFEKKPMIP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DHMFEKKPMIP HLOEKEOEIOF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DHMFEKKPMIP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DHMFEKKPMIP_HLOEKEOEIOF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMFEKKPMIP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PLKGJLENECO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PLKGJLENECO&))((::PBYTE)hIl2Cpp + DHMFEKKPMIP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::DHMFEKKPMIP HLOEKEOEIOF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DHMFEKKPMIP EIFONLCJOPG)
	{
		return ((::DHMFEKKPMIP(*)(::FlatBuffers::ByteBuffer*, ::DHMFEKKPMIP))((::PBYTE)hIl2Cpp + DHMFEKKPMIP_HLOEKEOEIOF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMFEKKPMIP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::DHMFEKKPMIP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DHMFEKKPMIP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DHMFEKKPMIP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 JGKNCPMELON, ::System::Int32 BPJGOHCLDGM, ::PLKGJLENECO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::PLKGJLENECO&, ::System::Int32&))((::PBYTE)hIl2Cpp + DHMFEKKPMIP_LLGCOCLACNA_OFFSET))(this, JGKNCPMELON, BPJGOHCLDGM, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
