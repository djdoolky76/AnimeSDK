#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define AKJKGJLKIIE_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AKJKGJLKIIE_AOOCAKCCDHB_OFFSET UNITYSDK_OFFSET(0x7B21E0)
#define AKJKGJLKIIE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AKJKGJLKIIE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AKJKGJLKIIE_MGMAAJNANAN_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define AKJKGJLKIIE_NHOOMCHFGKM_OFFSET UNITYSDK_OFFSET(0x754920)
#define AKJKGJLKIIE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1876F130)
#define AKJKGJLKIIE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AKJKGJLKIIE_TypeDefinitionIndex = 13304;

struct alignas(4) AKJKGJLKIIE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJKGJLKIIE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKJKGJLKIIE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NHOOMCHFGKM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJKGJLKIIE_NHOOMCHFGKM_OFFSET))(this);
	}

	::System::UInt64 AOOCAKCCDHB()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJKGJLKIIE_AOOCAKCCDHB_OFFSET))(this);
	}

	::System::String* MGMAAJNANAN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJKGJLKIIE_MGMAAJNANAN_OFFSET))(this);
	}

	/*
	::AKJKGJLKIIE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AKJKGJLKIIE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKJKGJLKIIE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJKGJLKIIE_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::AKJKGJLKIIE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::AKJKGJLKIIE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + AKJKGJLKIIE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
