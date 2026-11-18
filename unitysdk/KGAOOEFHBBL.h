#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define KGAOOEFHBBL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KGAOOEFHBBL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KGAOOEFHBBL_NGFKBKCFPLK_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KGAOOEFHBBL_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x152FFC00)
#define KGAOOEFHBBL_PEEIGIDMLIA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KGAOOEFHBBL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KGAOOEFHBBL_TypeDefinitionIndex = 15702;

struct alignas(4) KGAOOEFHBBL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAOOEFHBBL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KGAOOEFHBBL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::KGAOOEFHBBL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KGAOOEFHBBL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KGAOOEFHBBL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KGAOOEFHBBL OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::KGAOOEFHBBL(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + KGAOOEFHBBL_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 NGFKBKCFPLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAOOEFHBBL_NGFKBKCFPLK_OFFSET))(this);
	}

	::System::Int32 PEEIGIDMLIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAOOEFHBBL_PEEIGIDMLIA_OFFSET))(this);
	}
};
