#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define LNIDDAILHLJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LNIDDAILHLJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LNIDDAILHLJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LNIDDAILHLJ_HADEHKDOBJJ_OFFSET UNITYSDK_OFFSET(0x754B50)
#define LNIDDAILHLJ_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define LNIDDAILHLJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B6559C0)
#define LNIDDAILHLJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LNIDDAILHLJ_TypeDefinitionIndex = 9749;

struct alignas(4) LNIDDAILHLJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNIDDAILHLJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LNIDDAILHLJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HADEHKDOBJJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNIDDAILHLJ_HADEHKDOBJJ_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNIDDAILHLJ_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::LNIDDAILHLJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LNIDDAILHLJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LNIDDAILHLJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNIDDAILHLJ_LPFMNKEFPMM_OFFSET))(this);
	}

	/*
	::LNIDDAILHLJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LNIDDAILHLJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LNIDDAILHLJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
