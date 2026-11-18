#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define COJIIBLIFLH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7888B0)
#define COJIIBLIFLH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define COJIIBLIFLH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define COJIIBLIFLH_IJJPGGJLKCL_1_OFFSET UNITYSDK_OFFSET(0x16613CB0)
#define COJIIBLIFLH_IJJPGGJLKCL_OFFSET UNITYSDK_OFFSET(0x16613C10)
#define COJIIBLIFLH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7888A0)
#define COJIIBLIFLH___INIT_OFFSET UNITYSDK_OFFSET(0x788880)

inline static constexpr unsigned int COJIIBLIFLH_TypeDefinitionIndex = 9975;

struct alignas(8) COJIIBLIFLH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + COJIIBLIFLH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + COJIIBLIFLH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COJIIBLIFLH_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + COJIIBLIFLH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::COJIIBLIFLH IJJPGGJLKCL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::COJIIBLIFLH EIFONLCJOPG)
	{
		return ((::COJIIBLIFLH(*)(::FlatBuffers::ByteBuffer*, ::COJIIBLIFLH))((::PBYTE)hIl2Cpp + COJIIBLIFLH_IJJPGGJLKCL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::COJIIBLIFLH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::COJIIBLIFLH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + COJIIBLIFLH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::COJIIBLIFLH IJJPGGJLKCL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::COJIIBLIFLH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + COJIIBLIFLH_IJJPGGJLKCL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
