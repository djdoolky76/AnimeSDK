#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IAHOAFJLJPL_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IAHOAFJLJPL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IAHOAFJLJPL_EILAAOJDING_OFFSET UNITYSDK_OFFSET(0x761240)
#define IAHOAFJLJPL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IAHOAFJLJPL_LEJLAFPPHLJ_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define IAHOAFJLJPL_NKKAACLPBHM_OFFSET UNITYSDK_OFFSET(0x754F10)
#define IAHOAFJLJPL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B128030)
#define IAHOAFJLJPL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IAHOAFJLJPL_TypeDefinitionIndex = 11246;

struct alignas(4) IAHOAFJLJPL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAHOAFJLJPL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IAHOAFJLJPL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::IAHOAFJLJPL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IAHOAFJLJPL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IAHOAFJLJPL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IAHOAFJLJPL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IAHOAFJLJPL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IAHOAFJLJPL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean LEJLAFPPHLJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + IAHOAFJLJPL_LEJLAFPPHLJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 EILAAOJDING()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAHOAFJLJPL_EILAAOJDING_OFFSET))(this);
	}

	::System::String* NKKAACLPBHM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAHOAFJLJPL_NKKAACLPBHM_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAHOAFJLJPL_ACOEONABOJL_OFFSET))(this);
	}
};
