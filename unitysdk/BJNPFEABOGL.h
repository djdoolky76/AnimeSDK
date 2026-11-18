#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define BJNPFEABOGL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BJNPFEABOGL_CGJKEACKBMD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BJNPFEABOGL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BJNPFEABOGL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x194FB600)
#define BJNPFEABOGL_PEJMELDJKBH_OFFSET UNITYSDK_OFFSET(0x755190)
#define BJNPFEABOGL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BJNPFEABOGL_TypeDefinitionIndex = 14821;

struct alignas(4) BJNPFEABOGL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNPFEABOGL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BJNPFEABOGL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 CGJKEACKBMD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNPFEABOGL_CGJKEACKBMD_OFFSET))(this);
	}

	::System::Int32 PEJMELDJKBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNPFEABOGL_PEJMELDJKBH_OFFSET))(this);
	}

	/*
	::BJNPFEABOGL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BJNPFEABOGL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BJNPFEABOGL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BJNPFEABOGL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BJNPFEABOGL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BJNPFEABOGL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
