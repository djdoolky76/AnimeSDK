#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KFLOLNAFBJG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D6C60)
#define KFLOLNAFBJG_FPLLCPDMNGH_1_OFFSET UNITYSDK_OFFSET(0x18DE5FC0)
#define KFLOLNAFBJG_FPLLCPDMNGH_OFFSET UNITYSDK_OFFSET(0x18DE5F20)
#define KFLOLNAFBJG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KFLOLNAFBJG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KFLOLNAFBJG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D6C50)
#define KFLOLNAFBJG___INIT_OFFSET UNITYSDK_OFFSET(0x7D6C30)

inline static constexpr unsigned int KFLOLNAFBJG_TypeDefinitionIndex = 13791;

struct alignas(8) KFLOLNAFBJG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLOLNAFBJG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KFLOLNAFBJG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLOLNAFBJG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::KFLOLNAFBJG FPLLCPDMNGH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KFLOLNAFBJG EIFONLCJOPG)
	{
		return ((::KFLOLNAFBJG(*)(::FlatBuffers::ByteBuffer*, ::KFLOLNAFBJG))((::PBYTE)hIl2Cpp + KFLOLNAFBJG_FPLLCPDMNGH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::KFLOLNAFBJG FPLLCPDMNGH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KFLOLNAFBJG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KFLOLNAFBJG_FPLLCPDMNGH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::KFLOLNAFBJG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KFLOLNAFBJG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KFLOLNAFBJG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLOLNAFBJG_GHKKNCCLPAN_OFFSET))(this);
	}
};
