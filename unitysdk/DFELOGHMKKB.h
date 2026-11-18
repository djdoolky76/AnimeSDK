#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DFELOGHMKKB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DFELOGHMKKB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DFELOGHMKKB_FBMIEJIGIED_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define DFELOGHMKKB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DFELOGHMKKB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17A96DF0)
#define DFELOGHMKKB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DFELOGHMKKB_TypeDefinitionIndex = 10589;

struct alignas(4) DFELOGHMKKB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFELOGHMKKB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFELOGHMKKB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFELOGHMKKB_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::DFELOGHMKKB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DFELOGHMKKB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DFELOGHMKKB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* FBMIEJIGIED()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFELOGHMKKB_FBMIEJIGIED_OFFSET))(this);
	}

	/*
	::DFELOGHMKKB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DFELOGHMKKB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFELOGHMKKB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
