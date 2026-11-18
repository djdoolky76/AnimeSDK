#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FDINIHPBNNB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FDINIHPBNNB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FDINIHPBNNB_EEAGLNCOCKG_OFFSET UNITYSDK_OFFSET(0x756B90)
#define FDINIHPBNNB_EGDJKCNICGC_OFFSET UNITYSDK_OFFSET(0x754F10)
#define FDINIHPBNNB_FEGKDNNEKLJ_OFFSET UNITYSDK_OFFSET(0x756B10)
#define FDINIHPBNNB_FEPIMDFIEKK_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define FDINIHPBNNB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FDINIHPBNNB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5A1980)
#define FDINIHPBNNB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FDINIHPBNNB_TypeDefinitionIndex = 10267;

struct alignas(4) FDINIHPBNNB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDINIHPBNNB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FDINIHPBNNB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* FEPIMDFIEKK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDINIHPBNNB_FEPIMDFIEKK_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDINIHPBNNB_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* FEGKDNNEKLJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDINIHPBNNB_FEGKDNNEKLJ_OFFSET))(this);
	}

	/*
	::FDINIHPBNNB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FDINIHPBNNB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FDINIHPBNNB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* EGDJKCNICGC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDINIHPBNNB_EGDJKCNICGC_OFFSET))(this);
	}

	::System::Int32 EEAGLNCOCKG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDINIHPBNNB_EEAGLNCOCKG_OFFSET))(this);
	}

	/*
	static ::FDINIHPBNNB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FDINIHPBNNB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FDINIHPBNNB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
