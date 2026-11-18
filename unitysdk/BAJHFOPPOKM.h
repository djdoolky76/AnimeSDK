#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BAJHFOPPOKM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BAJHFOPPOKM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BAJHFOPPOKM_DCGJGALIIHB_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define BAJHFOPPOKM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BAJHFOPPOKM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C510140)
#define BAJHFOPPOKM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BAJHFOPPOKM_TypeDefinitionIndex = 15029;

struct alignas(4) BAJHFOPPOKM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJHFOPPOKM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BAJHFOPPOKM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::BAJHFOPPOKM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BAJHFOPPOKM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BAJHFOPPOKM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJHFOPPOKM_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::BAJHFOPPOKM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BAJHFOPPOKM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BAJHFOPPOKM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* DCGJGALIIHB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJHFOPPOKM_DCGJGALIIHB_OFFSET))(this);
	}
};
