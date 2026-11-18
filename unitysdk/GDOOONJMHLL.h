#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GDOOONJMHLL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FC8E0)
#define GDOOONJMHLL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GDOOONJMHLL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GDOOONJMHLL_MECKLHPFNAA_1_OFFSET UNITYSDK_OFFSET(0x1A5BC520)
#define GDOOONJMHLL_MECKLHPFNAA_OFFSET UNITYSDK_OFFSET(0x1A5BC4B0)
#define GDOOONJMHLL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FC8D0)
#define GDOOONJMHLL___INIT_OFFSET UNITYSDK_OFFSET(0x7FC8B0)

inline static constexpr unsigned int GDOOONJMHLL_TypeDefinitionIndex = 11533;

struct alignas(8) GDOOONJMHLL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDOOONJMHLL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDOOONJMHLL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GDOOONJMHLL MECKLHPFNAA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GDOOONJMHLL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDOOONJMHLL_MECKLHPFNAA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDOOONJMHLL_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDOOONJMHLL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::GDOOONJMHLL MECKLHPFNAA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GDOOONJMHLL EIFONLCJOPG)
	{
		return ((::GDOOONJMHLL(*)(::FlatBuffers::ByteBuffer*, ::GDOOONJMHLL))((::PBYTE)hIl2Cpp + GDOOONJMHLL_MECKLHPFNAA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::GDOOONJMHLL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GDOOONJMHLL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GDOOONJMHLL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
