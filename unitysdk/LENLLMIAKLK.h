#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LENLLMIAKLK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LENLLMIAKLK_CDOIOLFPMJG_OFFSET UNITYSDK_OFFSET(0x754F10)
#define LENLLMIAKLK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LENLLMIAKLK_GOPPNOEDNMN_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LENLLMIAKLK_NDOFJFMJJAB_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define LENLLMIAKLK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18DF92D0)
#define LENLLMIAKLK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LENLLMIAKLK_TypeDefinitionIndex = 12338;

struct alignas(4) LENLLMIAKLK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LENLLMIAKLK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LENLLMIAKLK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::LENLLMIAKLK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LENLLMIAKLK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LENLLMIAKLK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* CDOIOLFPMJG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LENLLMIAKLK_CDOIOLFPMJG_OFFSET))(this);
	}

	/*
	static ::LENLLMIAKLK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LENLLMIAKLK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LENLLMIAKLK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* NDOFJFMJJAB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LENLLMIAKLK_NDOFJFMJJAB_OFFSET))(this);
	}

	::System::Int32 GOPPNOEDNMN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LENLLMIAKLK_GOPPNOEDNMN_OFFSET))(this);
	}
};
