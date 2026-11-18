#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KBCNMGEJMDA_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KBCNMGEJMDA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KBCNMGEJMDA_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x754F10)
#define KBCNMGEJMDA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KBCNMGEJMDA_LKOCEHBNBBL_OFFSET UNITYSDK_OFFSET(0x754920)
#define KBCNMGEJMDA_OIFKOPIILOO_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define KBCNMGEJMDA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KBCNMGEJMDA_TypeDefinitionIndex = 10242;

struct alignas(4) KBCNMGEJMDA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCNMGEJMDA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBCNMGEJMDA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* OIFKOPIILOO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCNMGEJMDA_OIFKOPIILOO_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCNMGEJMDA_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCNMGEJMDA_DECMGICKDLH_OFFSET))(this);
	}

	::System::Int32 LKOCEHBNBBL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCNMGEJMDA_LKOCEHBNBBL_OFFSET))(this);
	}

	/*
	::KBCNMGEJMDA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KBCNMGEJMDA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KBCNMGEJMDA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
