#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define LKCNNEIDHAF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LKCNNEIDHAF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LKCNNEIDHAF_FICECBHEHDF_OFFSET UNITYSDK_OFFSET(0x754B50)
#define LKCNNEIDHAF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LKCNNEIDHAF_KHLKJHMPHCE_OFFSET UNITYSDK_OFFSET(0x755A00)
#define LKCNNEIDHAF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B305480)
#define LKCNNEIDHAF_OPHCANEDOND_OFFSET UNITYSDK_OFFSET(0x754F10)
#define LKCNNEIDHAF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LKCNNEIDHAF_TypeDefinitionIndex = 9825;

struct alignas(4) LKCNNEIDHAF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKCNNEIDHAF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LKCNNEIDHAF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKCNNEIDHAF_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::LKCNNEIDHAF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::LKCNNEIDHAF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + LKCNNEIDHAF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* KHLKJHMPHCE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKCNNEIDHAF_KHLKJHMPHCE_OFFSET))(this);
	}

	::System::String* OPHCANEDOND()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKCNNEIDHAF_OPHCANEDOND_OFFSET))(this);
	}

	::System::Int32 FICECBHEHDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKCNNEIDHAF_FICECBHEHDF_OFFSET))(this);
	}

	/*
	::LKCNNEIDHAF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LKCNNEIDHAF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LKCNNEIDHAF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
