#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KPNOAJONDEA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define KPNOAJONDEA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KPNOAJONDEA_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define KPNOAJONDEA_JENCFBLNJBL_OFFSET UNITYSDK_OFFSET(0x755A00)
#define KPNOAJONDEA_LBMEFLAOHFP_OFFSET UNITYSDK_OFFSET(0x754920)
#define KPNOAJONDEA_MFOOKILPPDI_OFFSET UNITYSDK_OFFSET(0x755D20)
#define KPNOAJONDEA_NENDAECBCEM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define KPNOAJONDEA_NOFKCFKLFFD_OFFSET UNITYSDK_OFFSET(0x754970)
#define KPNOAJONDEA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int KPNOAJONDEA_TypeDefinitionIndex = 9624;

struct alignas(4) KPNOAJONDEA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNOAJONDEA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KPNOAJONDEA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NENDAECBCEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNOAJONDEA_NENDAECBCEM_OFFSET))(this);
	}

	::System::Int32 LBMEFLAOHFP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNOAJONDEA_LBMEFLAOHFP_OFFSET))(this);
	}

	::System::String* JENCFBLNJBL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNOAJONDEA_JENCFBLNJBL_OFFSET))(this);
	}

	::System::Int32 NOFKCFKLFFD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNOAJONDEA_NOFKCFKLFFD_OFFSET))(this);
	}

	/*
	::KPNOAJONDEA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KPNOAJONDEA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KPNOAJONDEA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 MFOOKILPPDI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNOAJONDEA_MFOOKILPPDI_OFFSET))(this);
	}

	::System::Int32 GKBAJJACIEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNOAJONDEA_GKBAJJACIEA_OFFSET))(this);
	}
};
