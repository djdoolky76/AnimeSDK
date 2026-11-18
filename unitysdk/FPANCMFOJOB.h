#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FPANCMFOJOB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x76E030)
#define FPANCMFOJOB_DHDFKBKALED_1_OFFSET UNITYSDK_OFFSET(0x15A7C350)
#define FPANCMFOJOB_DHDFKBKALED_OFFSET UNITYSDK_OFFSET(0x15A7C2E0)
#define FPANCMFOJOB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FPANCMFOJOB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FPANCMFOJOB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x76E020)
#define FPANCMFOJOB___INIT_OFFSET UNITYSDK_OFFSET(0x76E000)

inline static constexpr unsigned int FPANCMFOJOB_TypeDefinitionIndex = 14685;

struct alignas(8) FPANCMFOJOB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPANCMFOJOB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FPANCMFOJOB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FPANCMFOJOB DHDFKBKALED(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FPANCMFOJOB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FPANCMFOJOB_DHDFKBKALED_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::FPANCMFOJOB DHDFKBKALED_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FPANCMFOJOB EIFONLCJOPG)
	{
		return ((::FPANCMFOJOB(*)(::FlatBuffers::ByteBuffer*, ::FPANCMFOJOB))((::PBYTE)hIl2Cpp + FPANCMFOJOB_DHDFKBKALED_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPANCMFOJOB_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPANCMFOJOB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::FPANCMFOJOB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FPANCMFOJOB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FPANCMFOJOB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
