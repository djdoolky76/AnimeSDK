#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CAGHFIMIEOO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EMIFCLOPJGB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EMIFCLOPJGB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x76DC90)
#define EMIFCLOPJGB_FDKMLACKIDP_1_OFFSET UNITYSDK_OFFSET(0x15A6DFE0)
#define EMIFCLOPJGB_FDKMLACKIDP_OFFSET UNITYSDK_OFFSET(0x15A6DF80)
#define EMIFCLOPJGB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EMIFCLOPJGB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EMIFCLOPJGB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x76DC80)
#define EMIFCLOPJGB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x76DCD0)
#define EMIFCLOPJGB___INIT_OFFSET UNITYSDK_OFFSET(0x76DC60)

inline static constexpr unsigned int EMIFCLOPJGB_TypeDefinitionIndex = 14067;

struct alignas(8) EMIFCLOPJGB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMIFCLOPJGB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EMIFCLOPJGB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 GAMHBAONNHN, ::System::Int32 LIGLBFCGKML, ::CAGHFIMIEOO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::CAGHFIMIEOO&, ::System::Int32&))((::PBYTE)hIl2Cpp + EMIFCLOPJGB_LLGCOCLACNA_OFFSET))(this, GAMHBAONNHN, LIGLBFCGKML, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMIFCLOPJGB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::EMIFCLOPJGB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EMIFCLOPJGB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EMIFCLOPJGB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::EMIFCLOPJGB FDKMLACKIDP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EMIFCLOPJGB EIFONLCJOPG)
	{
		return ((::EMIFCLOPJGB(*)(::FlatBuffers::ByteBuffer*, ::EMIFCLOPJGB))((::PBYTE)hIl2Cpp + EMIFCLOPJGB_FDKMLACKIDP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CAGHFIMIEOO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CAGHFIMIEOO&))((::PBYTE)hIl2Cpp + EMIFCLOPJGB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::EMIFCLOPJGB FDKMLACKIDP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EMIFCLOPJGB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EMIFCLOPJGB_FDKMLACKIDP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMIFCLOPJGB_PPOMNIFACOL_OFFSET))(this);
	}
};
