#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NBAEBPKHOGC_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754920)
#define NBAEBPKHOGC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NBAEBPKHOGC_DBECKLDNNIO_OFFSET UNITYSDK_OFFSET(0x754F10)
#define NBAEBPKHOGC_EDFMGIAPJPK_OFFSET UNITYSDK_OFFSET(0x76F6C0)
#define NBAEBPKHOGC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NBAEBPKHOGC_LKDDOJPKDJL_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define NBAEBPKHOGC_MLBLHAFPBHE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NBAEBPKHOGC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1D0BF910)
#define NBAEBPKHOGC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NBAEBPKHOGC_TypeDefinitionIndex = 14726;

struct alignas(4) NBAEBPKHOGC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBAEBPKHOGC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NBAEBPKHOGC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 MLBLHAFPBHE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBAEBPKHOGC_MLBLHAFPBHE_OFFSET))(this);
	}

	/*
	static ::NBAEBPKHOGC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NBAEBPKHOGC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NBAEBPKHOGC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean EDFMGIAPJPK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBAEBPKHOGC_EDFMGIAPJPK_OFFSET))(this);
	}

	::System::String* DBECKLDNNIO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBAEBPKHOGC_DBECKLDNNIO_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBAEBPKHOGC_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::NBAEBPKHOGC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NBAEBPKHOGC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NBAEBPKHOGC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* LKDDOJPKDJL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBAEBPKHOGC_LKDDOJPKDJL_OFFSET))(this);
	}
};
