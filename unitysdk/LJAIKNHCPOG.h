#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LJAIKNHCPOG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C3840)
#define LJAIKNHCPOG_CNOIPKIOPIL_1_OFFSET UNITYSDK_OFFSET(0x17FB36C0)
#define LJAIKNHCPOG_CNOIPKIOPIL_OFFSET UNITYSDK_OFFSET(0x17FB35C0)
#define LJAIKNHCPOG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LJAIKNHCPOG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LJAIKNHCPOG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C3880)
#define LJAIKNHCPOG___INIT_OFFSET UNITYSDK_OFFSET(0x7C3820)

inline static constexpr unsigned int LJAIKNHCPOG_TypeDefinitionIndex = 12535;

struct alignas(8) LJAIKNHCPOG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJAIKNHCPOG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LJAIKNHCPOG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LJAIKNHCPOG CNOIPKIOPIL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LJAIKNHCPOG EIFONLCJOPG)
	{
		return ((::LJAIKNHCPOG(*)(::FlatBuffers::ByteBuffer*, ::LJAIKNHCPOG))((::PBYTE)hIl2Cpp + LJAIKNHCPOG_CNOIPKIOPIL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::LJAIKNHCPOG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LJAIKNHCPOG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LJAIKNHCPOG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJAIKNHCPOG_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJAIKNHCPOG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::LJAIKNHCPOG CNOIPKIOPIL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LJAIKNHCPOG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LJAIKNHCPOG_CNOIPKIOPIL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
