#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MLLHACPEIFP_AFCPHACFFLL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MLLHACPEIFP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MLLHACPEIFP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MLLHACPEIFP_JCIHKCBBPFH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define MLLHACPEIFP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17FC9CD0)
#define MLLHACPEIFP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MLLHACPEIFP_TypeDefinitionIndex = 12444;

struct alignas(4) MLLHACPEIFP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLLHACPEIFP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MLLHACPEIFP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MLLHACPEIFP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MLLHACPEIFP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MLLHACPEIFP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* JCIHKCBBPFH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLLHACPEIFP_JCIHKCBBPFH_OFFSET))(this);
	}

	::System::Int32 AFCPHACFFLL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLLHACPEIFP_AFCPHACFFLL_OFFSET))(this);
	}

	/*
	::MLLHACPEIFP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MLLHACPEIFP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MLLHACPEIFP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
