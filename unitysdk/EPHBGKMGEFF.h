#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Struct.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define EPHBGKMGEFF_AINEJFJPHDB_OFFSET UNITYSDK_OFFSET(0x7A68F0)
#define EPHBGKMGEFF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EPHBGKMGEFF_ELKAHJACJNC_OFFSET UNITYSDK_OFFSET(0x7626A0)
#define EPHBGKMGEFF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EPHBGKMGEFF_HMONBDBEFGE_OFFSET UNITYSDK_OFFSET(0x762670)
#define EPHBGKMGEFF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EPHBGKMGEFF_TypeDefinitionIndex = 9340;

struct alignas(4) EPHBGKMGEFF
{
	::FlatBuffers::Struct KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHBGKMGEFF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EPHBGKMGEFF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::EPHBGKMGEFF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EPHBGKMGEFF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EPHBGKMGEFF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 AINEJFJPHDB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHBGKMGEFF_AINEJFJPHDB_OFFSET))(this);
	}

	::System::Int32 HMONBDBEFGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHBGKMGEFF_HMONBDBEFGE_OFFSET))(this);
	}

	::System::Int32 ELKAHJACJNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHBGKMGEFF_ELKAHJACJNC_OFFSET))(this);
	}
};
