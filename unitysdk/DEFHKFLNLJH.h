#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define DEFHKFLNLJH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DEFHKFLNLJH_DGNJNMJNIEJ_1_OFFSET UNITYSDK_OFFSET(0x1A5504A0)
#define DEFHKFLNLJH_DGNJNMJNIEJ_OFFSET UNITYSDK_OFFSET(0x1A550410)
#define DEFHKFLNLJH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DEFHKFLNLJH_OPONJBIJOMB_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DEFHKFLNLJH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DEFHKFLNLJH_TypeDefinitionIndex = 10830;

struct alignas(4) DEFHKFLNLJH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFHKFLNLJH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEFHKFLNLJH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DEFHKFLNLJH DGNJNMJNIEJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DEFHKFLNLJH EIFONLCJOPG)
	{
		return ((::DEFHKFLNLJH(*)(::FlatBuffers::ByteBuffer*, ::DEFHKFLNLJH))((::PBYTE)hIl2Cpp + DEFHKFLNLJH_DGNJNMJNIEJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::DEFHKFLNLJH DGNJNMJNIEJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DEFHKFLNLJH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEFHKFLNLJH_DGNJNMJNIEJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::DEFHKFLNLJH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DEFHKFLNLJH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEFHKFLNLJH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 OPONJBIJOMB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFHKFLNLJH_OPONJBIJOMB_OFFSET))(this);
	}
};
