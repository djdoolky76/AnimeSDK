#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define IKNDOKMILAA_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define IKNDOKMILAA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define IKNDOKMILAA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IKNDOKMILAA_NLAIFNFGGMA_OFFSET UNITYSDK_OFFSET(0x754B50)
#define IKNDOKMILAA_OJLCHPLOPBC_OFFSET UNITYSDK_OFFSET(0x755D20)
#define IKNDOKMILAA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int IKNDOKMILAA_TypeDefinitionIndex = 13690;

struct alignas(4) IKNDOKMILAA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNDOKMILAA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IKNDOKMILAA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNDOKMILAA_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 NLAIFNFGGMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNDOKMILAA_NLAIFNFGGMA_OFFSET))(this);
	}

	/*
	::IKNDOKMILAA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IKNDOKMILAA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IKNDOKMILAA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 OJLCHPLOPBC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNDOKMILAA_OJLCHPLOPBC_OFFSET))(this);
	}
};
