#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HJFKFJGDDLP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B5680)
#define HJFKFJGDDLP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HJFKFJGDDLP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HJFKFJGDDLP_NEBKIMNKLDG_1_OFFSET UNITYSDK_OFFSET(0x17C03540)
#define HJFKFJGDDLP_NEBKIMNKLDG_OFFSET UNITYSDK_OFFSET(0x17C034A0)
#define HJFKFJGDDLP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B56C0)
#define HJFKFJGDDLP___INIT_OFFSET UNITYSDK_OFFSET(0x7B5660)

inline static constexpr unsigned int HJFKFJGDDLP_TypeDefinitionIndex = 10875;

struct alignas(8) HJFKFJGDDLP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFKFJGDDLP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HJFKFJGDDLP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HJFKFJGDDLP NEBKIMNKLDG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HJFKFJGDDLP EIFONLCJOPG)
	{
		return ((::HJFKFJGDDLP(*)(::FlatBuffers::ByteBuffer*, ::HJFKFJGDDLP))((::PBYTE)hIl2Cpp + HJFKFJGDDLP_NEBKIMNKLDG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::HJFKFJGDDLP NEBKIMNKLDG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HJFKFJGDDLP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HJFKFJGDDLP_NEBKIMNKLDG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::HJFKFJGDDLP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HJFKFJGDDLP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HJFKFJGDDLP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFKFJGDDLP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFKFJGDDLP_GHKKNCCLPAN_OFFSET))(this);
	}
};
