#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GBKEMPEEIBA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GBKEMPEEIBA_ECOGIKIPFLB_OFFSET UNITYSDK_OFFSET(0x754F10)
#define GBKEMPEEIBA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GBKEMPEEIBA_IEALPJOKDCE_OFFSET UNITYSDK_OFFSET(0x78A030)
#define GBKEMPEEIBA_KKBHHBGNJEB_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GBKEMPEEIBA_KKHEEIDPDCN_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define GBKEMPEEIBA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B7B4480)
#define GBKEMPEEIBA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GBKEMPEEIBA_TypeDefinitionIndex = 9186;

struct alignas(4) GBKEMPEEIBA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKEMPEEIBA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GBKEMPEEIBA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::GBKEMPEEIBA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GBKEMPEEIBA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GBKEMPEEIBA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* ECOGIKIPFLB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKEMPEEIBA_ECOGIKIPFLB_OFFSET))(this);
	}

	::System::String* KKHEEIDPDCN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKEMPEEIBA_KKHEEIDPDCN_OFFSET))(this);
	}

	::System::Single IEALPJOKDCE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKEMPEEIBA_IEALPJOKDCE_OFFSET))(this);
	}

	/*
	static ::GBKEMPEEIBA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GBKEMPEEIBA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GBKEMPEEIBA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 KKBHHBGNJEB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKEMPEEIBA_KKBHHBGNJEB_OFFSET))(this);
	}
};
