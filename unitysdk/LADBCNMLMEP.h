#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LADBCNMLMEP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x77B290)
#define LADBCNMLMEP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LADBCNMLMEP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LADBCNMLMEP_KGLPEBBFFJL_1_OFFSET UNITYSDK_OFFSET(0x1612A970)
#define LADBCNMLMEP_KGLPEBBFFJL_OFFSET UNITYSDK_OFFSET(0x1612A900)
#define LADBCNMLMEP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x77B2D0)
#define LADBCNMLMEP___INIT_OFFSET UNITYSDK_OFFSET(0x77B270)

inline static constexpr unsigned int LADBCNMLMEP_TypeDefinitionIndex = 15544;

struct alignas(8) LADBCNMLMEP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LADBCNMLMEP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LADBCNMLMEP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LADBCNMLMEP KGLPEBBFFJL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LADBCNMLMEP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LADBCNMLMEP_KGLPEBBFFJL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::LADBCNMLMEP KGLPEBBFFJL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LADBCNMLMEP EIFONLCJOPG)
	{
		return ((::LADBCNMLMEP(*)(::FlatBuffers::ByteBuffer*, ::LADBCNMLMEP))((::PBYTE)hIl2Cpp + LADBCNMLMEP_KGLPEBBFFJL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LADBCNMLMEP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::LADBCNMLMEP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LADBCNMLMEP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LADBCNMLMEP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LADBCNMLMEP_PPOMNIFACOL_OFFSET))(this);
	}
};
