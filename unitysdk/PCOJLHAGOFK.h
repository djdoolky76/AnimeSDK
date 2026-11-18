#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define PCOJLHAGOFK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PCOJLHAGOFK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PCOJLHAGOFK_IDKDMBDGHDN_OFFSET UNITYSDK_OFFSET(0x755A00)
#define PCOJLHAGOFK_KHLGPECGFIK_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define PCOJLHAGOFK_MLANAGGNEKJ_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PCOJLHAGOFK_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BABD6F0)
#define PCOJLHAGOFK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PCOJLHAGOFK_TypeDefinitionIndex = 16560;

struct alignas(4) PCOJLHAGOFK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCOJLHAGOFK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PCOJLHAGOFK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 MLANAGGNEKJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCOJLHAGOFK_MLANAGGNEKJ_OFFSET))(this);
	}

	::System::String* IDKDMBDGHDN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCOJLHAGOFK_IDKDMBDGHDN_OFFSET))(this);
	}

	/*
	static ::PCOJLHAGOFK OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PCOJLHAGOFK(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PCOJLHAGOFK_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 KHLGPECGFIK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCOJLHAGOFK_KHLGPECGFIK_OFFSET))(this);
	}

	/*
	::PCOJLHAGOFK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PCOJLHAGOFK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PCOJLHAGOFK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
