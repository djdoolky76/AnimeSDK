#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define JEGKKMMJJKH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JEGKKMMJJKH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JEGKKMMJJKH_GBDHPMDIJDK_OFFSET UNITYSDK_OFFSET(0x756D50)
#define JEGKKMMJJKH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JEGKKMMJJKH_MGMEBGHENIE_OFFSET UNITYSDK_OFFSET(0x756B10)
#define JEGKKMMJJKH_NENDAECBCEM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define JEGKKMMJJKH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17488800)
#define JEGKKMMJJKH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JEGKKMMJJKH_TypeDefinitionIndex = 16761;

struct alignas(4) JEGKKMMJJKH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGKKMMJJKH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEGKKMMJJKH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NENDAECBCEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGKKMMJJKH_NENDAECBCEM_OFFSET))(this);
	}

	/*
	::JEGKKMMJJKH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JEGKKMMJJKH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEGKKMMJJKH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* GBDHPMDIJDK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGKKMMJJKH_GBDHPMDIJDK_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGKKMMJJKH_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::JEGKKMMJJKH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JEGKKMMJJKH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JEGKKMMJJKH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* MGMEBGHENIE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGKKMMJJKH_MGMEBGHENIE_OFFSET))(this);
	}
};
