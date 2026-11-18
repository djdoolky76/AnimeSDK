#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ECMDDJJMDAN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F2360)
#define ECMDDJJMDAN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ECMDDJJMDAN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ECMDDJJMDAN_MFEDBKAMNED_1_OFFSET UNITYSDK_OFFSET(0x19F45FC0)
#define ECMDDJJMDAN_MFEDBKAMNED_OFFSET UNITYSDK_OFFSET(0x19F45F20)
#define ECMDDJJMDAN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F2350)
#define ECMDDJJMDAN___INIT_OFFSET UNITYSDK_OFFSET(0x7F2330)

inline static constexpr unsigned int ECMDDJJMDAN_TypeDefinitionIndex = 10863;

struct alignas(8) ECMDDJJMDAN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECMDDJJMDAN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ECMDDJJMDAN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECMDDJJMDAN_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECMDDJJMDAN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::ECMDDJJMDAN MFEDBKAMNED(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ECMDDJJMDAN EIFONLCJOPG)
	{
		return ((::ECMDDJJMDAN(*)(::FlatBuffers::ByteBuffer*, ::ECMDDJJMDAN))((::PBYTE)hIl2Cpp + ECMDDJJMDAN_MFEDBKAMNED_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::ECMDDJJMDAN MFEDBKAMNED_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ECMDDJJMDAN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ECMDDJJMDAN_MFEDBKAMNED_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::ECMDDJJMDAN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ECMDDJJMDAN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ECMDDJJMDAN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
