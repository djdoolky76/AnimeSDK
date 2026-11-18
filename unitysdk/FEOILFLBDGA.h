#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FEOILFLBDGA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FEOILFLBDGA_GDAGLOCKJPJ_OFFSET UNITYSDK_OFFSET(0x754F10)
#define FEOILFLBDGA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FEOILFLBDGA_IBEJDBBHFME_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FEOILFLBDGA_JHJIGNIHMGG_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define FEOILFLBDGA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5A3060)
#define FEOILFLBDGA_PEMKIGPHAIL_OFFSET UNITYSDK_OFFSET(0x755A00)
#define FEOILFLBDGA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FEOILFLBDGA_TypeDefinitionIndex = 10458;

struct alignas(4) FEOILFLBDGA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEOILFLBDGA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FEOILFLBDGA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::FEOILFLBDGA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FEOILFLBDGA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FEOILFLBDGA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* GDAGLOCKJPJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEOILFLBDGA_GDAGLOCKJPJ_OFFSET))(this);
	}

	/*
	static ::FEOILFLBDGA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FEOILFLBDGA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FEOILFLBDGA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* JHJIGNIHMGG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEOILFLBDGA_JHJIGNIHMGG_OFFSET))(this);
	}

	::System::Int32 IBEJDBBHFME()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEOILFLBDGA_IBEJDBBHFME_OFFSET))(this);
	}

	::System::String* PEMKIGPHAIL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEOILFLBDGA_PEMKIGPHAIL_OFFSET))(this);
	}
};
