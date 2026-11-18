#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BPBLIDEPAEP.h"
#include "unitysdk/System/Nullable_1.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ACHEHLKHJKP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E1BA0)
#define ACHEHLKHJKP_BHIOPEMGEAD_1_OFFSET UNITYSDK_OFFSET(0x194E4DD0)
#define ACHEHLKHJKP_BHIOPEMGEAD_OFFSET UNITYSDK_OFFSET(0x194E4D30)
#define ACHEHLKHJKP_EFBECEHHGOO_OFFSET UNITYSDK_OFFSET(0x760C50)
#define ACHEHLKHJKP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ACHEHLKHJKP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ACHEHLKHJKP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E1B90)
#define ACHEHLKHJKP___INIT_OFFSET UNITYSDK_OFFSET(0x7E1B70)

inline static constexpr unsigned int ACHEHLKHJKP_TypeDefinitionIndex = 11309;

struct alignas(8) ACHEHLKHJKP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHEHLKHJKP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ACHEHLKHJKP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHEHLKHJKP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::ACHEHLKHJKP BHIOPEMGEAD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ACHEHLKHJKP EIFONLCJOPG)
	{
		return ((::ACHEHLKHJKP(*)(::FlatBuffers::ByteBuffer*, ::ACHEHLKHJKP))((::PBYTE)hIl2Cpp + ACHEHLKHJKP_BHIOPEMGEAD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::ACHEHLKHJKP BHIOPEMGEAD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ACHEHLKHJKP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ACHEHLKHJKP_BHIOPEMGEAD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHEHLKHJKP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::ACHEHLKHJKP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ACHEHLKHJKP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ACHEHLKHJKP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Nullable_1<::BPBLIDEPAEP> EFBECEHHGOO(::System::Int32 HPMEONKHFGG)
	{
		return ((::System::Nullable_1<::BPBLIDEPAEP>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ACHEHLKHJKP_EFBECEHHGOO_OFFSET))(this, HPMEONKHFGG);
	}
};
