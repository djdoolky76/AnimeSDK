#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define OELJBPIGDGC_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OELJBPIGDGC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OELJBPIGDGC_FEEECLPBKON_OFFSET UNITYSDK_OFFSET(0x755C70)
#define OELJBPIGDGC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OELJBPIGDGC_JKJFHFLBDMP_OFFSET UNITYSDK_OFFSET(0x754920)
#define OELJBPIGDGC_LIPPLOIFFBP_OFFSET UNITYSDK_OFFSET(0x755D20)
#define OELJBPIGDGC_LLGJBKFEPGD_OFFSET UNITYSDK_OFFSET(0x756B90)
#define OELJBPIGDGC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17365DB0)
#define OELJBPIGDGC_OHIINODNHHL_OFFSET UNITYSDK_OFFSET(0x754970)
#define OELJBPIGDGC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OELJBPIGDGC_TypeDefinitionIndex = 15680;

struct alignas(4) OELJBPIGDGC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OELJBPIGDGC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OELJBPIGDGC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 FEEECLPBKON()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OELJBPIGDGC_FEEECLPBKON_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OELJBPIGDGC_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 OHIINODNHHL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OELJBPIGDGC_OHIINODNHHL_OFFSET))(this);
	}

	::System::Int32 LLGJBKFEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OELJBPIGDGC_LLGJBKFEPGD_OFFSET))(this);
	}

	::System::Int32 JKJFHFLBDMP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OELJBPIGDGC_JKJFHFLBDMP_OFFSET))(this);
	}

	/*
	static ::OELJBPIGDGC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OELJBPIGDGC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OELJBPIGDGC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 LIPPLOIFFBP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OELJBPIGDGC_LIPPLOIFFBP_OFFSET))(this);
	}

	/*
	::OELJBPIGDGC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OELJBPIGDGC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OELJBPIGDGC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
