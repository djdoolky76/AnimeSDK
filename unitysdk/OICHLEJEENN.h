#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define OICHLEJEENN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OICHLEJEENN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OICHLEJEENN_JCPJNGNADLP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OICHLEJEENN_PPONEKNFGBD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define OICHLEJEENN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OICHLEJEENN_TypeDefinitionIndex = 13470;

struct alignas(4) OICHLEJEENN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OICHLEJEENN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OICHLEJEENN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::OICHLEJEENN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OICHLEJEENN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OICHLEJEENN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 JCPJNGNADLP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OICHLEJEENN_JCPJNGNADLP_OFFSET))(this);
	}

	::System::Int32 PPONEKNFGBD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OICHLEJEENN_PPONEKNFGBD_OFFSET))(this);
	}
};
