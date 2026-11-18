#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define NBMJEHMOAOO_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NBMJEHMOAOO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NBMJEHMOAOO_DCGJGALIIHB_OFFSET UNITYSDK_OFFSET(0x754F10)
#define NBMJEHMOAOO_EGGCACEKBEE_OFFSET UNITYSDK_OFFSET(0x756B90)
#define NBMJEHMOAOO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NBMJEHMOAOO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BF67E60)
#define NBMJEHMOAOO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NBMJEHMOAOO_TypeDefinitionIndex = 17159;

struct alignas(4) NBMJEHMOAOO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBMJEHMOAOO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NBMJEHMOAOO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::NBMJEHMOAOO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NBMJEHMOAOO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NBMJEHMOAOO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NBMJEHMOAOO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::NBMJEHMOAOO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + NBMJEHMOAOO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBMJEHMOAOO_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* DCGJGALIIHB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBMJEHMOAOO_DCGJGALIIHB_OFFSET))(this);
	}

	::System::Int32 EGGCACEKBEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBMJEHMOAOO_EGGCACEKBEE_OFFSET))(this);
	}
};
