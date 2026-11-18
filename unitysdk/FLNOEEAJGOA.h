#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FLNOEEAJGOA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FLNOEEAJGOA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FLNOEEAJGOA_HDDENLNIPMA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define FLNOEEAJGOA_KJCHONPOHPG_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FLNOEEAJGOA_MKGFNJJBICO_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FLNOEEAJGOA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B4C7640)
#define FLNOEEAJGOA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FLNOEEAJGOA_TypeDefinitionIndex = 9255;

struct alignas(4) FLNOEEAJGOA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLNOEEAJGOA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FLNOEEAJGOA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::FLNOEEAJGOA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FLNOEEAJGOA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FLNOEEAJGOA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FLNOEEAJGOA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FLNOEEAJGOA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FLNOEEAJGOA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 KJCHONPOHPG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLNOEEAJGOA_KJCHONPOHPG_OFFSET))(this);
	}

	::System::Int32 MKGFNJJBICO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLNOEEAJGOA_MKGFNJJBICO_OFFSET))(this);
	}

	::System::Int32 HDDENLNIPMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLNOEEAJGOA_HDDENLNIPMA_OFFSET))(this);
	}
};
