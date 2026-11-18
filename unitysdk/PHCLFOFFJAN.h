#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PHCLFOFFJAN_AAGGGICFPLB_OFFSET UNITYSDK_OFFSET(0x7641D0)
#define PHCLFOFFJAN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PHCLFOFFJAN_BPLDKKKAFAD_OFFSET UNITYSDK_OFFSET(0x7A7050)
#define PHCLFOFFJAN_CIKNBJIIDFG_OFFSET UNITYSDK_OFFSET(0x756D50)
#define PHCLFOFFJAN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PHCLFOFFJAN_HJNAAHCPILF_OFFSET UNITYSDK_OFFSET(0x78A030)
#define PHCLFOFFJAN_HMAGJBDALOC_OFFSET UNITYSDK_OFFSET(0x764220)
#define PHCLFOFFJAN_KKNNPLPEOFO_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PHCLFOFFJAN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1737BCC0)
#define PHCLFOFFJAN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PHCLFOFFJAN_TypeDefinitionIndex = 14568;

struct alignas(4) PHCLFOFFJAN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCLFOFFJAN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHCLFOFFJAN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::PHCLFOFFJAN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PHCLFOFFJAN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHCLFOFFJAN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* CIKNBJIIDFG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCLFOFFJAN_CIKNBJIIDFG_OFFSET))(this);
	}

	::System::Single BPLDKKKAFAD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCLFOFFJAN_BPLDKKKAFAD_OFFSET))(this);
	}

	::System::Single HJNAAHCPILF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCLFOFFJAN_HJNAAHCPILF_OFFSET))(this);
	}

	::System::Single AAGGGICFPLB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCLFOFFJAN_AAGGGICFPLB_OFFSET))(this);
	}

	::System::Int32 KKNNPLPEOFO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCLFOFFJAN_KKNNPLPEOFO_OFFSET))(this);
	}

	/*
	static ::PHCLFOFFJAN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PHCLFOFFJAN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PHCLFOFFJAN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Single HMAGJBDALOC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCLFOFFJAN_HMAGJBDALOC_OFFSET))(this);
	}
};
