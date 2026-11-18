#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define PPCFFDHHOGO_AIEICODELFC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define PPCFFDHHOGO_BFFOILNOKAH_OFFSET UNITYSDK_OFFSET(0x756B90)
#define PPCFFDHHOGO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PPCFFDHHOGO_EHLGACJFEKB_OFFSET UNITYSDK_OFFSET(0x755C70)
#define PPCFFDHHOGO_FMOLANGCPDH_OFFSET UNITYSDK_OFFSET(0x7566C0)
#define PPCFFDHHOGO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PPCFFDHHOGO_JKPDKNPBGHO_OFFSET UNITYSDK_OFFSET(0x756360)
#define PPCFFDHHOGO_LANCAHBGFJG_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PPCFFDHHOGO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17FF6780)
#define PPCFFDHHOGO_PHPCMAFGEON_OFFSET UNITYSDK_OFFSET(0x754B50)
#define PPCFFDHHOGO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PPCFFDHHOGO_TypeDefinitionIndex = 11206;

struct alignas(4) PPCFFDHHOGO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCFFDHHOGO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PPCFFDHHOGO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 BFFOILNOKAH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCFFDHHOGO_BFFOILNOKAH_OFFSET))(this);
	}

	/*
	static ::PPCFFDHHOGO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PPCFFDHHOGO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PPCFFDHHOGO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 FMOLANGCPDH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCFFDHHOGO_FMOLANGCPDH_OFFSET))(this);
	}

	::System::Boolean JKPDKNPBGHO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PPCFFDHHOGO_JKPDKNPBGHO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 LANCAHBGFJG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCFFDHHOGO_LANCAHBGFJG_OFFSET))(this);
	}

	::System::Int32 AIEICODELFC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCFFDHHOGO_AIEICODELFC_OFFSET))(this);
	}

	/*
	::PPCFFDHHOGO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PPCFFDHHOGO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PPCFFDHHOGO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 PHPCMAFGEON()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCFFDHHOGO_PHPCMAFGEON_OFFSET))(this);
	}

	::System::Int32 EHLGACJFEKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCFFDHHOGO_EHLGACJFEKB_OFFSET))(this);
	}
};
