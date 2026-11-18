#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IMMGDLLKGPA_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IMMGDLLKGPA_BCOGCADNCHN_OFFSET UNITYSDK_OFFSET(0x754F10)
#define IMMGDLLKGPA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IMMGDLLKGPA_FNFKGGMBPOK_OFFSET UNITYSDK_OFFSET(0x754920)
#define IMMGDLLKGPA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IMMGDLLKGPA_GGNLHJNPPAK_OFFSET UNITYSDK_OFFSET(0x757290)
#define IMMGDLLKGPA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B62A6E0)
#define IMMGDLLKGPA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IMMGDLLKGPA_TypeDefinitionIndex = 16176;

struct alignas(4) IMMGDLLKGPA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMGDLLKGPA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IMMGDLLKGPA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::IMMGDLLKGPA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IMMGDLLKGPA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IMMGDLLKGPA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* BCOGCADNCHN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMGDLLKGPA_BCOGCADNCHN_OFFSET))(this);
	}

	::System::Int32 FNFKGGMBPOK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMGDLLKGPA_FNFKGGMBPOK_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMGDLLKGPA_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::IMMGDLLKGPA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IMMGDLLKGPA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IMMGDLLKGPA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* GGNLHJNPPAK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMGDLLKGPA_GGNLHJNPPAK_OFFSET))(this);
	}
};
