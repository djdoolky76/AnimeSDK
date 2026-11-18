#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KMFMLIIKFKJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KMFMLIIKFKJ_GBDHPMDIJDK_OFFSET UNITYSDK_OFFSET(0x754F10)
#define KMFMLIIKFKJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KMFMLIIKFKJ_IPOBNOEHJND_OFFSET UNITYSDK_OFFSET(0x755A00)
#define KMFMLIIKFKJ_KKLEPOENOGC_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define KMFMLIIKFKJ_MFPMIFLLCAJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KMFMLIIKFKJ_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B50C6E0)
#define KMFMLIIKFKJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KMFMLIIKFKJ_TypeDefinitionIndex = 16758;

struct alignas(4) KMFMLIIKFKJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFMLIIKFKJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KMFMLIIKFKJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* KKLEPOENOGC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFMLIIKFKJ_KKLEPOENOGC_OFFSET))(this);
	}

	::System::String* IPOBNOEHJND()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFMLIIKFKJ_IPOBNOEHJND_OFFSET))(this);
	}

	/*
	static ::KMFMLIIKFKJ OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KMFMLIIKFKJ(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KMFMLIIKFKJ_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::KMFMLIIKFKJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KMFMLIIKFKJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KMFMLIIKFKJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* GBDHPMDIJDK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFMLIIKFKJ_GBDHPMDIJDK_OFFSET))(this);
	}

	::System::Int32 MFPMIFLLCAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFMLIIKFKJ_MFPMIFLLCAJ_OFFSET))(this);
	}
};
