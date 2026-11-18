#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define IGMCABDJHLM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IGMCABDJHLM_CAPEBDGEINN_OFFSET UNITYSDK_OFFSET(0x7B21E0)
#define IGMCABDJHLM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IGMCABDJHLM_HBLOMCFKGOM_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define IGMCABDJHLM_NMINJMBMHJK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IGMCABDJHLM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1953FBB0)
#define IGMCABDJHLM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IGMCABDJHLM_TypeDefinitionIndex = 9571;

struct alignas(4) IGMCABDJHLM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMCABDJHLM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGMCABDJHLM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::IGMCABDJHLM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::IGMCABDJHLM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + IGMCABDJHLM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::IGMCABDJHLM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IGMCABDJHLM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IGMCABDJHLM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* HBLOMCFKGOM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMCABDJHLM_HBLOMCFKGOM_OFFSET))(this);
	}

	::System::Int32 NMINJMBMHJK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMCABDJHLM_NMINJMBMHJK_OFFSET))(this);
	}

	::System::UInt64 CAPEBDGEINN()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMCABDJHLM_CAPEBDGEINN_OFFSET))(this);
	}
};
