#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MPJBDHIKDEB_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MPJBDHIKDEB_BFFMEAELHHI_OFFSET UNITYSDK_OFFSET(0x754F10)
#define MPJBDHIKDEB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MPJBDHIKDEB_EFMCBDANGJD_OFFSET UNITYSDK_OFFSET(0x754970)
#define MPJBDHIKDEB_FKLKNPJNPBB_OFFSET UNITYSDK_OFFSET(0x756B90)
#define MPJBDHIKDEB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MPJBDHIKDEB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MPJBDHIKDEB_TypeDefinitionIndex = 15197;

struct alignas(4) MPJBDHIKDEB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJBDHIKDEB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPJBDHIKDEB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::MPJBDHIKDEB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MPJBDHIKDEB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPJBDHIKDEB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 FKLKNPJNPBB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJBDHIKDEB_FKLKNPJNPBB_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJBDHIKDEB_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* BFFMEAELHHI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJBDHIKDEB_BFFMEAELHHI_OFFSET))(this);
	}

	::System::Int32 EFMCBDANGJD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJBDHIKDEB_EFMCBDANGJD_OFFSET))(this);
	}
};
