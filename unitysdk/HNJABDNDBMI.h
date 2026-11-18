#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HNJABDNDBMI_ACDOMAEJONK_OFFSET UNITYSDK_OFFSET(0x755D20)
#define HNJABDNDBMI_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HNJABDNDBMI_ADBBCNFGHPJ_OFFSET UNITYSDK_OFFSET(0x755A00)
#define HNJABDNDBMI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HNJABDNDBMI_DCGJGALIIHB_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define HNJABDNDBMI_FOMHDKOHKCO_OFFSET UNITYSDK_OFFSET(0x756B10)
#define HNJABDNDBMI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HNJABDNDBMI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17479240)
#define HNJABDNDBMI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HNJABDNDBMI_TypeDefinitionIndex = 15126;

struct alignas(4) HNJABDNDBMI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJABDNDBMI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNJABDNDBMI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HNJABDNDBMI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HNJABDNDBMI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HNJABDNDBMI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* ADBBCNFGHPJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJABDNDBMI_ADBBCNFGHPJ_OFFSET))(this);
	}

	::System::String* FOMHDKOHKCO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJABDNDBMI_FOMHDKOHKCO_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJABDNDBMI_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::HNJABDNDBMI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HNJABDNDBMI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNJABDNDBMI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACDOMAEJONK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJABDNDBMI_ACDOMAEJONK_OFFSET))(this);
	}

	::System::String* DCGJGALIIHB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJABDNDBMI_DCGJGALIIHB_OFFSET))(this);
	}
};
