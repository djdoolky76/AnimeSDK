#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CLKFMEJJPCB_AAHGIENCPJB_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define CLKFMEJJPCB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define CLKFMEJJPCB_CPAHMGEBKBF_OFFSET UNITYSDK_OFFSET(0x7579B0)
#define CLKFMEJJPCB_DGCGHBEHKDI_OFFSET UNITYSDK_OFFSET(0x758320)
#define CLKFMEJJPCB_DIPPKPJEGKN_OFFSET UNITYSDK_OFFSET(0x761710)
#define CLKFMEJJPCB_FKNCOKEFCKD_OFFSET UNITYSDK_OFFSET(0x756440)
#define CLKFMEJJPCB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CLKFMEJJPCB_ILMDCCFJEJK_OFFSET UNITYSDK_OFFSET(0x756D50)
#define CLKFMEJJPCB_JGHGBKNFDNK_OFFSET UNITYSDK_OFFSET(0x756B10)
#define CLKFMEJJPCB_NGEHMMPNONH_OFFSET UNITYSDK_OFFSET(0x755D20)
#define CLKFMEJJPCB_NLIPHNEBDGD_OFFSET UNITYSDK_OFFSET(0x755C70)
#define CLKFMEJJPCB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x15791940)
#define CLKFMEJJPCB_PCIOEJDIMFO_OFFSET UNITYSDK_OFFSET(0x7565F0)
#define CLKFMEJJPCB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int CLKFMEJJPCB_TypeDefinitionIndex = 17113;

struct alignas(4) CLKFMEJJPCB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKFMEJJPCB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLKFMEJJPCB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 NLIPHNEBDGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKFMEJJPCB_NLIPHNEBDGD_OFFSET))(this);
	}

	/*
	static ::CLKFMEJJPCB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::CLKFMEJJPCB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLKFMEJJPCB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 NGEHMMPNONH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKFMEJJPCB_NGEHMMPNONH_OFFSET))(this);
	}

	::System::String* CPAHMGEBKBF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKFMEJJPCB_CPAHMGEBKBF_OFFSET))(this);
	}

	::System::String* ILMDCCFJEJK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKFMEJJPCB_ILMDCCFJEJK_OFFSET))(this);
	}

	::System::String* DIPPKPJEGKN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKFMEJJPCB_DIPPKPJEGKN_OFFSET))(this);
	}

	::System::Int32 FKNCOKEFCKD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKFMEJJPCB_FKNCOKEFCKD_OFFSET))(this);
	}

	::System::String* JGHGBKNFDNK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKFMEJJPCB_JGHGBKNFDNK_OFFSET))(this);
	}

	::System::String* DGCGHBEHKDI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKFMEJJPCB_DGCGHBEHKDI_OFFSET))(this);
	}

	::System::Int32 PCIOEJDIMFO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKFMEJJPCB_PCIOEJDIMFO_OFFSET))(this);
	}

	/*
	::CLKFMEJJPCB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CLKFMEJJPCB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLKFMEJJPCB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* AAHGIENCPJB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKFMEJJPCB_AAHGIENCPJB_OFFSET))(this);
	}
};
