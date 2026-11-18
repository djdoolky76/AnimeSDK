#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define EKGOCKJCNNJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EKGOCKJCNNJ_BNLIHJGCLKF_OFFSET UNITYSDK_OFFSET(0x754C20)
#define EKGOCKJCNNJ_CBECADKEHON_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define EKGOCKJCNNJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EKGOCKJCNNJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1ADD5870)
#define EKGOCKJCNNJ_ONFGLHFDEED_OFFSET UNITYSDK_OFFSET(0x754B50)
#define EKGOCKJCNNJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EKGOCKJCNNJ_TypeDefinitionIndex = 13805;

struct alignas(4) EKGOCKJCNNJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGOCKJCNNJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EKGOCKJCNNJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::EKGOCKJCNNJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EKGOCKJCNNJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EKGOCKJCNNJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::EKGOCKJCNNJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EKGOCKJCNNJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EKGOCKJCNNJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ONFGLHFDEED()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGOCKJCNNJ_ONFGLHFDEED_OFFSET))(this);
	}

	::System::Boolean CBECADKEHON(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EKGOCKJCNNJ_CBECADKEHON_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 BNLIHJGCLKF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGOCKJCNNJ_BNLIHJGCLKF_OFFSET))(this);
	}
};
