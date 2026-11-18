#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BJLCLJNDDLF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BJLCLJNDDLF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BJLCLJNDDLF_FJNDPALNMOG_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define BJLCLJNDDLF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BJLCLJNDDLF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1877BF20)
#define BJLCLJNDDLF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BJLCLJNDDLF_TypeDefinitionIndex = 17497;

struct alignas(4) BJLCLJNDDLF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJLCLJNDDLF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BJLCLJNDDLF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BJLCLJNDDLF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BJLCLJNDDLF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BJLCLJNDDLF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* FJNDPALNMOG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJLCLJNDDLF_FJNDPALNMOG_OFFSET))(this);
	}

	/*
	::BJLCLJNDDLF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BJLCLJNDDLF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BJLCLJNDDLF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJLCLJNDDLF_ACOEONABOJL_OFFSET))(this);
	}
};
