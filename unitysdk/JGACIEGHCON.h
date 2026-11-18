#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define JGACIEGHCON_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JGACIEGHCON_ENACANCDMBB_OFFSET UNITYSDK_OFFSET(0x761240)
#define JGACIEGHCON_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JGACIEGHCON_IMNMEOCFBEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JGACIEGHCON_MDFMPDDMLFJ_OFFSET UNITYSDK_OFFSET(0x7637F0)
#define JGACIEGHCON_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B13A680)
#define JGACIEGHCON___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JGACIEGHCON_TypeDefinitionIndex = 12352;

struct alignas(4) JGACIEGHCON
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGACIEGHCON_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JGACIEGHCON___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JGACIEGHCON OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JGACIEGHCON(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JGACIEGHCON_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ENACANCDMBB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGACIEGHCON_ENACANCDMBB_OFFSET))(this);
	}

	/*
	::JGACIEGHCON BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JGACIEGHCON(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JGACIEGHCON_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean MDFMPDDMLFJ(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JGACIEGHCON_MDFMPDDMLFJ_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 IMNMEOCFBEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGACIEGHCON_IMNMEOCFBEA_OFFSET))(this);
	}
};
