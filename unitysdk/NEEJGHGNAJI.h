#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NEEJGHGNAJI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D7EA0)
#define NEEJGHGNAJI_ELOPCEDDLEI_1_OFFSET UNITYSDK_OFFSET(0x18E1BFB0)
#define NEEJGHGNAJI_ELOPCEDDLEI_OFFSET UNITYSDK_OFFSET(0x18E1BEB0)
#define NEEJGHGNAJI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NEEJGHGNAJI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NEEJGHGNAJI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D7E90)
#define NEEJGHGNAJI___INIT_OFFSET UNITYSDK_OFFSET(0x7D7E70)

inline static constexpr unsigned int NEEJGHGNAJI_TypeDefinitionIndex = 15739;

struct alignas(8) NEEJGHGNAJI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEJGHGNAJI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NEEJGHGNAJI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NEEJGHGNAJI ELOPCEDDLEI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NEEJGHGNAJI EIFONLCJOPG)
	{
		return ((::NEEJGHGNAJI(*)(::FlatBuffers::ByteBuffer*, ::NEEJGHGNAJI))((::PBYTE)hIl2Cpp + NEEJGHGNAJI_ELOPCEDDLEI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEJGHGNAJI_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEJGHGNAJI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::NEEJGHGNAJI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NEEJGHGNAJI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NEEJGHGNAJI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NEEJGHGNAJI ELOPCEDDLEI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NEEJGHGNAJI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NEEJGHGNAJI_ELOPCEDDLEI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
