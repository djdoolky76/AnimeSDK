#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IFIEDKDENLJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x812430)
#define IFIEDKDENLJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IFIEDKDENLJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IFIEDKDENLJ_JJGGLJMIHBG_1_OFFSET UNITYSDK_OFFSET(0x1B7CBF20)
#define IFIEDKDENLJ_JJGGLJMIHBG_OFFSET UNITYSDK_OFFSET(0x1B7CBEB0)
#define IFIEDKDENLJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x812470)
#define IFIEDKDENLJ___INIT_OFFSET UNITYSDK_OFFSET(0x812410)

inline static constexpr unsigned int IFIEDKDENLJ_TypeDefinitionIndex = 10180;

struct alignas(8) IFIEDKDENLJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIEDKDENLJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFIEDKDENLJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::IFIEDKDENLJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IFIEDKDENLJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFIEDKDENLJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IFIEDKDENLJ JJGGLJMIHBG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IFIEDKDENLJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFIEDKDENLJ_JJGGLJMIHBG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::IFIEDKDENLJ JJGGLJMIHBG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IFIEDKDENLJ EIFONLCJOPG)
	{
		return ((::IFIEDKDENLJ(*)(::FlatBuffers::ByteBuffer*, ::IFIEDKDENLJ))((::PBYTE)hIl2Cpp + IFIEDKDENLJ_JJGGLJMIHBG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIEDKDENLJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIEDKDENLJ_GHKKNCCLPAN_OFFSET))(this);
	}
};
