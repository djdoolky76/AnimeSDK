#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FEHKIIBFNEH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FEHKIIBFNEH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FEHKIIBFNEH_HAJJDHNFHJE_OFFSET UNITYSDK_OFFSET(0x755E40)
#define FEHKIIBFNEH_MKOGNDNBCIB_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FEHKIIBFNEH_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A1A81E0)
#define FEHKIIBFNEH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FEHKIIBFNEH_TypeDefinitionIndex = 12631;

struct alignas(4) FEHKIIBFNEH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHKIIBFNEH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FEHKIIBFNEH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FEHKIIBFNEH OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FEHKIIBFNEH(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FEHKIIBFNEH_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 HAJJDHNFHJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHKIIBFNEH_HAJJDHNFHJE_OFFSET))(this);
	}

	::System::Int32 MKOGNDNBCIB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHKIIBFNEH_MKOGNDNBCIB_OFFSET))(this);
	}

	/*
	::FEHKIIBFNEH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FEHKIIBFNEH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FEHKIIBFNEH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
