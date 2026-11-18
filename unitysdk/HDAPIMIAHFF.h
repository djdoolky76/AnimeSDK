#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HDAPIMIAHFF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HDAPIMIAHFF_DECINHCJBGF_OFFSET UNITYSDK_OFFSET(0x754F10)
#define HDAPIMIAHFF_FPCKKPDCOHD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HDAPIMIAHFF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HDAPIMIAHFF_MNIPADHHFDP_OFFSET UNITYSDK_OFFSET(0x755A00)
#define HDAPIMIAHFF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17BF8170)
#define HDAPIMIAHFF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HDAPIMIAHFF_TypeDefinitionIndex = 15965;

struct alignas(4) HDAPIMIAHFF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDAPIMIAHFF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HDAPIMIAHFF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* DECINHCJBGF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDAPIMIAHFF_DECINHCJBGF_OFFSET))(this);
	}

	::System::String* MNIPADHHFDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDAPIMIAHFF_MNIPADHHFDP_OFFSET))(this);
	}

	/*
	::HDAPIMIAHFF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HDAPIMIAHFF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HDAPIMIAHFF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HDAPIMIAHFF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HDAPIMIAHFF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HDAPIMIAHFF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 FPCKKPDCOHD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDAPIMIAHFF_FPCKKPDCOHD_OFFSET))(this);
	}
};
