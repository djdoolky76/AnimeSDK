#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NEGMBBEGKOO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x85D9B0)
#define NEGMBBEGKOO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NEGMBBEGKOO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NEGMBBEGKOO_JIIICOCCAAJ_1_OFFSET UNITYSDK_OFFSET(0x1CCEA6D0)
#define NEGMBBEGKOO_JIIICOCCAAJ_OFFSET UNITYSDK_OFFSET(0x1CCEA670)
#define NEGMBBEGKOO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x85D9F0)
#define NEGMBBEGKOO___INIT_OFFSET UNITYSDK_OFFSET(0x85D990)

inline static constexpr unsigned int NEGMBBEGKOO_TypeDefinitionIndex = 15759;

struct alignas(8) NEGMBBEGKOO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGMBBEGKOO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NEGMBBEGKOO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::NEGMBBEGKOO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NEGMBBEGKOO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NEGMBBEGKOO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NEGMBBEGKOO JIIICOCCAAJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NEGMBBEGKOO EIFONLCJOPG)
	{
		return ((::NEGMBBEGKOO(*)(::FlatBuffers::ByteBuffer*, ::NEGMBBEGKOO))((::PBYTE)hIl2Cpp + NEGMBBEGKOO_JIIICOCCAAJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::NEGMBBEGKOO JIIICOCCAAJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NEGMBBEGKOO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NEGMBBEGKOO_JIIICOCCAAJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGMBBEGKOO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGMBBEGKOO_GHKKNCCLPAN_OFFSET))(this);
	}
};
