#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define HMDAMBMBHCC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HMDAMBMBHCC_DCADDIOHMCO_OFFSET UNITYSDK_OFFSET(0x755D20)
#define HMDAMBMBHCC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HMDAMBMBHCC_LNPFAKCGLAL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HMDAMBMBHCC_MFGPMPHMGBD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define HMDAMBMBHCC_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A4F30A0)
#define HMDAMBMBHCC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HMDAMBMBHCC_TypeDefinitionIndex = 13374;

struct alignas(4) HMDAMBMBHCC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMDAMBMBHCC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HMDAMBMBHCC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::HMDAMBMBHCC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HMDAMBMBHCC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HMDAMBMBHCC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::HMDAMBMBHCC OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HMDAMBMBHCC(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HMDAMBMBHCC_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 LNPFAKCGLAL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMDAMBMBHCC_LNPFAKCGLAL_OFFSET))(this);
	}

	::System::Int32 MFGPMPHMGBD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMDAMBMBHCC_MFGPMPHMGBD_OFFSET))(this);
	}

	::System::Int32 DCADDIOHMCO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMDAMBMBHCC_DCADDIOHMCO_OFFSET))(this);
	}
};
