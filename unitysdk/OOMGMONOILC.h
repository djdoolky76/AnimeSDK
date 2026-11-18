#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define OOMGMONOILC_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OOMGMONOILC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OOMGMONOILC_BJKGNKEPEJB_OFFSET UNITYSDK_OFFSET(0x756B90)
#define OOMGMONOILC_FDDEDEDKPMJ_OFFSET UNITYSDK_OFFSET(0x7A7050)
#define OOMGMONOILC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OOMGMONOILC_MBAJBAPIFEF_OFFSET UNITYSDK_OFFSET(0x755D20)
#define OOMGMONOILC_NENOCGIAOCE_OFFSET UNITYSDK_OFFSET(0x7641D0)
#define OOMGMONOILC_PKOMGKJLKGM_OFFSET UNITYSDK_OFFSET(0x754970)
#define OOMGMONOILC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OOMGMONOILC_TypeDefinitionIndex = 17498;

struct alignas(4) OOMGMONOILC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMGMONOILC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OOMGMONOILC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PKOMGKJLKGM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMGMONOILC_PKOMGKJLKGM_OFFSET))(this);
	}

	/*
	::OOMGMONOILC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OOMGMONOILC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OOMGMONOILC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Single NENOCGIAOCE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMGMONOILC_NENOCGIAOCE_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMGMONOILC_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 MBAJBAPIFEF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMGMONOILC_MBAJBAPIFEF_OFFSET))(this);
	}

	::System::Single FDDEDEDKPMJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMGMONOILC_FDDEDEDKPMJ_OFFSET))(this);
	}

	::System::Int32 BJKGNKEPEJB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMGMONOILC_BJKGNKEPEJB_OFFSET))(this);
	}
};
