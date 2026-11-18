#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MHMNFODFOJL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C4250)
#define MHMNFODFOJL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MHMNFODFOJL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MHMNFODFOJL_LDPBBKBOAHC_1_OFFSET UNITYSDK_OFFSET(0x17FC6DC0)
#define MHMNFODFOJL_LDPBBKBOAHC_OFFSET UNITYSDK_OFFSET(0x17FC6D20)
#define MHMNFODFOJL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C4240)
#define MHMNFODFOJL___INIT_OFFSET UNITYSDK_OFFSET(0x7C4220)

inline static constexpr unsigned int MHMNFODFOJL_TypeDefinitionIndex = 15434;

struct alignas(8) MHMNFODFOJL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMNFODFOJL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MHMNFODFOJL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMNFODFOJL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MHMNFODFOJL LDPBBKBOAHC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MHMNFODFOJL EIFONLCJOPG)
	{
		return ((::MHMNFODFOJL(*)(::FlatBuffers::ByteBuffer*, ::MHMNFODFOJL))((::PBYTE)hIl2Cpp + MHMNFODFOJL_LDPBBKBOAHC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMNFODFOJL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::MHMNFODFOJL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MHMNFODFOJL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MHMNFODFOJL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MHMNFODFOJL LDPBBKBOAHC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MHMNFODFOJL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MHMNFODFOJL_LDPBBKBOAHC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
