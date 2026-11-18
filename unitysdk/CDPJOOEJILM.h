#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BLDFLJKGKEM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CDPJOOEJILM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CDPJOOEJILM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F9B20)
#define CDPJOOEJILM_GDOCPBIIOCC_1_OFFSET UNITYSDK_OFFSET(0x1A53C8B0)
#define CDPJOOEJILM_GDOCPBIIOCC_OFFSET UNITYSDK_OFFSET(0x1A53C840)
#define CDPJOOEJILM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CDPJOOEJILM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CDPJOOEJILM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F9B60)
#define CDPJOOEJILM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F9B10)
#define CDPJOOEJILM___INIT_OFFSET UNITYSDK_OFFSET(0x7F9AF0)

inline static constexpr unsigned int CDPJOOEJILM_TypeDefinitionIndex = 15918;

struct alignas(8) CDPJOOEJILM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPJOOEJILM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDPJOOEJILM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::CDPJOOEJILM GDOCPBIIOCC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CDPJOOEJILM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDPJOOEJILM_GDOCPBIIOCC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPJOOEJILM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPJOOEJILM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::CDPJOOEJILM GDOCPBIIOCC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CDPJOOEJILM EIFONLCJOPG)
	{
		return ((::CDPJOOEJILM(*)(::FlatBuffers::ByteBuffer*, ::CDPJOOEJILM))((::PBYTE)hIl2Cpp + CDPJOOEJILM_GDOCPBIIOCC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BLDFLJKGKEM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BLDFLJKGKEM&))((::PBYTE)hIl2Cpp + CDPJOOEJILM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::CDPJOOEJILM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CDPJOOEJILM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CDPJOOEJILM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BLDFLJKGKEM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BLDFLJKGKEM&, ::System::Int32&))((::PBYTE)hIl2Cpp + CDPJOOEJILM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
