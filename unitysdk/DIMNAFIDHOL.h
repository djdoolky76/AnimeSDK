#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define DIMNAFIDHOL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define DIMNAFIDHOL_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x755D20)
#define DIMNAFIDHOL_CHMPILPGOON_OFFSET UNITYSDK_OFFSET(0x757290)
#define DIMNAFIDHOL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DIMNAFIDHOL_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define DIMNAFIDHOL_JENCFBLNJBL_OFFSET UNITYSDK_OFFSET(0x755A00)
#define DIMNAFIDHOL_MAHJELIDOOE_OFFSET UNITYSDK_OFFSET(0x755C70)
#define DIMNAFIDHOL_OKGKODNEICJ_OFFSET UNITYSDK_OFFSET(0x754920)
#define DIMNAFIDHOL_PKOMGKJLKGM_OFFSET UNITYSDK_OFFSET(0x754970)
#define DIMNAFIDHOL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int DIMNAFIDHOL_TypeDefinitionIndex = 14200;

struct alignas(4) DIMNAFIDHOL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMNAFIDHOL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DIMNAFIDHOL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 OKGKODNEICJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMNAFIDHOL_OKGKODNEICJ_OFFSET))(this);
	}

	/*
	::DIMNAFIDHOL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DIMNAFIDHOL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DIMNAFIDHOL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 MAHJELIDOOE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMNAFIDHOL_MAHJELIDOOE_OFFSET))(this);
	}

	::System::Int32 PKOMGKJLKGM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMNAFIDHOL_PKOMGKJLKGM_OFFSET))(this);
	}

	::System::String* CHMPILPGOON()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMNAFIDHOL_CHMPILPGOON_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMNAFIDHOL_GKBAJJACIEA_OFFSET))(this);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMNAFIDHOL_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::String* JENCFBLNJBL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMNAFIDHOL_JENCFBLNJBL_OFFSET))(this);
	}
};
