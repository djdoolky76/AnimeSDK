#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define KADNBALMBLI_BECGKMAGGBL_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KADNBALMBLI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KADNBALMBLI_CIODBKFACOD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KADNBALMBLI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KADNBALMBLI_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B13FB80)
#define KADNBALMBLI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KADNBALMBLI_TypeDefinitionIndex = 11865;

struct alignas(4) KADNBALMBLI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KADNBALMBLI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KADNBALMBLI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KADNBALMBLI OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KADNBALMBLI(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KADNBALMBLI_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 BECGKMAGGBL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KADNBALMBLI_BECGKMAGGBL_OFFSET))(this);
	}

	::System::Int32 CIODBKFACOD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KADNBALMBLI_CIODBKFACOD_OFFSET))(this);
	}

	/*
	::KADNBALMBLI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KADNBALMBLI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KADNBALMBLI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
