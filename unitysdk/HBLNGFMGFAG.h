#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EPHBGKMGEFF.h"

namespace FlatBuffers { class ByteBuffer; }

#define HBLNGFMGFAG_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HBLNGFMGFAG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HBLNGFMGFAG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HBLNGFMGFAG_HIIAFPIPOOJ_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define HBLNGFMGFAG_NDAAEKGDLJF_OFFSET UNITYSDK_OFFSET(0x779A20)
#define HBLNGFMGFAG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HBLNGFMGFAG_TypeDefinitionIndex = 9450;

struct alignas(4) HBLNGFMGFAG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBLNGFMGFAG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HBLNGFMGFAG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean NDAAEKGDLJF(::System::Int32 HPMEONKHFGG, ::EPHBGKMGEFF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EPHBGKMGEFF&))((::PBYTE)hIl2Cpp + HBLNGFMGFAG_NDAAEKGDLJF_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 HIIAFPIPOOJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBLNGFMGFAG_HIIAFPIPOOJ_OFFSET))(this);
	}

	/*
	::HBLNGFMGFAG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HBLNGFMGFAG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HBLNGFMGFAG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBLNGFMGFAG_ACOEONABOJL_OFFSET))(this);
	}
};
