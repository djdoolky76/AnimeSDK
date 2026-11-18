#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AFEDFEJHBOL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E99C0)
#define AFEDFEJHBOL_GBDIFNHLGLM_1_OFFSET UNITYSDK_OFFSET(0x19AB93C0)
#define AFEDFEJHBOL_GBDIFNHLGLM_OFFSET UNITYSDK_OFFSET(0x19AB92C0)
#define AFEDFEJHBOL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AFEDFEJHBOL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AFEDFEJHBOL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E99B0)
#define AFEDFEJHBOL___INIT_OFFSET UNITYSDK_OFFSET(0x7E9990)

inline static constexpr unsigned int AFEDFEJHBOL_TypeDefinitionIndex = 11739;

struct alignas(8) AFEDFEJHBOL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEDFEJHBOL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AFEDFEJHBOL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::AFEDFEJHBOL GBDIFNHLGLM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AFEDFEJHBOL EIFONLCJOPG)
	{
		return ((::AFEDFEJHBOL(*)(::FlatBuffers::ByteBuffer*, ::AFEDFEJHBOL))((::PBYTE)hIl2Cpp + AFEDFEJHBOL_GBDIFNHLGLM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEDFEJHBOL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::AFEDFEJHBOL GBDIFNHLGLM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AFEDFEJHBOL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AFEDFEJHBOL_GBDIFNHLGLM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::AFEDFEJHBOL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AFEDFEJHBOL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AFEDFEJHBOL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEDFEJHBOL_GHKKNCCLPAN_OFFSET))(this);
	}
};
