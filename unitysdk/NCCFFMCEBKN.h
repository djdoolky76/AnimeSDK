#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MPEMFEEPDBG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NCCFFMCEBKN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NCCFFMCEBKN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AEFD0)
#define NCCFFMCEBKN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NCCFFMCEBKN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NCCFFMCEBKN_JHMJOGFOCKP_1_OFFSET UNITYSDK_OFFSET(0x1D0C0130)
#define NCCFFMCEBKN_JHMJOGFOCKP_OFFSET UNITYSDK_OFFSET(0x1D0C0030)
#define NCCFFMCEBKN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AEFC0)
#define NCCFFMCEBKN___INIT_OFFSET UNITYSDK_OFFSET(0x8AEFA0)

inline static constexpr unsigned int NCCFFMCEBKN_TypeDefinitionIndex = 15438;

struct alignas(8) NCCFFMCEBKN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCFFMCEBKN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NCCFFMCEBKN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NCCFFMCEBKN JHMJOGFOCKP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NCCFFMCEBKN EIFONLCJOPG)
	{
		return ((::NCCFFMCEBKN(*)(::FlatBuffers::ByteBuffer*, ::NCCFFMCEBKN))((::PBYTE)hIl2Cpp + NCCFFMCEBKN_JHMJOGFOCKP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCFFMCEBKN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::NCCFFMCEBKN JHMJOGFOCKP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NCCFFMCEBKN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NCCFFMCEBKN_JHMJOGFOCKP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCFFMCEBKN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::NCCFFMCEBKN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NCCFFMCEBKN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NCCFFMCEBKN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MPEMFEEPDBG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MPEMFEEPDBG&))((::PBYTE)hIl2Cpp + NCCFFMCEBKN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
