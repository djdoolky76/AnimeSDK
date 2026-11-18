#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define JPGBLEOAIEH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JPGBLEOAIEH_DPCDIABPPEE_OFFSET UNITYSDK_OFFSET(0x754B50)
#define JPGBLEOAIEH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JPGBLEOAIEH_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JPGBLEOAIEH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JPGBLEOAIEH_TypeDefinitionIndex = 14210;

struct alignas(4) JPGBLEOAIEH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPGBLEOAIEH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JPGBLEOAIEH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPGBLEOAIEH_LPFMNKEFPMM_OFFSET))(this);
	}

	/*
	::JPGBLEOAIEH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JPGBLEOAIEH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JPGBLEOAIEH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 DPCDIABPPEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPGBLEOAIEH_DPCDIABPPEE_OFFSET))(this);
	}
};
