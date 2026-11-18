#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define ICHMNPEDHOO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ICHMNPEDHOO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ICHMNPEDHOO_IGOEHPHHPBK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ICHMNPEDHOO_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5D6510)
#define ICHMNPEDHOO___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ICHMNPEDHOO_TypeDefinitionIndex = 12817;

struct alignas(4) ICHMNPEDHOO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHMNPEDHOO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ICHMNPEDHOO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::ICHMNPEDHOO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ICHMNPEDHOO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ICHMNPEDHOO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 IGOEHPHHPBK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHMNPEDHOO_IGOEHPHHPBK_OFFSET))(this);
	}

	/*
	static ::ICHMNPEDHOO OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::ICHMNPEDHOO(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + ICHMNPEDHOO_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
