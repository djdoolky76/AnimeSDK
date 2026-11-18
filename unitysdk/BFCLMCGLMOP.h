#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define BFCLMCGLMOP_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define BFCLMCGLMOP_AGHFCJEPDMJ_OFFSET UNITYSDK_OFFSET(0x754B50)
#define BFCLMCGLMOP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define BFCLMCGLMOP_DGFAJDNHCIJ_OFFSET UNITYSDK_OFFSET(0x756B90)
#define BFCLMCGLMOP_GAPFKOEALLP_OFFSET UNITYSDK_OFFSET(0x754970)
#define BFCLMCGLMOP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BFCLMCGLMOP_HPGEDFOEOIO_OFFSET UNITYSDK_OFFSET(0x756B10)
#define BFCLMCGLMOP_INOMCCJAEBN_OFFSET UNITYSDK_OFFSET(0x754F10)
#define BFCLMCGLMOP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int BFCLMCGLMOP_TypeDefinitionIndex = 12692;

struct alignas(4) BFCLMCGLMOP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCLMCGLMOP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BFCLMCGLMOP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 DGFAJDNHCIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCLMCGLMOP_DGFAJDNHCIJ_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCLMCGLMOP_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* HPGEDFOEOIO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCLMCGLMOP_HPGEDFOEOIO_OFFSET))(this);
	}

	::System::Int32 AGHFCJEPDMJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCLMCGLMOP_AGHFCJEPDMJ_OFFSET))(this);
	}

	::System::Int32 GAPFKOEALLP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCLMCGLMOP_GAPFKOEALLP_OFFSET))(this);
	}

	/*
	::BFCLMCGLMOP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BFCLMCGLMOP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BFCLMCGLMOP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* INOMCCJAEBN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCLMCGLMOP_INOMCCJAEBN_OFFSET))(this);
	}
};
