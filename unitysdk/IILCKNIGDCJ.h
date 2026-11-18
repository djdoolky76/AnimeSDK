#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define IILCKNIGDCJ_AABLIBBAMHP_OFFSET UNITYSDK_OFFSET(0x754B50)
#define IILCKNIGDCJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IILCKNIGDCJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IILCKNIGDCJ_GAIBNDBHEOA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define IILCKNIGDCJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IILCKNIGDCJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5DE770)
#define IILCKNIGDCJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IILCKNIGDCJ_TypeDefinitionIndex = 14155;

struct alignas(4) IILCKNIGDCJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IILCKNIGDCJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IILCKNIGDCJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::IILCKNIGDCJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IILCKNIGDCJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IILCKNIGDCJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 GAIBNDBHEOA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IILCKNIGDCJ_GAIBNDBHEOA_OFFSET))(this);
	}

	::System::Int32 AABLIBBAMHP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IILCKNIGDCJ_AABLIBBAMHP_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IILCKNIGDCJ_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::IILCKNIGDCJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IILCKNIGDCJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IILCKNIGDCJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
