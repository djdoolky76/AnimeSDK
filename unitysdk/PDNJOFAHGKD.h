#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PDNJOFAHGKD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F02E0)
#define PDNJOFAHGKD_EOKNGFGNODL_1_OFFSET UNITYSDK_OFFSET(0x19DD8AD0)
#define PDNJOFAHGKD_EOKNGFGNODL_OFFSET UNITYSDK_OFFSET(0x19DD8A60)
#define PDNJOFAHGKD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PDNJOFAHGKD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PDNJOFAHGKD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F0320)
#define PDNJOFAHGKD___INIT_OFFSET UNITYSDK_OFFSET(0x7F02C0)

inline static constexpr unsigned int PDNJOFAHGKD_TypeDefinitionIndex = 13103;

struct alignas(8) PDNJOFAHGKD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNJOFAHGKD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PDNJOFAHGKD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PDNJOFAHGKD EOKNGFGNODL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PDNJOFAHGKD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PDNJOFAHGKD_EOKNGFGNODL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::PDNJOFAHGKD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PDNJOFAHGKD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PDNJOFAHGKD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNJOFAHGKD_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::PDNJOFAHGKD EOKNGFGNODL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PDNJOFAHGKD EIFONLCJOPG)
	{
		return ((::PDNJOFAHGKD(*)(::FlatBuffers::ByteBuffer*, ::PDNJOFAHGKD))((::PBYTE)hIl2Cpp + PDNJOFAHGKD_EOKNGFGNODL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNJOFAHGKD_PPOMNIFACOL_OFFSET))(this);
	}
};
