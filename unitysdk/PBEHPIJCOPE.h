#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PBEHPIJCOPE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PBEHPIJCOPE_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PBEHPIJCOPE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PBEHPIJCOPE_IKPOIFFILEP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define PBEHPIJCOPE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BF87E40)
#define PBEHPIJCOPE_ONJJNKNDOLE_OFFSET UNITYSDK_OFFSET(0x754F10)
#define PBEHPIJCOPE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PBEHPIJCOPE_TypeDefinitionIndex = 15558;

struct alignas(4) PBEHPIJCOPE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBEHPIJCOPE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PBEHPIJCOPE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* ONJJNKNDOLE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBEHPIJCOPE_ONJJNKNDOLE_OFFSET))(this);
	}

	::System::String* IKPOIFFILEP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBEHPIJCOPE_IKPOIFFILEP_OFFSET))(this);
	}

	/*
	static ::PBEHPIJCOPE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PBEHPIJCOPE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PBEHPIJCOPE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBEHPIJCOPE_DNKLBHKEDEM_OFFSET))(this);
	}

	/*
	::PBEHPIJCOPE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PBEHPIJCOPE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PBEHPIJCOPE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
