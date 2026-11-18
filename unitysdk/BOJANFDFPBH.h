#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BOJANFDFPBH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BOJANFDFPBH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BOJANFDFPBH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BOJANFDFPBH_IGLFKIBEGGH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define BOJANFDFPBH_NDOFJFMJJAB_OFFSET UNITYSDK_OFFSET(0x754F10)
#define BOJANFDFPBH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x194FD040)
#define BOJANFDFPBH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BOJANFDFPBH_TypeDefinitionIndex = 9734;

struct alignas(4) BOJANFDFPBH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJANFDFPBH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BOJANFDFPBH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::BOJANFDFPBH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BOJANFDFPBH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BOJANFDFPBH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BOJANFDFPBH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BOJANFDFPBH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BOJANFDFPBH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* NDOFJFMJJAB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJANFDFPBH_NDOFJFMJJAB_OFFSET))(this);
	}

	::System::String* IGLFKIBEGGH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJANFDFPBH_IGLFKIBEGGH_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJANFDFPBH_ACOEONABOJL_OFFSET))(this);
	}
};
