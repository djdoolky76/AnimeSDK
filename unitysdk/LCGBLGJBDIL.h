#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define LCGBLGJBDIL_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LCGBLGJBDIL_ANGPPJEGLMC_OFFSET UNITYSDK_OFFSET(0x756B90)
#define LCGBLGJBDIL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LCGBLGJBDIL_EGOCINKFCGE_OFFSET UNITYSDK_OFFSET(0x754970)
#define LCGBLGJBDIL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LCGBLGJBDIL_GIJKCBKKFII_OFFSET UNITYSDK_OFFSET(0x754920)
#define LCGBLGJBDIL_OKGKODNEICJ_OFFSET UNITYSDK_OFFSET(0x755C70)
#define LCGBLGJBDIL_PDMGOMIAGFI_OFFSET UNITYSDK_OFFSET(0x754B50)
#define LCGBLGJBDIL___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LCGBLGJBDIL_TypeDefinitionIndex = 14147;

struct alignas(4) LCGBLGJBDIL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGBLGJBDIL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCGBLGJBDIL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 ANGPPJEGLMC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGBLGJBDIL_ANGPPJEGLMC_OFFSET))(this);
	}

	::System::Int32 EGOCINKFCGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGBLGJBDIL_EGOCINKFCGE_OFFSET))(this);
	}

	::System::Int32 GIJKCBKKFII()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGBLGJBDIL_GIJKCBKKFII_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGBLGJBDIL_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 OKGKODNEICJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGBLGJBDIL_OKGKODNEICJ_OFFSET))(this);
	}

	::System::Int32 PDMGOMIAGFI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGBLGJBDIL_PDMGOMIAGFI_OFFSET))(this);
	}

	/*
	::LCGBLGJBDIL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LCGBLGJBDIL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCGBLGJBDIL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
