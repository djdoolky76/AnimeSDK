#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MPDGHLJKHJG_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MPDGHLJKHJG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MPDGHLJKHJG_CLNLNKACNDG_OFFSET UNITYSDK_OFFSET(0x756B90)
#define MPDGHLJKHJG_GBDHPMDIJDK_OFFSET UNITYSDK_OFFSET(0x754F10)
#define MPDGHLJKHJG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MPDGHLJKHJG_IPOBNOEHJND_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define MPDGHLJKHJG_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1AB11760)
#define MPDGHLJKHJG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MPDGHLJKHJG_TypeDefinitionIndex = 10556;

struct alignas(4) MPDGHLJKHJG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDGHLJKHJG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPDGHLJKHJG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::MPDGHLJKHJG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MPDGHLJKHJG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPDGHLJKHJG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 CLNLNKACNDG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDGHLJKHJG_CLNLNKACNDG_OFFSET))(this);
	}

	/*
	static ::MPDGHLJKHJG OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MPDGHLJKHJG(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MPDGHLJKHJG_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* GBDHPMDIJDK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDGHLJKHJG_GBDHPMDIJDK_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDGHLJKHJG_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* IPOBNOEHJND()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDGHLJKHJG_IPOBNOEHJND_OFFSET))(this);
	}
};
