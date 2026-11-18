#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MOIKGHEODAI_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MOIKGHEODAI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MOIKGHEODAI_COIGDJLABGG_OFFSET UNITYSDK_OFFSET(0x755E40)
#define MOIKGHEODAI_EKGKBJBDGKO_OFFSET UNITYSDK_OFFSET(0x754970)
#define MOIKGHEODAI_ELDLAKANOPP_OFFSET UNITYSDK_OFFSET(0x756B90)
#define MOIKGHEODAI_ELPFAFFJNKI_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define MOIKGHEODAI_EONENBHIJPF_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define MOIKGHEODAI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MOIKGHEODAI_ICNBPPMEIKB_OFFSET UNITYSDK_OFFSET(0x755190)
#define MOIKGHEODAI_KPJEGHELJKB_OFFSET UNITYSDK_OFFSET(0x754920)
#define MOIKGHEODAI_MFJDNAGKFMN_OFFSET UNITYSDK_OFFSET(0x758780)
#define MOIKGHEODAI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MOIKGHEODAI_TypeDefinitionIndex = 11492;

struct alignas(4) MOIKGHEODAI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIKGHEODAI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MOIKGHEODAI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 EONENBHIJPF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIKGHEODAI_EONENBHIJPF_OFFSET))(this);
	}

	::System::Int32 EKGKBJBDGKO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIKGHEODAI_EKGKBJBDGKO_OFFSET))(this);
	}

	::System::Int32 ELDLAKANOPP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIKGHEODAI_ELDLAKANOPP_OFFSET))(this);
	}

	::System::Int32 ICNBPPMEIKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIKGHEODAI_ICNBPPMEIKB_OFFSET))(this);
	}

	/*
	::MOIKGHEODAI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MOIKGHEODAI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MOIKGHEODAI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 MFJDNAGKFMN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIKGHEODAI_MFJDNAGKFMN_OFFSET))(this);
	}

	::System::String* ELPFAFFJNKI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIKGHEODAI_ELPFAFFJNKI_OFFSET))(this);
	}

	::System::Int32 COIGDJLABGG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIKGHEODAI_COIGDJLABGG_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIKGHEODAI_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 KPJEGHELJKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIKGHEODAI_KPJEGHELJKB_OFFSET))(this);
	}
};
