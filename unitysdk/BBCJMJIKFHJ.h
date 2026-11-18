#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BMKHHMCEBFA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BBCJMJIKFHJ_AMNBGCCAKAE_1_OFFSET UNITYSDK_OFFSET(0x157794D0)
#define BBCJMJIKFHJ_AMNBGCCAKAE_OFFSET UNITYSDK_OFFSET(0x15779430)
#define BBCJMJIKFHJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BBCJMJIKFHJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x764090)
#define BBCJMJIKFHJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BBCJMJIKFHJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BBCJMJIKFHJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7640D0)
#define BBCJMJIKFHJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7640E0)
#define BBCJMJIKFHJ___INIT_OFFSET UNITYSDK_OFFSET(0x764070)

inline static constexpr unsigned int BBCJMJIKFHJ_TypeDefinitionIndex = 12010;

struct alignas(8) BBCJMJIKFHJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBCJMJIKFHJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BBCJMJIKFHJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BBCJMJIKFHJ AMNBGCCAKAE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BBCJMJIKFHJ EIFONLCJOPG)
	{
		return ((::BBCJMJIKFHJ(*)(::FlatBuffers::ByteBuffer*, ::BBCJMJIKFHJ))((::PBYTE)hIl2Cpp + BBCJMJIKFHJ_AMNBGCCAKAE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::BBCJMJIKFHJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BBCJMJIKFHJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BBCJMJIKFHJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BBCJMJIKFHJ AMNBGCCAKAE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BBCJMJIKFHJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BBCJMJIKFHJ_AMNBGCCAKAE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BMKHHMCEBFA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BMKHHMCEBFA&))((::PBYTE)hIl2Cpp + BBCJMJIKFHJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBCJMJIKFHJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BMKHHMCEBFA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BMKHHMCEBFA&, ::System::Int32&))((::PBYTE)hIl2Cpp + BBCJMJIKFHJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBCJMJIKFHJ_PPOMNIFACOL_OFFSET))(this);
	}
};
