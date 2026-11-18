#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BPNCDOCAGKH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E2460)
#define BPNCDOCAGKH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BPNCDOCAGKH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BPNCDOCAGKH_GOLBNJAFFLE_1_OFFSET UNITYSDK_OFFSET(0x194FE7F0)
#define BPNCDOCAGKH_GOLBNJAFFLE_OFFSET UNITYSDK_OFFSET(0x194FE730)
#define BPNCDOCAGKH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E24A0)
#define BPNCDOCAGKH___INIT_OFFSET UNITYSDK_OFFSET(0x7E2440)

inline static constexpr unsigned int BPNCDOCAGKH_TypeDefinitionIndex = 12343;

struct alignas(8) BPNCDOCAGKH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNCDOCAGKH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BPNCDOCAGKH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::BPNCDOCAGKH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BPNCDOCAGKH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BPNCDOCAGKH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BPNCDOCAGKH GOLBNJAFFLE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BPNCDOCAGKH EIFONLCJOPG)
	{
		return ((::BPNCDOCAGKH(*)(::FlatBuffers::ByteBuffer*, ::BPNCDOCAGKH))((::PBYTE)hIl2Cpp + BPNCDOCAGKH_GOLBNJAFFLE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNCDOCAGKH_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNCDOCAGKH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::BPNCDOCAGKH GOLBNJAFFLE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BPNCDOCAGKH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BPNCDOCAGKH_GOLBNJAFFLE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
