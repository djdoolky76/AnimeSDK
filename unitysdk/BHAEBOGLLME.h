#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BHAEBOGLLME_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BHAEBOGLLME_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BHAEBOGLLME_CFAPOAADGGI_OFFSET UNITYSDK_OFFSET(0x755A00)
#define BHAEBOGLLME_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BHAEBOGLLME_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1ADB4860)
#define BHAEBOGLLME___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BHAEBOGLLME_TypeDefinitionIndex = 14461;

struct alignas(4) BHAEBOGLLME
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHAEBOGLLME_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BHAEBOGLLME___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* CFAPOAADGGI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHAEBOGLLME_CFAPOAADGGI_OFFSET))(this);
	}

	/*
	::BHAEBOGLLME BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BHAEBOGLLME(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BHAEBOGLLME_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BHAEBOGLLME OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BHAEBOGLLME(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BHAEBOGLLME_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHAEBOGLLME_ACOEONABOJL_OFFSET))(this);
	}
};
