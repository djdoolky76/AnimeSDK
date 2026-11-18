#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define PIPBLDAAJBD_AJDFFJBINBN_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PIPBLDAAJBD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PIPBLDAAJBD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PIPBLDAAJBD_INCIICDJMGJ_OFFSET UNITYSDK_OFFSET(0x7641D0)
#define PIPBLDAAJBD_MNIIFNAONLJ_OFFSET UNITYSDK_OFFSET(0x764220)
#define PIPBLDAAJBD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1EDC04D0)
#define PIPBLDAAJBD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PIPBLDAAJBD_TypeDefinitionIndex = 13530;

struct alignas(4) PIPBLDAAJBD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPBLDAAJBD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PIPBLDAAJBD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Single MNIIFNAONLJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPBLDAAJBD_MNIIFNAONLJ_OFFSET))(this);
	}

	/*
	static ::PIPBLDAAJBD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PIPBLDAAJBD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PIPBLDAAJBD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::PIPBLDAAJBD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PIPBLDAAJBD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PIPBLDAAJBD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Single INCIICDJMGJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPBLDAAJBD_INCIICDJMGJ_OFFSET))(this);
	}

	::System::Int32 AJDFFJBINBN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPBLDAAJBD_AJDFFJBINBN_OFFSET))(this);
	}
};
