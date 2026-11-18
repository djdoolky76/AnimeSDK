#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define FHHBAGAJAJH_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FHHBAGAJAJH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FHHBAGAJAJH_FFKHDOBKMDB_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define FHHBAGAJAJH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FHHBAGAJAJH_PEOEBEBFIJO_OFFSET UNITYSDK_OFFSET(0x764220)
#define FHHBAGAJAJH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FHHBAGAJAJH_TypeDefinitionIndex = 15570;

struct alignas(4) FHHBAGAJAJH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHBAGAJAJH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHHBAGAJAJH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Single PEOEBEBFIJO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHBAGAJAJH_PEOEBEBFIJO_OFFSET))(this);
	}

	/*
	::FHHBAGAJAJH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FHHBAGAJAJH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHHBAGAJAJH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* FFKHDOBKMDB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHBAGAJAJH_FFKHDOBKMDB_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHBAGAJAJH_ACOEONABOJL_OFFSET))(this);
	}
};
