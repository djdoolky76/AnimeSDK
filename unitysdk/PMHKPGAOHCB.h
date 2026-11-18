#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define PMHKPGAOHCB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PMHKPGAOHCB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PMHKPGAOHCB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PMHKPGAOHCB_NLAIFNFGGMA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define PMHKPGAOHCB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1F292270)
#define PMHKPGAOHCB_PDMPAKJENIF_OFFSET UNITYSDK_OFFSET(0x754B50)
#define PMHKPGAOHCB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PMHKPGAOHCB_TypeDefinitionIndex = 13496;

struct alignas(4) PMHKPGAOHCB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHKPGAOHCB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMHKPGAOHCB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NLAIFNFGGMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHKPGAOHCB_NLAIFNFGGMA_OFFSET))(this);
	}

	/*
	static ::PMHKPGAOHCB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PMHKPGAOHCB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PMHKPGAOHCB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHKPGAOHCB_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 PDMPAKJENIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHKPGAOHCB_PDMPAKJENIF_OFFSET))(this);
	}

	/*
	::PMHKPGAOHCB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PMHKPGAOHCB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PMHKPGAOHCB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
