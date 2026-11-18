#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define PICPDEPMJGA_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PICPDEPMJGA_BADIFLFDNCO_OFFSET UNITYSDK_OFFSET(0x754B50)
#define PICPDEPMJGA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PICPDEPMJGA_FICDPAGAAML_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define PICPDEPMJGA_FIDFJGLBOPA_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define PICPDEPMJGA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PICPDEPMJGA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1EC85670)
#define PICPDEPMJGA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PICPDEPMJGA_TypeDefinitionIndex = 12044;

struct alignas(4) PICPDEPMJGA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PICPDEPMJGA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PICPDEPMJGA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PICPDEPMJGA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PICPDEPMJGA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PICPDEPMJGA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PICPDEPMJGA_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 FIDFJGLBOPA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PICPDEPMJGA_FIDFJGLBOPA_OFFSET))(this);
	}

	/*
	::PICPDEPMJGA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PICPDEPMJGA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PICPDEPMJGA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BADIFLFDNCO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PICPDEPMJGA_BADIFLFDNCO_OFFSET))(this);
	}

	::System::Boolean FICDPAGAAML(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PICPDEPMJGA_FICDPAGAAML_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
