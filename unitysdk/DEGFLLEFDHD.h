#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DEGFLLEFDHD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DEGFLLEFDHD_FJMAKIEACFO_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define DEGFLLEFDHD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DEGFLLEFDHD_MBOGEBEHKLN_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DEGFLLEFDHD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x16617590)
#define DEGFLLEFDHD_OENEGODNAAE_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DEGFLLEFDHD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DEGFLLEFDHD_TypeDefinitionIndex = 14213;

struct alignas(4) DEGFLLEFDHD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGFLLEFDHD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEGFLLEFDHD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* FJMAKIEACFO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGFLLEFDHD_FJMAKIEACFO_OFFSET))(this);
	}

	::System::Int32 OENEGODNAAE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGFLLEFDHD_OENEGODNAAE_OFFSET))(this);
	}

	::System::Int32 MBOGEBEHKLN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGFLLEFDHD_MBOGEBEHKLN_OFFSET))(this);
	}

	/*
	static ::DEGFLLEFDHD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DEGFLLEFDHD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DEGFLLEFDHD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::DEGFLLEFDHD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DEGFLLEFDHD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEGFLLEFDHD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
