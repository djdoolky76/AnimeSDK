#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define LJOAELHFLAH_BFLOMKBEFMD_OFFSET UNITYSDK_OFFSET(0x755D20)
#define LJOAELHFLAH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define LJOAELHFLAH_DFKPMFMMMFG_OFFSET UNITYSDK_OFFSET(0x755C70)
#define LJOAELHFLAH_ELOAKJLAGOH_OFFSET UNITYSDK_OFFSET(0x754C80)
#define LJOAELHFLAH_EOIGBHOODIM_OFFSET UNITYSDK_OFFSET(0x754920)
#define LJOAELHFLAH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LJOAELHFLAH_LAMJHEGFIHB_OFFSET UNITYSDK_OFFSET(0x754970)
#define LJOAELHFLAH_MCBCABAECOK_OFFSET UNITYSDK_OFFSET(0x754B50)
#define LJOAELHFLAH_PEDGGPCKNHM_OFFSET UNITYSDK_OFFSET(0x756B90)
#define LJOAELHFLAH___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int LJOAELHFLAH_TypeDefinitionIndex = 9269;

struct alignas(4) LJOAELHFLAH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOAELHFLAH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LJOAELHFLAH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::LJOAELHFLAH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LJOAELHFLAH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LJOAELHFLAH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 EOIGBHOODIM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOAELHFLAH_EOIGBHOODIM_OFFSET))(this);
	}

	::System::Int32 PEDGGPCKNHM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOAELHFLAH_PEDGGPCKNHM_OFFSET))(this);
	}

	::System::Int32 BFLOMKBEFMD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOAELHFLAH_BFLOMKBEFMD_OFFSET))(this);
	}

	::System::Int32 MCBCABAECOK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOAELHFLAH_MCBCABAECOK_OFFSET))(this);
	}

	::System::Int32 ELOAKJLAGOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOAELHFLAH_ELOAKJLAGOH_OFFSET))(this);
	}

	::System::Int32 DFKPMFMMMFG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOAELHFLAH_DFKPMFMMMFG_OFFSET))(this);
	}

	::System::Int32 LAMJHEGFIHB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOAELHFLAH_LAMJHEGFIHB_OFFSET))(this);
	}
};
