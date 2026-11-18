#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define COLHDKKCIDK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define COLHDKKCIDK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define COLHDKKCIDK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define COLHDKKCIDK_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define COLHDKKCIDK_MNBGAIEPADE_OFFSET UNITYSDK_OFFSET(0x754F10)
#define COLHDKKCIDK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19506EB0)
#define COLHDKKCIDK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int COLHDKKCIDK_TypeDefinitionIndex = 12231;

struct alignas(4) COLHDKKCIDK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLHDKKCIDK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + COLHDKKCIDK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLHDKKCIDK_IFDIOIOCGDP_OFFSET))(this);
	}

	/*
	::COLHDKKCIDK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::COLHDKKCIDK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + COLHDKKCIDK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* MNBGAIEPADE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLHDKKCIDK_MNBGAIEPADE_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COLHDKKCIDK_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::COLHDKKCIDK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::COLHDKKCIDK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + COLHDKKCIDK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
