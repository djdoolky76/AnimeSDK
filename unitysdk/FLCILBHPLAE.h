#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FLCILBHPLAE_AGJHKMNMLBK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FLCILBHPLAE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FLCILBHPLAE_DLJPIDNDNOE_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FLCILBHPLAE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FLCILBHPLAE_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B109840)
#define FLCILBHPLAE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FLCILBHPLAE_TypeDefinitionIndex = 11414;

struct alignas(4) FLCILBHPLAE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCILBHPLAE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FLCILBHPLAE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 AGJHKMNMLBK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCILBHPLAE_AGJHKMNMLBK_OFFSET))(this);
	}

	/*
	::FLCILBHPLAE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FLCILBHPLAE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FLCILBHPLAE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 DLJPIDNDNOE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCILBHPLAE_DLJPIDNDNOE_OFFSET))(this);
	}

	/*
	static ::FLCILBHPLAE OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::FLCILBHPLAE(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + FLCILBHPLAE_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
