#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define LLAHAIKBKFJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LLAHAIKBKFJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LLAHAIKBKFJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LLAHAIKBKFJ_NLAIFNFGGMA_OFFSET UNITYSDK_OFFSET(0x754B50)
#define LLAHAIKBKFJ_OAGNMOOJCCJ_OFFSET UNITYSDK_OFFSET(0x755D20)
#define LLAHAIKBKFJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B653190)
#define LLAHAIKBKFJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LLAHAIKBKFJ_TypeDefinitionIndex = 10481;

struct alignas(4) LLAHAIKBKFJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLAHAIKBKFJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LLAHAIKBKFJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::LLAHAIKBKFJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LLAHAIKBKFJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LLAHAIKBKFJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NLAIFNFGGMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLAHAIKBKFJ_NLAIFNFGGMA_OFFSET))(this);
	}

	/*
	static ::LLAHAIKBKFJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LLAHAIKBKFJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LLAHAIKBKFJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLAHAIKBKFJ_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 OAGNMOOJCCJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLAHAIKBKFJ_OAGNMOOJCCJ_OFFSET))(this);
	}
};
