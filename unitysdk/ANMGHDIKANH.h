#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ANMGHDIKANH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7AC320)
#define ANMGHDIKANH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ANMGHDIKANH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ANMGHDIKANH_IPNOEKCBADB_1_OFFSET UNITYSDK_OFFSET(0x1774D8F0)
#define ANMGHDIKANH_IPNOEKCBADB_OFFSET UNITYSDK_OFFSET(0x1774D890)
#define ANMGHDIKANH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7AC360)
#define ANMGHDIKANH___INIT_OFFSET UNITYSDK_OFFSET(0x7AC300)

inline static constexpr unsigned int ANMGHDIKANH_TypeDefinitionIndex = 16567;

struct alignas(8) ANMGHDIKANH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMGHDIKANH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ANMGHDIKANH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::ANMGHDIKANH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ANMGHDIKANH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ANMGHDIKANH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMGHDIKANH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMGHDIKANH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::ANMGHDIKANH IPNOEKCBADB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ANMGHDIKANH EIFONLCJOPG)
	{
		return ((::ANMGHDIKANH(*)(::FlatBuffers::ByteBuffer*, ::ANMGHDIKANH))((::PBYTE)hIl2Cpp + ANMGHDIKANH_IPNOEKCBADB_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::ANMGHDIKANH IPNOEKCBADB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ANMGHDIKANH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ANMGHDIKANH_IPNOEKCBADB_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
