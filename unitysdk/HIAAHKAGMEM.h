#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define HIAAHKAGMEM_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define HIAAHKAGMEM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HIAAHKAGMEM_DENBGHPAMIL_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define HIAAHKAGMEM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HIAAHKAGMEM_KACFKIIMCAO_OFFSET UNITYSDK_OFFSET(0x755D20)
#define HIAAHKAGMEM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B7C49F0)
#define HIAAHKAGMEM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HIAAHKAGMEM_TypeDefinitionIndex = 14908;

struct alignas(4) HIAAHKAGMEM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAAHKAGMEM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HIAAHKAGMEM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 KACFKIIMCAO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAAHKAGMEM_KACFKIIMCAO_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAAHKAGMEM_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::HIAAHKAGMEM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::HIAAHKAGMEM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + HIAAHKAGMEM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::HIAAHKAGMEM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HIAAHKAGMEM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HIAAHKAGMEM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* DENBGHPAMIL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAAHKAGMEM_DENBGHPAMIL_OFFSET))(this);
	}
};
