#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Struct.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define HNFADNMADCK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define HNFADNMADCK_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x762670)
#define HNFADNMADCK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HNFADNMADCK_LNLFIAOOEOG_OFFSET UNITYSDK_OFFSET(0x7626A0)
#define HNFADNMADCK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int HNFADNMADCK_TypeDefinitionIndex = 13296;

struct alignas(4) HNFADNMADCK
{
	::FlatBuffers::Struct KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFADNMADCK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNFADNMADCK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 LNLFIAOOEOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFADNMADCK_LNLFIAOOEOG_OFFSET))(this);
	}

	/*
	::HNFADNMADCK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HNFADNMADCK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNFADNMADCK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFADNMADCK_DNKLBHKEDEM_OFFSET))(this);
	}
};
