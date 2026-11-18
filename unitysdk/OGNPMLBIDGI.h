#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OGNPMLBIDGI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EFFE0)
#define OGNPMLBIDGI_BIEMFKEGPDD_1_OFFSET UNITYSDK_OFFSET(0x19DCE3A0)
#define OGNPMLBIDGI_BIEMFKEGPDD_OFFSET UNITYSDK_OFFSET(0x19DCE330)
#define OGNPMLBIDGI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OGNPMLBIDGI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OGNPMLBIDGI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F0020)
#define OGNPMLBIDGI___INIT_OFFSET UNITYSDK_OFFSET(0x7EFFC0)

inline static constexpr unsigned int OGNPMLBIDGI_TypeDefinitionIndex = 14026;

struct alignas(8) OGNPMLBIDGI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNPMLBIDGI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGNPMLBIDGI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNPMLBIDGI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::OGNPMLBIDGI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OGNPMLBIDGI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGNPMLBIDGI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNPMLBIDGI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::OGNPMLBIDGI BIEMFKEGPDD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OGNPMLBIDGI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGNPMLBIDGI_BIEMFKEGPDD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::OGNPMLBIDGI BIEMFKEGPDD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OGNPMLBIDGI EIFONLCJOPG)
	{
		return ((::OGNPMLBIDGI(*)(::FlatBuffers::ByteBuffer*, ::OGNPMLBIDGI))((::PBYTE)hIl2Cpp + OGNPMLBIDGI_BIEMFKEGPDD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
