#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KIPEAJCKNAJ_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KIPEAJCKNAJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KIPEAJCKNAJ_BMANPOABNGB_OFFSET UNITYSDK_OFFSET(0x756B10)
#define KIPEAJCKNAJ_DGFAJDNHCIJ_OFFSET UNITYSDK_OFFSET(0x756B90)
#define KIPEAJCKNAJ_DNKLBHKEDEM_OFFSET UNITYSDK_OFFSET(0x754970)
#define KIPEAJCKNAJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KIPEAJCKNAJ_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x754F10)
#define KIPEAJCKNAJ_NENDAECBCEM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KIPEAJCKNAJ___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KIPEAJCKNAJ_TypeDefinitionIndex = 15990;

struct alignas(4) KIPEAJCKNAJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPEAJCKNAJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KIPEAJCKNAJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPEAJCKNAJ_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPEAJCKNAJ_IFDIOIOCGDP_OFFSET))(this);
	}

	/*
	::KIPEAJCKNAJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KIPEAJCKNAJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KIPEAJCKNAJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 NENDAECBCEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPEAJCKNAJ_NENDAECBCEM_OFFSET))(this);
	}

	::System::Int32 DGFAJDNHCIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPEAJCKNAJ_DGFAJDNHCIJ_OFFSET))(this);
	}

	::System::String* BMANPOABNGB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPEAJCKNAJ_BMANPOABNGB_OFFSET))(this);
	}

	::System::Int32 DNKLBHKEDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPEAJCKNAJ_DNKLBHKEDEM_OFFSET))(this);
	}
};
