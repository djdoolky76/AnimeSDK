#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define AGBNEKFIBCB_ACDOMAEJONK_OFFSET UNITYSDK_OFFSET(0x754F10)
#define AGBNEKFIBCB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define AGBNEKFIBCB_BPOPIDFJDBK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define AGBNEKFIBCB_DCGJGALIIHB_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define AGBNEKFIBCB_EFNEBLCNBPA_OFFSET UNITYSDK_OFFSET(0x754920)
#define AGBNEKFIBCB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AGBNEKFIBCB_IGKFAFBGBAP_OFFSET UNITYSDK_OFFSET(0x754970)
#define AGBNEKFIBCB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int AGBNEKFIBCB_TypeDefinitionIndex = 9319;

struct alignas(4) AGBNEKFIBCB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBNEKFIBCB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGBNEKFIBCB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* DCGJGALIIHB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBNEKFIBCB_DCGJGALIIHB_OFFSET))(this);
	}

	::System::String* ACDOMAEJONK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBNEKFIBCB_ACDOMAEJONK_OFFSET))(this);
	}

	::System::Int32 IGKFAFBGBAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBNEKFIBCB_IGKFAFBGBAP_OFFSET))(this);
	}

	::System::Int32 EFNEBLCNBPA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBNEKFIBCB_EFNEBLCNBPA_OFFSET))(this);
	}

	::System::Int32 BPOPIDFJDBK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBNEKFIBCB_BPOPIDFJDBK_OFFSET))(this);
	}

	/*
	::AGBNEKFIBCB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AGBNEKFIBCB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGBNEKFIBCB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
