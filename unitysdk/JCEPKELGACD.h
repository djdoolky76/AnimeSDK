#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define JCEPKELGACD_AOJHOKPCCPI_OFFSET UNITYSDK_OFFSET(0x754B50)
#define JCEPKELGACD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define JCEPKELGACD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JCEPKELGACD_GILJKIIHBIG_OFFSET UNITYSDK_OFFSET(0x755D20)
#define JCEPKELGACD_HLKEDDIIHOH_OFFSET UNITYSDK_OFFSET(0x756B90)
#define JCEPKELGACD_MFPBPKMENFL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define JCEPKELGACD_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5E85B0)
#define JCEPKELGACD_OJKLHGCOIHP_OFFSET UNITYSDK_OFFSET(0x754920)
#define JCEPKELGACD___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JCEPKELGACD_TypeDefinitionIndex = 15045;

struct alignas(4) JCEPKELGACD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEPKELGACD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCEPKELGACD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JCEPKELGACD OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::JCEPKELGACD(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + JCEPKELGACD_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 OJKLHGCOIHP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEPKELGACD_OJKLHGCOIHP_OFFSET))(this);
	}

	::System::Int32 HLKEDDIIHOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEPKELGACD_HLKEDDIIHOH_OFFSET))(this);
	}

	::System::Int32 MFPBPKMENFL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEPKELGACD_MFPBPKMENFL_OFFSET))(this);
	}

	::System::Int32 AOJHOKPCCPI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEPKELGACD_AOJHOKPCCPI_OFFSET))(this);
	}

	::System::Int32 GILJKIIHBIG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEPKELGACD_GILJKIIHBIG_OFFSET))(this);
	}

	/*
	::JCEPKELGACD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JCEPKELGACD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JCEPKELGACD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
