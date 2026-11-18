#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BNGNCPFLJDP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BNGNCPFLJDP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BNGNCPFLJDP_DFIGOHGIDJN_OFFSET UNITYSDK_OFFSET(0x756B10)
#define BNGNCPFLJDP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BNGNCPFLJDP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A57B0C0)
#define BNGNCPFLJDP_OGAKJIPMFOI_OFFSET UNITYSDK_OFFSET(0x756B90)
#define BNGNCPFLJDP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BNGNCPFLJDP_TypeDefinitionIndex = 11410;

struct alignas(4) BNGNCPFLJDP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGNCPFLJDP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BNGNCPFLJDP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGNCPFLJDP_ACOEONABOJL_OFFSET))(this);
	}

	/*
	static ::BNGNCPFLJDP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::BNGNCPFLJDP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + BNGNCPFLJDP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::BNGNCPFLJDP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BNGNCPFLJDP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BNGNCPFLJDP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 OGAKJIPMFOI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGNCPFLJDP_OGAKJIPMFOI_OFFSET))(this);
	}

	::System::String* DFIGOHGIDJN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGNCPFLJDP_DFIGOHGIDJN_OFFSET))(this);
	}
};
