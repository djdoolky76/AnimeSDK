#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define OHGKGHBKGCK_BGJOEHIOGJB_OFFSET UNITYSDK_OFFSET(0x754C80)
#define OHGKGHBKGCK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define OHGKGHBKGCK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OHGKGHBKGCK_KNPALHLPPGP_OFFSET UNITYSDK_OFFSET(0x754B50)
#define OHGKGHBKGCK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BF7ADE0)
#define OHGKGHBKGCK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OHGKGHBKGCK_TypeDefinitionIndex = 12929;

struct alignas(4) OHGKGHBKGCK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHGKGHBKGCK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OHGKGHBKGCK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::OHGKGHBKGCK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::OHGKGHBKGCK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + OHGKGHBKGCK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::OHGKGHBKGCK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OHGKGHBKGCK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OHGKGHBKGCK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 KNPALHLPPGP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHGKGHBKGCK_KNPALHLPPGP_OFFSET))(this);
	}

	::System::Int32 BGJOEHIOGJB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHGKGHBKGCK_BGJOEHIOGJB_OFFSET))(this);
	}
};
