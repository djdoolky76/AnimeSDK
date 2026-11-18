#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define DBDCBAKJEGD_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DBDCBAKJEGD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DBDCBAKJEGD_FIGNOOEDDNC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DBDCBAKJEGD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DBDCBAKJEGD_KINKHOPMBPP_OFFSET UNITYSDK_OFFSET(0x754B50)
#define DBDCBAKJEGD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x16614940)
#define DBDCBAKJEGD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DBDCBAKJEGD_TypeDefinitionIndex = 15993;

struct alignas(4) DBDCBAKJEGD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDCBAKJEGD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DBDCBAKJEGD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::DBDCBAKJEGD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DBDCBAKJEGD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DBDCBAKJEGD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 FIGNOOEDDNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDCBAKJEGD_FIGNOOEDDNC_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDCBAKJEGD_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 KINKHOPMBPP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDCBAKJEGD_KINKHOPMBPP_OFFSET))(this);
	}

	/*
	static ::DBDCBAKJEGD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DBDCBAKJEGD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DBDCBAKJEGD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
