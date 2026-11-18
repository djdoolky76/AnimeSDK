#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OBPPCHBAHFO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81E580)
#define OBPPCHBAHFO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OBPPCHBAHFO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OBPPCHBAHFO_JIAPAEBHPGG_1_OFFSET UNITYSDK_OFFSET(0x1BF76DD0)
#define OBPPCHBAHFO_JIAPAEBHPGG_OFFSET UNITYSDK_OFFSET(0x1BF76D30)
#define OBPPCHBAHFO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81E5C0)
#define OBPPCHBAHFO___INIT_OFFSET UNITYSDK_OFFSET(0x81E560)

inline static constexpr unsigned int OBPPCHBAHFO_TypeDefinitionIndex = 10136;

struct alignas(8) OBPPCHBAHFO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPPCHBAHFO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBPPCHBAHFO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPPCHBAHFO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::OBPPCHBAHFO JIAPAEBHPGG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OBPPCHBAHFO EIFONLCJOPG)
	{
		return ((::OBPPCHBAHFO(*)(::FlatBuffers::ByteBuffer*, ::OBPPCHBAHFO))((::PBYTE)hIl2Cpp + OBPPCHBAHFO_JIAPAEBHPGG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::OBPPCHBAHFO JIAPAEBHPGG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OBPPCHBAHFO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBPPCHBAHFO_JIAPAEBHPGG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::OBPPCHBAHFO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OBPPCHBAHFO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBPPCHBAHFO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPPCHBAHFO_PPOMNIFACOL_OFFSET))(this);
	}
};
