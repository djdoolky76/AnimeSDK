#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define JGKLGMDIBMI_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JGKLGMDIBMI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JGKLGMDIBMI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JGKLGMDIBMI_HFJMGDPJNBF_OFFSET UNITYSDK_OFFSET(0x755D20)
#define JGKLGMDIBMI_HNOHGEAGEBO_OFFSET UNITYSDK_OFFSET(0x754B50)
#define JGKLGMDIBMI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JGKLGMDIBMI_TypeDefinitionIndex = 12861;

struct alignas(4) JGKLGMDIBMI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKLGMDIBMI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JGKLGMDIBMI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKLGMDIBMI_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 HNOHGEAGEBO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKLGMDIBMI_HNOHGEAGEBO_OFFSET))(this);
	}

	::System::Int32 HFJMGDPJNBF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKLGMDIBMI_HFJMGDPJNBF_OFFSET))(this);
	}

	/*
	::JGKLGMDIBMI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JGKLGMDIBMI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JGKLGMDIBMI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
