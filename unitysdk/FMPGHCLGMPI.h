#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FMPGHCLGMPI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FMPGHCLGMPI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FMPGHCLGMPI_GOPPNOEDNMN_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FMPGHCLGMPI_JNOOFDJNPFJ_OFFSET UNITYSDK_OFFSET(0x755D20)
#define FMPGHCLGMPI_NCGIHHAOHOP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FMPGHCLGMPI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B10B3B0)
#define FMPGHCLGMPI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FMPGHCLGMPI_TypeDefinitionIndex = 13684;

struct alignas(4) FMPGHCLGMPI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPGHCLGMPI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMPGHCLGMPI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FMPGHCLGMPI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FMPGHCLGMPI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FMPGHCLGMPI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 GOPPNOEDNMN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPGHCLGMPI_GOPPNOEDNMN_OFFSET))(this);
	}

	::System::Int32 JNOOFDJNPFJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPGHCLGMPI_JNOOFDJNPFJ_OFFSET))(this);
	}

	::System::Int32 NCGIHHAOHOP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPGHCLGMPI_NCGIHHAOHOP_OFFSET))(this);
	}

	/*
	::FMPGHCLGMPI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FMPGHCLGMPI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMPGHCLGMPI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
