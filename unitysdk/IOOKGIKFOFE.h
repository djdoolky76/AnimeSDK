#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IOOKGIKFOFE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IOOKGIKFOFE_EABPPOIEGBF_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define IOOKGIKFOFE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IOOKGIKFOFE_HIKCEMKAGJO_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IOOKGIKFOFE_HOKEGMMCGEL_OFFSET UNITYSDK_OFFSET(0x756B90)
#define IOOKGIKFOFE_NAEBKLJMCNA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define IOOKGIKFOFE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x193552A0)
#define IOOKGIKFOFE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IOOKGIKFOFE_TypeDefinitionIndex = 9521;

struct alignas(4) IOOKGIKFOFE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOOKGIKFOFE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOOKGIKFOFE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* EABPPOIEGBF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOOKGIKFOFE_EABPPOIEGBF_OFFSET))(this);
	}

	::System::Int32 HOKEGMMCGEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOOKGIKFOFE_HOKEGMMCGEL_OFFSET))(this);
	}

	/*
	::IOOKGIKFOFE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IOOKGIKFOFE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOOKGIKFOFE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IOOKGIKFOFE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IOOKGIKFOFE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IOOKGIKFOFE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 NAEBKLJMCNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOOKGIKFOFE_NAEBKLJMCNA_OFFSET))(this);
	}

	::System::Int32 HIKCEMKAGJO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOOKGIKFOFE_HIKCEMKAGJO_OFFSET))(this);
	}
};
