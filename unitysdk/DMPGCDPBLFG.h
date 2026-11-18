#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define DMPGCDPBLFG_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DMPGCDPBLFG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DMPGCDPBLFG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DMPGCDPBLFG_GNHBAMGIMCM_OFFSET UNITYSDK_OFFSET(0x756B90)
#define DMPGCDPBLFG_KMACPELJCJO_OFFSET UNITYSDK_OFFSET(0x754920)
#define DMPGCDPBLFG_MENEFNNFOAD_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DMPGCDPBLFG___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DMPGCDPBLFG_TypeDefinitionIndex = 17370;

struct alignas(4) DMPGCDPBLFG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMPGCDPBLFG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMPGCDPBLFG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMPGCDPBLFG_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 MENEFNNFOAD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMPGCDPBLFG_MENEFNNFOAD_OFFSET))(this);
	}

	::System::Int32 GNHBAMGIMCM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMPGCDPBLFG_GNHBAMGIMCM_OFFSET))(this);
	}

	::System::Int32 KMACPELJCJO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMPGCDPBLFG_KMACPELJCJO_OFFSET))(this);
	}

	/*
	::DMPGCDPBLFG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DMPGCDPBLFG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DMPGCDPBLFG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
