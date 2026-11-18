#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FLMIBEMKKMI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FLMIBEMKKMI_DOIOLOAGMIN_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define FLMIBEMKKMI_FJPGCNGHHCC_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FLMIBEMKKMI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FLMIBEMKKMI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5A7A00)
#define FLMIBEMKKMI_PAJJLGDEGLL_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define FLMIBEMKKMI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FLMIBEMKKMI_TypeDefinitionIndex = 14114;

struct alignas(4) FLMIBEMKKMI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMIBEMKKMI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FLMIBEMKKMI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FLMIBEMKKMI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FLMIBEMKKMI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FLMIBEMKKMI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Boolean PAJJLGDEGLL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + FLMIBEMKKMI_PAJJLGDEGLL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 DOIOLOAGMIN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMIBEMKKMI_DOIOLOAGMIN_OFFSET))(this);
	}

	/*
	::FLMIBEMKKMI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FLMIBEMKKMI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FLMIBEMKKMI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 FJPGCNGHHCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMIBEMKKMI_FJPGCNGHHCC_OFFSET))(this);
	}
};
