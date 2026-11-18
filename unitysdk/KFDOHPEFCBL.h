#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define KFDOHPEFCBL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KFDOHPEFCBL_FCJKMPHAMGA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KFDOHPEFCBL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KFDOHPEFCBL_HKNNHCHGFON_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KFDOHPEFCBL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x18BD87B0)
#define KFDOHPEFCBL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KFDOHPEFCBL_TypeDefinitionIndex = 11500;

struct alignas(4) KFDOHPEFCBL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFDOHPEFCBL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KFDOHPEFCBL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KFDOHPEFCBL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KFDOHPEFCBL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KFDOHPEFCBL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 HKNNHCHGFON()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFDOHPEFCBL_HKNNHCHGFON_OFFSET))(this);
	}

	::System::Int32 FCJKMPHAMGA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFDOHPEFCBL_FCJKMPHAMGA_OFFSET))(this);
	}

	/*
	::KFDOHPEFCBL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KFDOHPEFCBL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KFDOHPEFCBL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
