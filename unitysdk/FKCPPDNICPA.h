#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define FKCPPDNICPA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define FKCPPDNICPA_ECKMIJBGMOK_OFFSET UNITYSDK_OFFSET(0x755D20)
#define FKCPPDNICPA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FKCPPDNICPA_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754920)
#define FKCPPDNICPA_JHHPOALCJJP_OFFSET UNITYSDK_OFFSET(0x756B90)
#define FKCPPDNICPA_MDLLGIMAGCP_OFFSET UNITYSDK_OFFSET(0x754C80)
#define FKCPPDNICPA_NENDAECBCEM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define FKCPPDNICPA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int FKCPPDNICPA_TypeDefinitionIndex = 15649;

struct alignas(4) FKCPPDNICPA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCPPDNICPA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FKCPPDNICPA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 MDLLGIMAGCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCPPDNICPA_MDLLGIMAGCP_OFFSET))(this);
	}

	::System::Int32 NENDAECBCEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCPPDNICPA_NENDAECBCEM_OFFSET))(this);
	}

	/*
	::FKCPPDNICPA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FKCPPDNICPA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FKCPPDNICPA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ECKMIJBGMOK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCPPDNICPA_ECKMIJBGMOK_OFFSET))(this);
	}

	::System::Int32 JHHPOALCJJP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCPPDNICPA_JHHPOALCJJP_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCPPDNICPA_GKBAJJACIEA_OFFSET))(this);
	}
};
