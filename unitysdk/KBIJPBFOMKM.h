#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EMECPADFOCL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KBIJPBFOMKM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KBIJPBFOMKM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80B000)
#define KBIJPBFOMKM_GAKONIJKAMF_1_OFFSET UNITYSDK_OFFSET(0x1B1432F0)
#define KBIJPBFOMKM_GAKONIJKAMF_OFFSET UNITYSDK_OFFSET(0x1B142FF0)
#define KBIJPBFOMKM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KBIJPBFOMKM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KBIJPBFOMKM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80AFF0)
#define KBIJPBFOMKM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80AFE0)
#define KBIJPBFOMKM___INIT_OFFSET UNITYSDK_OFFSET(0x80AFC0)

inline static constexpr unsigned int KBIJPBFOMKM_TypeDefinitionIndex = 12760;

struct alignas(8) KBIJPBFOMKM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIJPBFOMKM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBIJPBFOMKM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KBIJPBFOMKM GAKONIJKAMF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KBIJPBFOMKM EIFONLCJOPG)
	{
		return ((::KBIJPBFOMKM(*)(::FlatBuffers::ByteBuffer*, ::KBIJPBFOMKM))((::PBYTE)hIl2Cpp + KBIJPBFOMKM_GAKONIJKAMF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIJPBFOMKM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIJPBFOMKM_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EMECPADFOCL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EMECPADFOCL&, ::System::Int32&))((::PBYTE)hIl2Cpp + KBIJPBFOMKM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EMECPADFOCL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EMECPADFOCL&))((::PBYTE)hIl2Cpp + KBIJPBFOMKM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::KBIJPBFOMKM GAKONIJKAMF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KBIJPBFOMKM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBIJPBFOMKM_GAKONIJKAMF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::KBIJPBFOMKM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KBIJPBFOMKM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBIJPBFOMKM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
