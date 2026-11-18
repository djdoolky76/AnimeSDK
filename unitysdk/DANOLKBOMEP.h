#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DANOLKBOMEP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DANOLKBOMEP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DANOLKBOMEP_JPJOLFBIKNL_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define DANOLKBOMEP_KDGGGNKFLOE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DANOLKBOMEP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B9A07C0)
#define DANOLKBOMEP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DANOLKBOMEP_TypeDefinitionIndex = 13037;

struct alignas(4) DANOLKBOMEP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DANOLKBOMEP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DANOLKBOMEP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DANOLKBOMEP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DANOLKBOMEP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DANOLKBOMEP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 KDGGGNKFLOE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DANOLKBOMEP_KDGGGNKFLOE_OFFSET))(this);
	}

	/*
	::DANOLKBOMEP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DANOLKBOMEP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DANOLKBOMEP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* JPJOLFBIKNL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DANOLKBOMEP_JPJOLFBIKNL_OFFSET))(this);
	}
};
