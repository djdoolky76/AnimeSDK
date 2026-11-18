#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define AODBEGKPGOI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AODBEGKPGOI_BICAHFMIBEB_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AODBEGKPGOI_DDLHALALCBE_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define AODBEGKPGOI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AODBEGKPGOI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x19BDD690)
#define AODBEGKPGOI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AODBEGKPGOI_TypeDefinitionIndex = 15420;

struct alignas(4) AODBEGKPGOI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AODBEGKPGOI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AODBEGKPGOI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::AODBEGKPGOI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AODBEGKPGOI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AODBEGKPGOI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BICAHFMIBEB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AODBEGKPGOI_BICAHFMIBEB_OFFSET))(this);
	}

	/*
	static ::AODBEGKPGOI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::AODBEGKPGOI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + AODBEGKPGOI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* DDLHALALCBE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AODBEGKPGOI_DDLHALALCBE_OFFSET))(this);
	}
};
