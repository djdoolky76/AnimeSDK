#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FFCCKNLIDBN_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FFCCKNLIDBN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FFCCKNLIDBN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FFCCKNLIDBN_LNMNIPIOLCP_OFFSET UNITYSDK_OFFSET(0x754F10)
#define FFCCKNLIDBN_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x16636180)
#define FFCCKNLIDBN___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FFCCKNLIDBN_TypeDefinitionIndex = 12061;

struct alignas(4) FFCCKNLIDBN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFCCKNLIDBN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FFCCKNLIDBN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFCCKNLIDBN_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::FFCCKNLIDBN OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FFCCKNLIDBN(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FFCCKNLIDBN_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* LNMNIPIOLCP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFCCKNLIDBN_LNMNIPIOLCP_OFFSET))(this);
	}

	/*
	::FFCCKNLIDBN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FFCCKNLIDBN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FFCCKNLIDBN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
