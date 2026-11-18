#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define CAFDLHGBPME_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CAFDLHGBPME_FOIONILHLAI_OFFSET UNITYSDK_OFFSET(0x754C80)
#define CAFDLHGBPME_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CAFDLHGBPME_HECLEPIPAAM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define CAFDLHGBPME_ICINFJGJJDE_OFFSET UNITYSDK_OFFSET(0x754B50)
#define CAFDLHGBPME_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x17A7FC80)
#define CAFDLHGBPME___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CAFDLHGBPME_TypeDefinitionIndex = 12375;

struct alignas(4) CAFDLHGBPME
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFDLHGBPME_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CAFDLHGBPME___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ICINFJGJJDE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFDLHGBPME_ICINFJGJJDE_OFFSET))(this);
	}

	/*
	static ::CAFDLHGBPME OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CAFDLHGBPME(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CAFDLHGBPME_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::CAFDLHGBPME BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CAFDLHGBPME(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CAFDLHGBPME_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 FOIONILHLAI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFDLHGBPME_FOIONILHLAI_OFFSET))(this);
	}

	::System::Int32 HECLEPIPAAM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFDLHGBPME_HECLEPIPAAM_OFFSET))(this);
	}
};
