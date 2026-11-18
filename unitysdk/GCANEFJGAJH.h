#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define GCANEFJGAJH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GCANEFJGAJH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GCANEFJGAJH_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define GCANEFJGAJH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GCANEFJGAJH_GGACDNDHAEO_OFFSET UNITYSDK_OFFSET(0x756B90)
#define GCANEFJGAJH_GIJGALKAMHI_OFFSET UNITYSDK_OFFSET(0x754F10)
#define GCANEFJGAJH_OECBEAJKNLE_OFFSET UNITYSDK_OFFSET(0x754920)
#define GCANEFJGAJH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GCANEFJGAJH_TypeDefinitionIndex = 9334;

struct alignas(4) GCANEFJGAJH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCANEFJGAJH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GCANEFJGAJH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCANEFJGAJH_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 GGACDNDHAEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCANEFJGAJH_GGACDNDHAEO_OFFSET))(this);
	}

	::System::Int32 OECBEAJKNLE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCANEFJGAJH_OECBEAJKNLE_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCANEFJGAJH_DECMGICKDLH_OFFSET))(this);
	}

	::System::String* GIJGALKAMHI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCANEFJGAJH_GIJGALKAMHI_OFFSET))(this);
	}

	/*
	::GCANEFJGAJH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GCANEFJGAJH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GCANEFJGAJH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
