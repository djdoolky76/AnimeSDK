#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define JHBLEOGMEOJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JHBLEOGMEOJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JHBLEOGMEOJ_MEGNCIHLLDH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JHBLEOGMEOJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17484270)
#define JHBLEOGMEOJ_OIPJJPLGLEE_OFFSET UNITYSDK_OFFSET(0x754B50)
#define JHBLEOGMEOJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JHBLEOGMEOJ_TypeDefinitionIndex = 16882;

struct alignas(4) JHBLEOGMEOJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHBLEOGMEOJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHBLEOGMEOJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::JHBLEOGMEOJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JHBLEOGMEOJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHBLEOGMEOJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 OIPJJPLGLEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHBLEOGMEOJ_OIPJJPLGLEE_OFFSET))(this);
	}

	/*
	static ::JHBLEOGMEOJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JHBLEOGMEOJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JHBLEOGMEOJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 MEGNCIHLLDH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHBLEOGMEOJ_MEGNCIHLLDH_OFFSET))(this);
	}
};
