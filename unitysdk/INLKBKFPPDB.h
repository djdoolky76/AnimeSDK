#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define INLKBKFPPDB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x77A860)
#define INLKBKFPPDB_BHHKANBHBFH_1_OFFSET UNITYSDK_OFFSET(0x1610DE80)
#define INLKBKFPPDB_BHHKANBHBFH_OFFSET UNITYSDK_OFFSET(0x1610DDE0)
#define INLKBKFPPDB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define INLKBKFPPDB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define INLKBKFPPDB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x77A850)
#define INLKBKFPPDB___INIT_OFFSET UNITYSDK_OFFSET(0x77A830)

inline static constexpr unsigned int INLKBKFPPDB_TypeDefinitionIndex = 13927;

struct alignas(8) INLKBKFPPDB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + INLKBKFPPDB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + INLKBKFPPDB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INLKBKFPPDB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::INLKBKFPPDB BHHKANBHBFH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::INLKBKFPPDB EIFONLCJOPG)
	{
		return ((::INLKBKFPPDB(*)(::FlatBuffers::ByteBuffer*, ::INLKBKFPPDB))((::PBYTE)hIl2Cpp + INLKBKFPPDB_BHHKANBHBFH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INLKBKFPPDB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::INLKBKFPPDB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::INLKBKFPPDB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + INLKBKFPPDB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::INLKBKFPPDB BHHKANBHBFH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::INLKBKFPPDB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + INLKBKFPPDB_BHHKANBHBFH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
