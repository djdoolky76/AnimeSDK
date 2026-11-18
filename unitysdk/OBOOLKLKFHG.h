#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OHNDLJDJIDC.h"
#include "unitysdk/System/Nullable_1.h"

namespace FlatBuffers { class ByteBuffer; }

#define OBOOLKLKFHG_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OBOOLKLKFHG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OBOOLKLKFHG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OBOOLKLKFHG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1C09B9A0)
#define OBOOLKLKFHG_PGFCLLGLOCG_OFFSET UNITYSDK_OFFSET(0x7B1C20)
#define OBOOLKLKFHG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OBOOLKLKFHG_TypeDefinitionIndex = 13540;

struct alignas(4) OBOOLKLKFHG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOOLKLKFHG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBOOLKLKFHG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOOLKLKFHG_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::OBOOLKLKFHG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OBOOLKLKFHG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OBOOLKLKFHG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::OBOOLKLKFHG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OBOOLKLKFHG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBOOLKLKFHG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Nullable_1<::OHNDLJDJIDC> PGFCLLGLOCG()
	{
		return ((::System::Nullable_1<::OHNDLJDJIDC>(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOOLKLKFHG_PGFCLLGLOCG_OFFSET))(this);
	}
};
