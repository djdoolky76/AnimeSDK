#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define GCNJFELIIAA_AMDGDDNMCOD_OFFSET UNITYSDK_OFFSET(0x756B90)
#define GCNJFELIIAA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GCNJFELIIAA_CABGACKAEBA_OFFSET UNITYSDK_OFFSET(0x754920)
#define GCNJFELIIAA_FOIONILHLAI_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GCNJFELIIAA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GCNJFELIIAA_HECLEPIPAAM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define GCNJFELIIAA_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x160E26D0)
#define GCNJFELIIAA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GCNJFELIIAA_TypeDefinitionIndex = 13221;

struct alignas(4) GCNJFELIIAA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCNJFELIIAA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GCNJFELIIAA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HECLEPIPAAM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCNJFELIIAA_HECLEPIPAAM_OFFSET))(this);
	}

	::System::Int32 AMDGDDNMCOD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCNJFELIIAA_AMDGDDNMCOD_OFFSET))(this);
	}

	::System::Int32 CABGACKAEBA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCNJFELIIAA_CABGACKAEBA_OFFSET))(this);
	}

	::System::Int32 FOIONILHLAI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCNJFELIIAA_FOIONILHLAI_OFFSET))(this);
	}

	/*
	static ::GCNJFELIIAA OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GCNJFELIIAA(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GCNJFELIIAA_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	/*
	::GCNJFELIIAA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GCNJFELIIAA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GCNJFELIIAA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
