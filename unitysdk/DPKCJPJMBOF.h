#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DPKCJPJMBOF_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DPKCJPJMBOF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DPKCJPJMBOF_COPBPCCNEAE_OFFSET UNITYSDK_OFFSET(0x754F10)
#define DPKCJPJMBOF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DPKCJPJMBOF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A193600)
#define DPKCJPJMBOF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DPKCJPJMBOF_TypeDefinitionIndex = 13593;

struct alignas(4) DPKCJPJMBOF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKCJPJMBOF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPKCJPJMBOF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* COPBPCCNEAE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKCJPJMBOF_COPBPCCNEAE_OFFSET))(this);
	}

	/*
	static ::DPKCJPJMBOF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::DPKCJPJMBOF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + DPKCJPJMBOF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKCJPJMBOF_ACOEONABOJL_OFFSET))(this);
	}

	/*
	::DPKCJPJMBOF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DPKCJPJMBOF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPKCJPJMBOF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
