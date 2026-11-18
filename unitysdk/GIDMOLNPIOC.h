#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GIDMOLNPIOC_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GIDMOLNPIOC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GIDMOLNPIOC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GIDMOLNPIOC_HCPKDCOCEHI_OFFSET UNITYSDK_OFFSET(0x756B90)
#define GIDMOLNPIOC_HJONAJDEJOC_OFFSET UNITYSDK_OFFSET(0x754920)
#define GIDMOLNPIOC_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define GIDMOLNPIOC_IPPNLAFOIJK_OFFSET UNITYSDK_OFFSET(0x755D20)
#define GIDMOLNPIOC_LILFKKNDABH_OFFSET UNITYSDK_OFFSET(0x76F6C0)
#define GIDMOLNPIOC_NCAEPBCFALD_OFFSET UNITYSDK_OFFSET(0x7574A0)
#define GIDMOLNPIOC___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GIDMOLNPIOC_TypeDefinitionIndex = 13528;

struct alignas(4) GIDMOLNPIOC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDMOLNPIOC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GIDMOLNPIOC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* NCAEPBCFALD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDMOLNPIOC_NCAEPBCFALD_OFFSET))(this);
	}

	::System::Boolean LILFKKNDABH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDMOLNPIOC_LILFKKNDABH_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDMOLNPIOC_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDMOLNPIOC_IFDIOIOCGDP_OFFSET))(this);
	}

	::System::Int32 HJONAJDEJOC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDMOLNPIOC_HJONAJDEJOC_OFFSET))(this);
	}

	::System::Int32 IPPNLAFOIJK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDMOLNPIOC_IPPNLAFOIJK_OFFSET))(this);
	}

	/*
	::GIDMOLNPIOC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GIDMOLNPIOC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GIDMOLNPIOC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 HCPKDCOCEHI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDMOLNPIOC_HCPKDCOCEHI_OFFSET))(this);
	}
};
