#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MINHKOEANBP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MINHKOEANBP_APMGLCCPLBJ_OFFSET UNITYSDK_OFFSET(0x755D20)
#define MINHKOEANBP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MINHKOEANBP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MINHKOEANBP_IGLFKIBEGGH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define MINHKOEANBP_IMPLDHCOHEB_OFFSET UNITYSDK_OFFSET(0x756B10)
#define MINHKOEANBP_JIEBDFEFHAI_OFFSET UNITYSDK_OFFSET(0x756B90)
#define MINHKOEANBP_MCIDAPGNFNA_OFFSET UNITYSDK_OFFSET(0x755C70)
#define MINHKOEANBP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19DB3E90)
#define MINHKOEANBP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MINHKOEANBP_TypeDefinitionIndex = 11281;

struct alignas(4) MINHKOEANBP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINHKOEANBP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MINHKOEANBP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MINHKOEANBP_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 APMGLCCPLBJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MINHKOEANBP_APMGLCCPLBJ_OFFSET))(this);
	}

	/*
	static ::MINHKOEANBP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MINHKOEANBP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MINHKOEANBP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* IMPLDHCOHEB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINHKOEANBP_IMPLDHCOHEB_OFFSET))(this);
	}

	::System::Int32 MCIDAPGNFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MINHKOEANBP_MCIDAPGNFNA_OFFSET))(this);
	}

	::System::String* IGLFKIBEGGH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINHKOEANBP_IGLFKIBEGGH_OFFSET))(this);
	}

	/*
	::MINHKOEANBP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MINHKOEANBP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MINHKOEANBP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 JIEBDFEFHAI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MINHKOEANBP_JIEBDFEFHAI_OFFSET))(this);
	}
};
