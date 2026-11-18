#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define MIOCKFABPMK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MIOCKFABPMK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MIOCKFABPMK_GKKEEOMPEGE_OFFSET UNITYSDK_OFFSET(0x756B90)
#define MIOCKFABPMK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17346590)
#define MIOCKFABPMK_OMPFKIDLEEB_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MIOCKFABPMK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MIOCKFABPMK_TypeDefinitionIndex = 9203;

struct alignas(4) MIOCKFABPMK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIOCKFABPMK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MIOCKFABPMK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 OMPFKIDLEEB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIOCKFABPMK_OMPFKIDLEEB_OFFSET))(this);
	}

	/*
	::MIOCKFABPMK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MIOCKFABPMK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MIOCKFABPMK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GKKEEOMPEGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIOCKFABPMK_GKKEEOMPEGE_OFFSET))(this);
	}

	/*
	static ::MIOCKFABPMK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MIOCKFABPMK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MIOCKFABPMK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
