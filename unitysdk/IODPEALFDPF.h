#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IODPEALFDPF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x812710)
#define IODPEALFDPF_DGEIDKMCGGA_1_OFFSET UNITYSDK_OFFSET(0x1B7D3610)
#define IODPEALFDPF_DGEIDKMCGGA_OFFSET UNITYSDK_OFFSET(0x1B7D35B0)
#define IODPEALFDPF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IODPEALFDPF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IODPEALFDPF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x812750)
#define IODPEALFDPF___INIT_OFFSET UNITYSDK_OFFSET(0x8126F0)

inline static constexpr unsigned int IODPEALFDPF_TypeDefinitionIndex = 11974;

struct alignas(8) IODPEALFDPF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IODPEALFDPF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IODPEALFDPF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::IODPEALFDPF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IODPEALFDPF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IODPEALFDPF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IODPEALFDPF_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IODPEALFDPF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::IODPEALFDPF DGEIDKMCGGA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IODPEALFDPF EIFONLCJOPG)
	{
		return ((::IODPEALFDPF(*)(::FlatBuffers::ByteBuffer*, ::IODPEALFDPF))((::PBYTE)hIl2Cpp + IODPEALFDPF_DGEIDKMCGGA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::IODPEALFDPF DGEIDKMCGGA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IODPEALFDPF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IODPEALFDPF_DGEIDKMCGGA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
