#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define EBMJLLFNJPI_AAEAAMPJGLB_OFFSET UNITYSDK_OFFSET(0x756B90)
#define EBMJLLFNJPI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EBMJLLFNJPI_EINNPFHJOIJ_OFFSET UNITYSDK_OFFSET(0x754AF0)
#define EBMJLLFNJPI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EBMJLLFNJPI_KDHKLKKOMMP_OFFSET UNITYSDK_OFFSET(0x7549C0)
#define EBMJLLFNJPI_KKNNPLPEOFO_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EBMJLLFNJPI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x157AA050)
#define EBMJLLFNJPI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EBMJLLFNJPI_TypeDefinitionIndex = 11830;

struct alignas(4) EBMJLLFNJPI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBMJLLFNJPI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBMJLLFNJPI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 EINNPFHJOIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBMJLLFNJPI_EINNPFHJOIJ_OFFSET))(this);
	}

	::System::Boolean KDHKLKKOMMP(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + EBMJLLFNJPI_KDHKLKKOMMP_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::EBMJLLFNJPI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EBMJLLFNJPI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBMJLLFNJPI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::EBMJLLFNJPI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::EBMJLLFNJPI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + EBMJLLFNJPI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 AAEAAMPJGLB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBMJLLFNJPI_AAEAAMPJGLB_OFFSET))(this);
	}

	::System::Int32 KKNNPLPEOFO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBMJLLFNJPI_KKNNPLPEOFO_OFFSET))(this);
	}
};
