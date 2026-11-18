#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define BEJBBPHHGNO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BEJBBPHHGNO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BEJBBPHHGNO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BEJBBPHHGNO_MHHCGJCCLEO_OFFSET UNITYSDK_OFFSET(0x755D20)
#define BEJBBPHHGNO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17758CA0)
#define BEJBBPHHGNO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BEJBBPHHGNO_TypeDefinitionIndex = 12264;

struct alignas(4) BEJBBPHHGNO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEJBBPHHGNO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BEJBBPHHGNO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BEJBBPHHGNO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BEJBBPHHGNO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BEJBBPHHGNO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEJBBPHHGNO_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 MHHCGJCCLEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEJBBPHHGNO_MHHCGJCCLEO_OFFSET))(this);
	}

	/*
	::BEJBBPHHGNO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BEJBBPHHGNO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BEJBBPHHGNO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
