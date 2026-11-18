#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NFJFDAJDKLJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NFJFDAJDKLJ_DGFAJDNHCIJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NFJFDAJDKLJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NFJFDAJDKLJ_HEOODANFCGK_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define NFJFDAJDKLJ_KFKLLHBKNJI_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define NFJFDAJDKLJ_NDIJEFLOAGI_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define NFJFDAJDKLJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19119920)
#define NFJFDAJDKLJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NFJFDAJDKLJ_TypeDefinitionIndex = 15099;

struct alignas(4) NFJFDAJDKLJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJFDAJDKLJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NFJFDAJDKLJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HEOODANFCGK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJFDAJDKLJ_HEOODANFCGK_OFFSET))(this);
	}

	::System::Boolean KFKLLHBKNJI(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NFJFDAJDKLJ_KFKLLHBKNJI_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 DGFAJDNHCIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJFDAJDKLJ_DGFAJDNHCIJ_OFFSET))(this);
	}

	::System::String* NDIJEFLOAGI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJFDAJDKLJ_NDIJEFLOAGI_OFFSET))(this);
	}

	/*
	static ::NFJFDAJDKLJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NFJFDAJDKLJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NFJFDAJDKLJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::NFJFDAJDKLJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NFJFDAJDKLJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NFJFDAJDKLJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
