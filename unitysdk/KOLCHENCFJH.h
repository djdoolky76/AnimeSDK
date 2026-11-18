#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KOLCHENCFJH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KOLCHENCFJH_DFIGJOKOPNC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KOLCHENCFJH_FLMBHFDFDGA_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define KOLCHENCFJH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KOLCHENCFJH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x16129B30)
#define KOLCHENCFJH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KOLCHENCFJH_TypeDefinitionIndex = 11255;

struct alignas(4) KOLCHENCFJH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOLCHENCFJH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KOLCHENCFJH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::KOLCHENCFJH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KOLCHENCFJH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KOLCHENCFJH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KOLCHENCFJH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KOLCHENCFJH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KOLCHENCFJH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* FLMBHFDFDGA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOLCHENCFJH_FLMBHFDFDGA_OFFSET))(this);
	}

	::System::Int32 DFIGJOKOPNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOLCHENCFJH_DFIGJOKOPNC_OFFSET))(this);
	}
};
