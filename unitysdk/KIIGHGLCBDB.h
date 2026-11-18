#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KIIGHGLCBDB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KIIGHGLCBDB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KIIGHGLCBDB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KIIGHGLCBDB_GNLBPCGFALA_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define KIIGHGLCBDB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BA793B0)
#define KIIGHGLCBDB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KIIGHGLCBDB_TypeDefinitionIndex = 9436;

struct alignas(4) KIIGHGLCBDB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIIGHGLCBDB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KIIGHGLCBDB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIIGHGLCBDB_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* GNLBPCGFALA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIIGHGLCBDB_GNLBPCGFALA_OFFSET))(this);
	}

	/*
	::KIIGHGLCBDB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KIIGHGLCBDB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KIIGHGLCBDB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KIIGHGLCBDB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KIIGHGLCBDB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KIIGHGLCBDB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
