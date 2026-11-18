#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define ICOAEJFDPOK_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define ICOAEJFDPOK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define ICOAEJFDPOK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ICOAEJFDPOK_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x754B50)
#define ICOAEJFDPOK_LNHGCCNPKCD_OFFSET UNITYSDK_OFFSET(0x755A00)
#define ICOAEJFDPOK_OCICODHEAON_OFFSET UNITYSDK_OFFSET(0x755D20)
#define ICOAEJFDPOK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int ICOAEJFDPOK_TypeDefinitionIndex = 10342;

struct alignas(4) ICOAEJFDPOK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOAEJFDPOK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ICOAEJFDPOK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::ICOAEJFDPOK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ICOAEJFDPOK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ICOAEJFDPOK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* LNHGCCNPKCD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOAEJFDPOK_LNHGCCNPKCD_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOAEJFDPOK_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Int32 OCICODHEAON()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOAEJFDPOK_OCICODHEAON_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOAEJFDPOK_ACOEONABOJL_OFFSET))(this);
	}
};
