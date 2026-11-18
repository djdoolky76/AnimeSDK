#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Struct.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define NLAOAFGNDNF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define NLAOAFGNDNF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NLAOAFGNDNF_IDINMHHOOOK_OFFSET UNITYSDK_OFFSET(0x762670)
#define NLAOAFGNDNF_LNLFIAOOEOG_OFFSET UNITYSDK_OFFSET(0x7626A0)
#define NLAOAFGNDNF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int NLAOAFGNDNF_TypeDefinitionIndex = 9880;

struct alignas(4) NLAOAFGNDNF
{
	::FlatBuffers::Struct KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAOAFGNDNF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NLAOAFGNDNF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::NLAOAFGNDNF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NLAOAFGNDNF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NLAOAFGNDNF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 LNLFIAOOEOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAOAFGNDNF_LNLFIAOOEOG_OFFSET))(this);
	}

	::System::Int32 IDINMHHOOOK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAOAFGNDNF_IDINMHHOOOK_OFFSET))(this);
	}
};
