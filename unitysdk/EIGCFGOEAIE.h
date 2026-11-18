#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define EIGCFGOEAIE_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x754C80)
#define EIGCFGOEAIE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define EIGCFGOEAIE_BLLOPKJDOBE_OFFSET UNITYSDK_OFFSET(0x756B90)
#define EIGCFGOEAIE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EIGCFGOEAIE_HPJBODFFHAJ_OFFSET UNITYSDK_OFFSET(0x754B50)
#define EIGCFGOEAIE_HPKIHJABBFP_OFFSET UNITYSDK_OFFSET(0x754920)
#define EIGCFGOEAIE_PGMLINMFAFJ_OFFSET UNITYSDK_OFFSET(0x754970)
#define EIGCFGOEAIE_PGOOCKILDII_OFFSET UNITYSDK_OFFSET(0x755D20)
#define EIGCFGOEAIE___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int EIGCFGOEAIE_TypeDefinitionIndex = 11108;

struct alignas(4) EIGCFGOEAIE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIGCFGOEAIE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIGCFGOEAIE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 HPKIHJABBFP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIGCFGOEAIE_HPKIHJABBFP_OFFSET))(this);
	}

	::System::Int32 PGOOCKILDII()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIGCFGOEAIE_PGOOCKILDII_OFFSET))(this);
	}

	/*
	::EIGCFGOEAIE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EIGCFGOEAIE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EIGCFGOEAIE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIGCFGOEAIE_ACOEONABOJL_OFFSET))(this);
	}

	::System::Int32 HPJBODFFHAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIGCFGOEAIE_HPJBODFFHAJ_OFFSET))(this);
	}

	::System::Int32 PGMLINMFAFJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIGCFGOEAIE_PGMLINMFAFJ_OFFSET))(this);
	}

	::System::Int32 BLLOPKJDOBE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIGCFGOEAIE_BLLOPKJDOBE_OFFSET))(this);
	}
};
