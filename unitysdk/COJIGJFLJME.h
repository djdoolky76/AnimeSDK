#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define COJIGJFLJME_ABGCNKNMEDG_OFFSET UNITYSDK_OFFSET(0x754970)
#define COJIGJFLJME_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define COJIGJFLJME_AJMDMJNODJO_OFFSET UNITYSDK_OFFSET(0x754E10)
#define COJIGJFLJME_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define COJIGJFLJME_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define COJIGJFLJME_IBELPMEJKBL_OFFSET UNITYSDK_OFFSET(0x7624E0)
#define COJIGJFLJME_MFGPMPHMGBD_OFFSET UNITYSDK_OFFSET(0x754B50)
#define COJIGJFLJME_OLCOOMGJDPI_OFFSET UNITYSDK_OFFSET(0x7557F0)
#define COJIGJFLJME_PKNGOLPDNNG_OFFSET UNITYSDK_OFFSET(0x755190)
#define COJIGJFLJME___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int COJIGJFLJME_TypeDefinitionIndex = 9444;

struct alignas(4) COJIGJFLJME
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + COJIGJFLJME_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + COJIGJFLJME___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 PKNGOLPDNNG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COJIGJFLJME_PKNGOLPDNNG_OFFSET))(this);
	}

	/*
	::COJIGJFLJME BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::COJIGJFLJME(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + COJIGJFLJME_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean AJMDMJNODJO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COJIGJFLJME_AJMDMJNODJO_OFFSET))(this);
	}

	::System::Boolean IBELPMEJKBL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COJIGJFLJME_IBELPMEJKBL_OFFSET))(this);
	}

	::System::Int32 OLCOOMGJDPI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COJIGJFLJME_OLCOOMGJDPI_OFFSET))(this);
	}

	::System::Int32 ABGCNKNMEDG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COJIGJFLJME_ABGCNKNMEDG_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COJIGJFLJME_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 MFGPMPHMGBD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COJIGJFLJME_MFGPMPHMGBD_OFFSET))(this);
	}
};
