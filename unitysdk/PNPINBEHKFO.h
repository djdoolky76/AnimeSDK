#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PNPINBEHKFO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x9921B0)
#define PNPINBEHKFO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PNPINBEHKFO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PNPINBEHKFO_JKDOAKMEMGE_1_OFFSET UNITYSDK_OFFSET(0x1FA564A0)
#define PNPINBEHKFO_JKDOAKMEMGE_OFFSET UNITYSDK_OFFSET(0x1FA56430)
#define PNPINBEHKFO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x9921F0)
#define PNPINBEHKFO___INIT_OFFSET UNITYSDK_OFFSET(0x992190)

inline static constexpr unsigned int PNPINBEHKFO_TypeDefinitionIndex = 10218;

struct alignas(8) PNPINBEHKFO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPINBEHKFO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNPINBEHKFO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::PNPINBEHKFO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PNPINBEHKFO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNPINBEHKFO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PNPINBEHKFO JKDOAKMEMGE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PNPINBEHKFO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNPINBEHKFO_JKDOAKMEMGE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPINBEHKFO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::PNPINBEHKFO JKDOAKMEMGE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PNPINBEHKFO EIFONLCJOPG)
	{
		return ((::PNPINBEHKFO(*)(::FlatBuffers::ByteBuffer*, ::PNPINBEHKFO))((::PBYTE)hIl2Cpp + PNPINBEHKFO_JKDOAKMEMGE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPINBEHKFO_PPOMNIFACOL_OFFSET))(this);
	}
};
