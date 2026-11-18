#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EIJAKHFGHMA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F5F80)
#define EIJAKHFGHMA_EDOGKABMBMH_1_OFFSET UNITYSDK_OFFSET(0x1A19EE90)
#define EIJAKHFGHMA_EDOGKABMBMH_OFFSET UNITYSDK_OFFSET(0x1A19EE20)
#define EIJAKHFGHMA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EIJAKHFGHMA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EIJAKHFGHMA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F5FC0)
#define EIJAKHFGHMA___INIT_OFFSET UNITYSDK_OFFSET(0x7F5F60)

inline static constexpr unsigned int EIJAKHFGHMA_TypeDefinitionIndex = 10754;

struct alignas(8) EIJAKHFGHMA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJAKHFGHMA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIJAKHFGHMA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::EIJAKHFGHMA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EIJAKHFGHMA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIJAKHFGHMA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::EIJAKHFGHMA EDOGKABMBMH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EIJAKHFGHMA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIJAKHFGHMA_EDOGKABMBMH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::EIJAKHFGHMA EDOGKABMBMH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EIJAKHFGHMA EIFONLCJOPG)
	{
		return ((::EIJAKHFGHMA(*)(::FlatBuffers::ByteBuffer*, ::EIJAKHFGHMA))((::PBYTE)hIl2Cpp + EIJAKHFGHMA_EDOGKABMBMH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJAKHFGHMA_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJAKHFGHMA_PPOMNIFACOL_OFFSET))(this);
	}
};
