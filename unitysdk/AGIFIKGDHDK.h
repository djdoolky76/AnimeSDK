#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NDFAFJFHNPA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AGIFIKGDHDK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AGIFIKGDHDK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EC530)
#define AGIFIKGDHDK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AGIFIKGDHDK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AGIFIKGDHDK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EC570)
#define AGIFIKGDHDK_OFAOEMLBIDN_1_OFFSET UNITYSDK_OFFSET(0x19BD4E10)
#define AGIFIKGDHDK_OFAOEMLBIDN_OFFSET UNITYSDK_OFFSET(0x19BD4DA0)
#define AGIFIKGDHDK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EC580)
#define AGIFIKGDHDK___INIT_OFFSET UNITYSDK_OFFSET(0x7EC510)

inline static constexpr unsigned int AGIFIKGDHDK_TypeDefinitionIndex = 14478;

struct alignas(8) AGIFIKGDHDK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGIFIKGDHDK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGIFIKGDHDK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::AGIFIKGDHDK OFAOEMLBIDN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AGIFIKGDHDK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGIFIKGDHDK_OFAOEMLBIDN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGIFIKGDHDK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::AGIFIKGDHDK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AGIFIKGDHDK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGIFIKGDHDK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NDFAFJFHNPA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NDFAFJFHNPA&))((::PBYTE)hIl2Cpp + AGIFIKGDHDK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::AGIFIKGDHDK OFAOEMLBIDN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AGIFIKGDHDK EIFONLCJOPG)
	{
		return ((::AGIFIKGDHDK(*)(::FlatBuffers::ByteBuffer*, ::AGIFIKGDHDK))((::PBYTE)hIl2Cpp + AGIFIKGDHDK_OFAOEMLBIDN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NDFAFJFHNPA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NDFAFJFHNPA&, ::System::Int32&))((::PBYTE)hIl2Cpp + AGIFIKGDHDK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGIFIKGDHDK_PPOMNIFACOL_OFFSET))(this);
	}
};
