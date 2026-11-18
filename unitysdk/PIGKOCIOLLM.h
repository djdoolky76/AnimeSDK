#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define PIGKOCIOLLM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PIGKOCIOLLM_BPOPIDFJDBK_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PIGKOCIOLLM_GCJEHAPDEMH_OFFSET UNITYSDK_OFFSET(0x754B50)
#define PIGKOCIOLLM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PIGKOCIOLLM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1EE033F0)
#define PIGKOCIOLLM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PIGKOCIOLLM_TypeDefinitionIndex = 15003;

struct alignas(4) PIGKOCIOLLM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGKOCIOLLM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PIGKOCIOLLM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::PIGKOCIOLLM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PIGKOCIOLLM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PIGKOCIOLLM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 BPOPIDFJDBK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGKOCIOLLM_BPOPIDFJDBK_OFFSET))(this);
	}

	::System::Int32 GCJEHAPDEMH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGKOCIOLLM_GCJEHAPDEMH_OFFSET))(this);
	}

	/*
	static ::PIGKOCIOLLM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PIGKOCIOLLM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PIGKOCIOLLM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/
};
