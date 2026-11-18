#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define GKFDDHILHAI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GKFDDHILHAI_DMPKFPNFMEA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GKFDDHILHAI_FCLNKNNNLKM_OFFSET UNITYSDK_OFFSET(0x755D20)
#define GKFDDHILHAI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GKFDDHILHAI_IHJIMKFFNEG_OFFSET UNITYSDK_OFFSET(0x754B50)
#define GKFDDHILHAI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GKFDDHILHAI_TypeDefinitionIndex = 12200;

struct alignas(4) GKFDDHILHAI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFDDHILHAI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GKFDDHILHAI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 FCLNKNNNLKM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFDDHILHAI_FCLNKNNNLKM_OFFSET))(this);
	}

	::System::Int32 DMPKFPNFMEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFDDHILHAI_DMPKFPNFMEA_OFFSET))(this);
	}

	::System::Int32 IHJIMKFFNEG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFDDHILHAI_IHJIMKFFNEG_OFFSET))(this);
	}

	/*
	::GKFDDHILHAI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GKFDDHILHAI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GKFDDHILHAI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
