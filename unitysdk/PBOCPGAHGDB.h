#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PBOCPGAHGDB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A6DD0)
#define PBOCPGAHGDB_GDPDINMMKNA_1_OFFSET UNITYSDK_OFFSET(0x17374BA0)
#define PBOCPGAHGDB_GDPDINMMKNA_OFFSET UNITYSDK_OFFSET(0x17374B30)
#define PBOCPGAHGDB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PBOCPGAHGDB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PBOCPGAHGDB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A6DC0)
#define PBOCPGAHGDB___INIT_OFFSET UNITYSDK_OFFSET(0x7A6DA0)

inline static constexpr unsigned int PBOCPGAHGDB_TypeDefinitionIndex = 13936;

struct alignas(8) PBOCPGAHGDB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBOCPGAHGDB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PBOCPGAHGDB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PBOCPGAHGDB GDPDINMMKNA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PBOCPGAHGDB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PBOCPGAHGDB_GDPDINMMKNA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::PBOCPGAHGDB GDPDINMMKNA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PBOCPGAHGDB EIFONLCJOPG)
	{
		return ((::PBOCPGAHGDB(*)(::FlatBuffers::ByteBuffer*, ::PBOCPGAHGDB))((::PBYTE)hIl2Cpp + PBOCPGAHGDB_GDPDINMMKNA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBOCPGAHGDB_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBOCPGAHGDB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::PBOCPGAHGDB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PBOCPGAHGDB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PBOCPGAHGDB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
