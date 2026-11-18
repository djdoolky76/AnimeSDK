#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GLGGGNPMKCD_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GLGGGNPMKCD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GLGGGNPMKCD_ENPEFGPPHII_OFFSET UNITYSDK_OFFSET(0x756B10)
#define GLGGGNPMKCD_FEMLPHIGLAP_OFFSET UNITYSDK_OFFSET(0x754B50)
#define GLGGGNPMKCD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GLGGGNPMKCD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B7BC250)
#define GLGGGNPMKCD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GLGGGNPMKCD_TypeDefinitionIndex = 10923;

struct alignas(4) GLGGGNPMKCD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLGGGNPMKCD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLGGGNPMKCD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::GLGGGNPMKCD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GLGGGNPMKCD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLGGGNPMKCD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GLGGGNPMKCD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GLGGGNPMKCD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GLGGGNPMKCD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* ENPEFGPPHII()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLGGGNPMKCD_ENPEFGPPHII_OFFSET))(this);
	}

	::System::Int32 FEMLPHIGLAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLGGGNPMKCD_FEMLPHIGLAP_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLGGGNPMKCD_ACOEONABOJL_OFFSET))(this);
	}
};
